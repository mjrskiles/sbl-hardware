/* Native FatFs implementation — backs FatFs API with POSIX file I/O.
 *
 * f_mount() always succeeds (host filesystem is always available).
 * f_open/f_read/f_write/f_close use fopen/fread/fwrite/fclose internally.
 * Paths map directly to the host filesystem.
 */

#ifndef FF_DEFINED
#define FF_DEFINED  1

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* File system result codes */
typedef enum {
    FR_OK = 0,
    FR_DISK_ERR,
    FR_INT_ERR,
    FR_NOT_READY,
    FR_NO_FILE,
    FR_NO_PATH,
    FR_INVALID_NAME,
    FR_DENIED,
    FR_EXIST,
    FR_INVALID_OBJECT,
    FR_WRITE_PROTECTED,
    FR_INVALID_DRIVE,
    FR_NOT_ENABLED,
    FR_NO_FILESYSTEM,
    FR_MKFS_ABORTED,
    FR_TIMEOUT,
    FR_LOCKED,
    FR_NOT_ENOUGH_CORE,
    FR_TOO_MANY_OPEN_FILES,
    FR_INVALID_PARAMETER
} FRESULT;

/* File access mode flags */
#define FA_READ       0x01
#define FA_WRITE      0x02
#define FA_OPEN_EXISTING  0x00
#define FA_CREATE_NEW     0x04
#define FA_CREATE_ALWAYS  0x08
#define FA_OPEN_ALWAYS    0x10
#define FA_OPEN_APPEND    0x30

/* Minimal type definitions */
typedef unsigned int UINT;
typedef unsigned char BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;

/* File object structure — holds a POSIX FILE* on native */
typedef struct {
    void* _fp;  /* FILE* cast to void* for C compatibility */
} FIL;

/* Filesystem object structure */
typedef struct {
    BYTE _mounted;
} FATFS;

/* File info structure */
typedef struct {
    DWORD fsize;
    WORD  fdate;
    WORD  ftime;
    BYTE  fattrib;
    char  fname[13];
} FILINFO;

/* File system functions — backed by POSIX on native */
FRESULT f_mount(FATFS* fs, const char* path, BYTE opt);
FRESULT f_open(FIL* fp, const char* path, BYTE mode);
FRESULT f_close(FIL* fp);
FRESULT f_read(FIL* fp, void* buff, UINT btr, UINT* br);
FRESULT f_write(FIL* fp, const void* buff, UINT btw, UINT* bw);
FRESULT f_sync(FIL* fp);
FRESULT f_unlink(const char* path);
FRESULT f_stat(const char* path, FILINFO* fno);
FRESULT f_mkdir(const char* path);

#ifdef __cplusplus
}
#endif

#endif /* FF_DEFINED */
