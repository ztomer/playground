#include <stdio.h>
#include <stdlib.h>

#define DEBUG_TZ_tqCp_protection (0xAA)
#define DEBUG_TZ_tq_protection (0xBB)

#define WR_DEBUG_TQ_CP_PROTECTION_LENGTH (4 + 4 + 8)
#define WR_DEBUG_TQ_CP_PROTECTION { \
    DEBUG_TZ_tqCp_protection, DEBUG_TZ_tqCp_protection, \
    DEBUG_TZ_tqCp_protection, DEBUG_TZ_tqCp_protection, \
    DEBUG_TZ_tqCp_protection, DEBUG_TZ_tqCp_protection, \
    DEBUG_TZ_tqCp_protection, DEBUG_TZ_tqCp_protection, \
    DEBUG_TZ_tqCp_protection, DEBUG_TZ_tqCp_protection, \
    DEBUG_TZ_tqCp_protection, DEBUG_TZ_tqCp_protection, \
    DEBUG_TZ_tqCp_protection, DEBUG_TZ_tqCp_protection, \
    DEBUG_TZ_tqCp_protection, DEBUG_TZ_tqCp_protection};

/* 110*16 buffer overflow detection array*/
#define WR_DEBUG_TQ_PROTECTION_LENGTH (16*110)
#define WR_DEBUG_TQ_PROTECTION {\
/* 0 */ \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 1 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 2 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 3 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 4 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 5 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 6 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 7 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 8 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 9 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 10 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 11 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 12 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 13 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 14 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 15 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 16 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 17 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 18 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 19 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 20 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 21 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 22 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 23 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 24 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 25 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 26 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 27 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 28 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 29 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 30 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 31 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 32 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 33 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 34 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 35 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 36 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 37 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 38 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 39 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 40 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 41 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 42 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 43 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 44 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 45 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 46 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 47 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 48 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 49 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 50 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 51 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 52 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 53 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 54 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 55 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 56 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 57 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 58 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 59 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 60 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 61 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 62 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 63 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 64 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 65 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 66 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 67 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 68 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 69 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 70 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 71 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 72 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 73 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 74 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 75 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 76 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 77 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 78 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 79 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 80 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 81 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 82 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 83 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 84 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 85 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 86 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 87 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 88 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 89 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 90 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 91 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 92 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 93 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 94 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 95 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 96 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 97 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 98 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 99 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 100 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 101 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 102 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 103 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 104 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 105 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 106 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 107 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 108 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
/* 109 */ \
 DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection, \
DEBUG_TZ_tq_protection, DEBUG_TZ_tq_protection \
};


#define DIV_1(__a, __b) ((__a + (__b>>2))/__b)
int main(){

#if 0
    for (int j=0; j< 110; j++) {
        printf("/* %d */ \\\n ", j);
        for (int i=0; i < 8; i++){
            printf("DEBUG_TZ_tqCp_protection, DEBUG_TZ_tqCp_protection, \\\n");
        } 
   }
   #endif
   
   #define BLAH  { \
   2, \
   /* hello */ \
   3  \
   };
   
   char a[2] = BLAH;
   printf("%d, %d\n", a[0], a[1]);
   
   
    unsigned char b[WR_DEBUG_TQ_CP_PROTECTION_LENGTH ] = WR_DEBUG_TQ_CP_PROTECTION ;
    unsigned char c[WR_DEBUG_TQ_PROTECTION_LENGTH ] = WR_DEBUG_TQ_PROTECTION ;

   return 0;
}
