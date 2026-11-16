#include "tc_rt.h"

s32 fn_800da160(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x78u);
    if (r0 != 0u) {
        r3 = r0;
    } else {
        a.r[0] = 0x8046ae40u;
        a.r[1] = rd32((u32)param_1 + 0xf8u);
        r3 = tc_call(0x8013eae8u, &a);
        wr32((u32)param_1 + 0x78u, r3);
    }
    return (s32)r3;
}
