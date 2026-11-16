#include "tc_rt.h"

s32 fn_800c2b0c(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0x5c0u);
    if (r4 == 0x2e8u) {
        return 0;
    }
    if (r4 == 0x286u) {
        return 7;
    }
    r0 = 0u;
    if ((s32)r4 >= 635 && (s32)r4 <= 639) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        return 2;
    }
    r0 = 0u;
    if ((s32)r4 >= 630 && (s32)r4 <= 634) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        return 3;
    }
    r0 = 0u;
    if ((s32)r4 >= 625 && (s32)r4 <= 629) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        return 8;
    }
    r0 = 0u;
    if ((s32)r4 >= 640 && (s32)r4 <= 644) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        return 4;
    }
    r0 = 0u;
    if ((s32)r4 >= 0 && (s32)r4 <= 36) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        return 5;
    }
    if ((s32)r4 >= 504 && (s32)r4 <= 624) {
        return 1;
    }
    if (r4 == 0x285u) {
        return 9;
    }
    r0 = 0u;
    if ((s32)r4 >= 353 && (s32)r4 <= 360) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        return 10;
    }
    return param_1;
}
