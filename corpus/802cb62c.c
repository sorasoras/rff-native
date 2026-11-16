#include "tc_rt.h"

void fn_802cb62c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = (u32)rd8((u32)param_2 + 0x50u);
    wr32(0x817fdffcu, 0u);
    r0 = (r0 >> 3u) & 1u;
    if (r0 != 0u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x60u), &a);
        wr32(0x817fdfe8u, 0xff00ffu);
        a.r[0] = param_1;
        r3 = tc_call(0x802d1834u, &a);
        wr32(0x817fdff4u, tc_lastr4());
        wr32(0x817fdff0u, r3);
        a.r[0] = 0x817fdff0u;
        a.r[1] = param_1 + 0x4cu;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x802cc220u, &a);
    }
    return;
}
