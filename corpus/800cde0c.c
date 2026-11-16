#include "tc_rt.h"

void fn_800cde0c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x8025e7a4u, &a);
    r31 = r3;
    a.r[0] = param_3;
    r3 = tc_call(0x8025e7a4u, &a);
    r30 = 7u;
    if (r31 < 7u) {
        r30 = r31;
    }
    r31 = 0xfu;
    if (r3 < 0xfu) {
        r31 = r3;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = r30;
    (void)tc_call(0x8025e7dcu, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = param_3;
    a.r[2] = r31;
    (void)tc_call(0x8025e7dcu, &a);
    wr16((u32)param_1 + ((r30 << 1u) & 0xfffffffeu), 0u);
    wr16((u32)param_1 + ((r31 << 1u) & 0xfffffffeu) + 0x10u, 0u);
    r3 = tc_call(0x8023029cu, &a);
    wr32((u32)param_1 + 0x34u, tc_lastr4());
    wr32((u32)param_1 + 0x30u, r3);
    return;
}
