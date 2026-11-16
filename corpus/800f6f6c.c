#include "tc_rt.h"

void fn_800f6f6c(f64 param_1, f64 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_3 + 0x80u;
    a.r[1] = 0u;
    a.r[2] = 0xe4u;
    (void)tc_call(0x8000443cu, &a);
    wr32((u32)param_3 + 0x84u, param_4);
    wrf32d((u32)param_3 + 0x158u, param_2);
    r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    wrf32d((u32)param_3 + 0x88u, (f64)rdf32(r3 + 0x134u));
    wrf32d((u32)param_3 + 0x8cu, (f64)rdf32(r3 + 0x138u));
    wrf32d((u32)param_3 + 0x90u, (f64)rdf32(r3 + 0x13cu));
    wr32((u32)param_3 + 0x154u, 1u);
    wrf32d((u32)param_3 + 0x15cu, param_1);
    return;
}
