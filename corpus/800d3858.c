#include "tc_rt.h"

void fn_800d3858(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x8025e7a4u, &a);
    if (r3 < 0xffu) {
        a.r[0] = param_2;
        r3 = tc_call(0x8025e7a4u, &a);
        r31 = r3;
    } else {
        r31 = 0xffu;
    }
    a.r[0] = (u32)param_1 + 0x528u;
    a.r[1] = param_2;
    a.r[2] = r31;
    (void)tc_call(0x8025e7dcu, &a);
    wr16((u32)param_1 + ((r31 << 1u) & 0xfffffffeu) + 0x528u, 0u);
    a.r[0] = (u32)param_1 + 0x4bcu;
    a.r[1] = (u32)param_1 + 0x528u;
    (void)tc_call(0x800d3148u, &a);
    return;
}
