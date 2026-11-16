#include "tc_rt.h"

u32 fn_80302378(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x28u);
    a.r[0] = (u32)rd8(r5 + 0x28u);
    a.r[1] = rd32(r5 + 0x2cu);
    a.r[2] = r5;
    r3 = tc_call(0x8030e93cu, &a);
    if (param_2 == 0u) {
        r3 = 0u;
    } else {
        wr32(param_2, (u32)rd16(r3));
        wr32(param_2 + 4u, (u32)rd16(r3 + 2u));
        wr32(param_2 + 8u, (u32)rd16(r3 + 4u));
        wr32(param_2 + 0xcu, (u32)rd16(r3 + 6u));
        wr32(param_2 + 0x10u, (u32)rd16(r3 + 8u));
        wr32(param_2 + 0x14u, (u32)rd16(r3 + 0xau));
        r0 = (u32)rd16(r3 + 0xcu);
        r3 = 1u;
        wr32(param_2 + 0x18u, r0);
    }
    return r3;
}
