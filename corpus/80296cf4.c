#include "tc_rt.h"

void fn_80296cf4(u32 param_1)
{
    u32 r4 = 0, r12 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r12 = rd32(0x8053dec8u);
    wr32(0x8053dec8u, 0u);
    if (r12 != 0u) {
        wr8(0x817fdff8u, 4u);
        wr8(0x817fdff9u, rd8(param_1));
        r4 = (u32)rd8(param_1 + 1u);
        wr16(0x817fdffau, (u16)(r4 + (((u32)rd8(param_1 + 2u) << 8u) & 0xffffff00u)));
        a.r[0] = 0x817fdff8u;
        a.r[1] = r4;
        a.f[0] = 0.0;
        (void)tc_call(r12, &a);
    }
    return;
}
