#include "tc_rt.h"

void fn_80053f58(u32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x803d2780u);
    a.f[1] = (f64)rdf32(0x803d2784u);
    a.f[2] = (f64)rdf32(0x803d2788u);
    a.f[3] = (f64)rdf32(0x803d278cu);
    (void)tc_call(0x8003d7fcu, &a);
    a.f[0] = (f64)rdf32(0x803d2790u);
    a.f[1] = (f64)rdf32(0x803d2794u);
    a.f[2] = (f64)rdf32(0x803d2798u);
    a.f[3] = (f64)rdf32(0x803d279cu);
    (void)tc_call(0x8003d818u, &a);
    if (rd32(0x805710f0u) != 0u) {
        a.r[0] = 0x803d27a0u;
        (void)tc_call(0x8004a4fcu, &a);
    } else {
        a.r[0] = 0u;
        (void)tc_call(0x8004a4fcu, &a);
    }
    a.r[0] = param_1;
    (void)tc_call(0x80053ac8u, &a);
    a.r[0] = 0x803d2678u;
    a.r[1] = 0u;
    (void)tc_call(0x8005768cu, &a);
    return;
}
