#include "tc_rt.h"

void fn_802f7f80(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xccu, param_3);
    a.r[0] = (u32)param_1 + 0x1cu;
    (void)tc_call(0x802fad74u, &a);
    a.f[0] = (f64)rdf32(0x805775e0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802f8efcu, &a);
    r3 = rd32((u32)param_1 + 0xecu);
    wr32((u32)param_1 + 0xa4u, 0u);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = param_4;
    (void)tc_call(0x8030c04cu, &a);
    a.r[0] = rd32((u32)param_1 + 0xecu);
    (void)tc_call(0x8030c2c4u, &a);
    wr8((u32)param_1 + 0x36u, 1u);
    return;
}
