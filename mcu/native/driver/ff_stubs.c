/* Native FatFs stub implementation — all operations fail gracefully. */

#include "ff.h"

FRESULT f_mount(FATFS* fs, const char* path, BYTE opt) {
    (void)fs; (void)path; (void)opt;
    return FR_NOT_READY;
}

FRESULT f_open(FIL* fp, const char* path, BYTE mode) {
    (void)fp; (void)path; (void)mode;
    return FR_NO_FILE;
}

FRESULT f_close(FIL* fp) {
    (void)fp;
    return FR_OK;
}

FRESULT f_read(FIL* fp, void* buff, UINT btr, UINT* br) {
    (void)fp; (void)buff; (void)btr;
    if (br) *br = 0;
    return FR_INVALID_OBJECT;
}

FRESULT f_write(FIL* fp, const void* buff, UINT btw, UINT* bw) {
    (void)fp; (void)buff; (void)btw;
    if (bw) *bw = 0;
    return FR_INVALID_OBJECT;
}

FRESULT f_sync(FIL* fp) {
    (void)fp;
    return FR_OK;
}

FRESULT f_unlink(const char* path) {
    (void)path;
    return FR_NO_FILE;
}

FRESULT f_stat(const char* path, FILINFO* fno) {
    (void)path; (void)fno;
    return FR_NO_FILE;
}

FRESULT f_mkdir(const char* path) {
    (void)path;
    return FR_DENIED;
}
