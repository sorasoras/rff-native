#include "tc_rt.h"

void fn_8015182c(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    f1 = (f64)rdf32(0x80574820u);
    wr32((u32)param_2 + 0xcecu, 2u);
    a.f[0] = f1;
    a.r[0] = (u32)param_2;
    a.r[1] = 2u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    a.f[0] = (f64)rdf32(0x80574820u);
    a.r[0] = (u32)param_2;
    a.r[1] = 3u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    r3 = rd32((u32)param_2 + 0xf78u);
    wr32((u32)param_2 + 0x9cu, rd32((u32)param_2 + 0x9cu) | 0x4000000u);
    wr32((u32)param_2 + 0xf78u, r3 | (r3 ^ 0x10000u));
    return;
}
