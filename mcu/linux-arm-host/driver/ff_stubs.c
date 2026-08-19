/* Native FatFs implementation — POSIX file I/O backing for FatFs API.
 *
 * The host filesystem is always available. f_mount() succeeds unconditionally.
 * File paths map directly to the host filesystem (absolute or relative).
 */

#include "ff.h"

#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

FRESULT f_mount(FATFS* fs, const char* path, BYTE opt) {
    (void)path; (void)opt;
    if (fs) fs->_mounted = 1;
    return FR_OK;
}

FRESULT f_open(FIL* fp, const char* path, BYTE mode) {
    if (!fp || !path) return FR_INVALID_PARAMETER;

    const char* fmode;
    if ((mode & FA_CREATE_ALWAYS) && (mode & FA_WRITE)) {
        fmode = (mode & FA_READ) ? "w+b" : "wb";
    } else if ((mode & FA_OPEN_APPEND) && (mode & FA_WRITE)) {
        fmode = (mode & FA_READ) ? "a+b" : "ab";
    } else if ((mode & FA_CREATE_NEW) && (mode & FA_WRITE)) {
        /* Fail if file exists */
        FILE* test = fopen(path, "rb");
        if (test) { fclose(test); return FR_EXIST; }
        fmode = "w+b";
    } else if (mode & FA_WRITE) {
        fmode = (mode & FA_READ) ? "r+b" : "r+b";
    } else {
        fmode = "rb";
    }

    FILE* f = fopen(path, fmode);
    if (!f) {
        if (errno == ENOENT) return FR_NO_FILE;
        if (errno == EACCES) return FR_DENIED;
        return FR_DISK_ERR;
    }

    fp->_fp = f;
    return FR_OK;
}

FRESULT f_close(FIL* fp) {
    if (!fp || !fp->_fp) return FR_INVALID_OBJECT;
    fclose((FILE*)fp->_fp);
    fp->_fp = NULL;
    return FR_OK;
}

FRESULT f_read(FIL* fp, void* buff, UINT btr, UINT* br) {
    if (!fp || !fp->_fp) return FR_INVALID_OBJECT;
    size_t n = fread(buff, 1, btr, (FILE*)fp->_fp);
    if (br) *br = (UINT)n;
    return FR_OK;
}

FRESULT f_write(FIL* fp, const void* buff, UINT btw, UINT* bw) {
    if (!fp || !fp->_fp) return FR_INVALID_OBJECT;
    size_t n = fwrite(buff, 1, btw, (FILE*)fp->_fp);
    if (bw) *bw = (UINT)n;
    return FR_OK;
}

FRESULT f_sync(FIL* fp) {
    if (!fp || !fp->_fp) return FR_INVALID_OBJECT;
    fflush((FILE*)fp->_fp);
    return FR_OK;
}

FRESULT f_unlink(const char* path) {
    if (!path) return FR_INVALID_PARAMETER;
    if (unlink(path) != 0) {
        if (errno == ENOENT) return FR_NO_FILE;
        return FR_DENIED;
    }
    return FR_OK;
}

FRESULT f_stat(const char* path, FILINFO* fno) {
    if (!path) return FR_INVALID_PARAMETER;
    struct stat st;
    if (stat(path, &st) != 0) {
        if (errno == ENOENT) return FR_NO_FILE;
        return FR_DISK_ERR;
    }
    if (fno) {
        fno->fsize = (DWORD)st.st_size;
        fno->fdate = 0;
        fno->ftime = 0;
        fno->fattrib = 0;
        fno->fname[0] = '\0';
    }
    return FR_OK;
}

FRESULT f_mkdir(const char* path) {
    if (!path) return FR_INVALID_PARAMETER;
    if (mkdir(path, 0755) != 0) {
        if (errno == EEXIST) return FR_EXIST;
        return FR_DENIED;
    }
    return FR_OK;
}
