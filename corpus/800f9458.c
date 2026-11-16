#include "tc_rt.h"

s32 fn_800f9458(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    a.r[0] = 0x804b9d30u;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = param_3;
    r3 = tc_call(0x8010034cu, &a);
    r28 = r3;
    wr32(r3 + 0xf4u, 1u);
    r29 = rd32(r3 + 0xf0u);
    a.r[0] = r29;
    (void)tc_call(0x800f7f80u, &a);
    a.r[0] = r29;
    a.r[1] = 0u;
    (void)tc_call(0x800f7f48u, &a);
    a.r[0] = r29;
    a.r[1] = 0x80339018u;
    (void)tc_call(0x800f7ed8u, &a);
    a.r[0] = r28;
    a.r[1] = 0x8033901du;
    r3 = tc_call(0x800ffe38u, &a);
    wr32(r3 + 0xd0u, 1u);
    r28 = r3;
    wr32(r3 + 0xd4u, 1u);
    a.r[0] = 0x80571250u;
    a.r[1] = r3;
    (void)tc_call(0x801030f8u, &a);
    return (s32)r28;
}
