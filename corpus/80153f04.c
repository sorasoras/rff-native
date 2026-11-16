#include "tc_rt.h"

s32 fn_80153f04(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80153f74u, &a);
        wr32(((r3 << 2u) & 0xfffffffcu) - 0x7fb41430u, 0u);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
