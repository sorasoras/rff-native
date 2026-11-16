#include "tc_rt.h"

u32 fn_800379c4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)param_1 == 0xfffffffdu) {
        r4 = (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu;
        r0 = ppc_mulhwu(r4, 0xau);
        r4 = r4 * 0xau;
        a.r[0] = r0;
        a.r[1] = r4;
        (void)tc_call(0x802301e8u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
