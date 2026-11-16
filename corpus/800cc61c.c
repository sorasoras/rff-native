#include "tc_rt.h"

void fn_800cc61c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32((u32)param_1 + 0x30u);
    r3 = tc_call(0x802558e4u, &a);
    wr32(param_2, r3);
    r5 = (u32)rd8((u32)param_1 + 0x25u);
    r4 = (u32)rd8((u32)param_1 + 0x26u);
    r0 = (u32)rd8((u32)param_1 + 0x27u);
    wr8(param_2 + 4u, rd8((u32)param_1 + 0x24u));
    wr8(param_2 + 5u, (u8)r5);
    wr8(param_2 + 6u, (u8)r4);
    wr8(param_2 + 7u, (u8)r0);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800cc578u, &a);
    a.r[0] = param_2 + 8u;
    a.r[1] = r3;
    (void)tc_call(0x8025e7c0u, &a);
    return;
}
