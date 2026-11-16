#include "tc_rt.h"

u32 fn_802480d4(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    wr32((u32)param_1 + 0xb0u, rd32((u32)param_1 + 0xb0u) | 1u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr32((u32)param_1 + 0xb0u, rd32((u32)param_1 + 0xb0u) | 1u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8024885cu, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80247f58u, &a);
    if (r3 == 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        wr32((u32)param_1 + 0xb0u, rd32((u32)param_1 + 0xb0u) | 1u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8024885cu, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        wr32((u32)param_1 + 0xb0u, (rd32((u32)param_1 + 0xb0u) | 2u) & 0xfffffffeu);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 1u;
    }
    return r3;
}
