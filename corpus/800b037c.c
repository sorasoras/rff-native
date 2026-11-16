#include "tc_rt.h"

void fn_800b037c(s32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0xe88u);
    wrf32d((u32)param_1 + 0xd18u, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0xd1cu, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0xd20u, (f64)rdf32(0x804890d0u));
    wr32((u32)param_1 + 0xe88u, r5 | (r5 ^ 0x80000000u));
    wr32((u32)param_1 + 0xed4u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800b3dc0u, &a);
    return;
}
