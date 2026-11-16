#include "tc_rt.h"

u32 fn_801cb34c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0;
    (void)param_1;
    r7 = rd32(0x8033bd18u);
    r6 = rd32(0x8033bd1cu);
    r5 = rd32(0x8033bd20u);
    r0 = rd32(0x8033bd24u);
    if (param_2 < (s32)rd32(0x8033bd14u)) {
        return 0u;
    }
    if (param_2 < (s32)r7) {
        return 1u;
    }
    if (param_2 < (s32)r6) {
        return 2u;
    }
    if (param_2 < (s32)r5) {
        return 3u;
    }
    if (param_2 < (s32)r0) {
        return 4u;
    }
    return 0u;
}
