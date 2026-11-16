#include "tc_rt.h"

u32 fn_8006026c(s32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80572434u);
    a.r[0] = 1u;
    a.r[1] = 6u;
    (void)tc_call(0x800523b0u, &a);
    wr32(0x805710d8u, 0u);
    wr32((u32)param_1 + 0xcu, 2u);
    wr32((u32)param_1 + 0x10u, 0x12u);
    return 1u;
}
