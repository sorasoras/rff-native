#include "tc_rt.h"

void fn_8017fd50(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)((s32)((rd32(param_1 + 0xacu) << 1u) & 0xc0000000u) >> 31) != 0u && rd32(param_1 + 0x78u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfe8u, rd32(r3));
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32(r3 + 8u));
        a.r[0] = rd32(param_1 + 0x78u);
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x8015811cu, &a);
    }
    return;
}
