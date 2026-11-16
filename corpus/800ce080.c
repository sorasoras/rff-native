#include "tc_rt.h"

u32 fn_800ce080(u32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (ppc_cntlzw(rd32(rd32(0x805711ccu) + 0xfcu) - 2u) >> 5u) & 0x7ffffffu;
    a.r[0] = 0x803557f8u;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    r3 = tc_call(0x800ce000u, &a);
    if ((s32)r3 < 0) {
        r3 = 0u;
    } else {
        r0 = r31 + ((r3 << 1u) & 0xfffffffeu);
        if (r0 >= 0xcu) {
            r3 = 0u;
        } else {
            r0 = (r0 << 2u) & 0xfffffffcu;
            a.r[0] = 0xbu;
            a.r[1] = rd32(r0 - 0x7fcaa7e8u);
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            wr32(param_1, r3);
            r3 = 1u;
        }
    }
    return r3;
}
