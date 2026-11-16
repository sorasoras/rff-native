#include "tc_rt.h"

void fn_801a2f64(u32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x805758d8u);
    a.f[1] = (f64)rdf32(0x80575918u);
    a.f[2] = (f64)rdf32(0x8057586cu);
    a.f[3] = (f64)rdf32(0x80575894u);
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    (void)tc_call(0x80056b18u, &a);
    a.r[0] = param_1;
    a.r[1] = 2u;
    (void)tc_call(0x801a2fdcu, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801a2fdcu, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0xf9fu;
    (void)tc_call(0x8010a74cu, &a);
    return;
}
