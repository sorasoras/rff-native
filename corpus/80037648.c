#include "tc_rt.h"

s32 fn_80037648(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80036854u, &a);
    r31 = r3;
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32(r3 + 4u, param_1);
        wr32(r3 + 8u, param_2);
        wr32(r3 + 0xcu, param_1);
        wr16(r3 + 0x20u, (u16)param_2);
        wr32(r3 + 0x18u, 0u);
        wr32(r3 + 0x1cu, 0u);
        wr32(r3 + 0x10u, param_3);
        wr16(r3 + 0x22u, (u16)(((u32)rd16(r3 + 0x22u) | 0x8000u) & 0xffffbfffu));
        wr16(r3 + 0x24u, 2u);
        a.r[0] = r3;
        (void)tc_call(0x80036884u, &a);
        r3 = r31;
    }
    return (s32)r3;
}
