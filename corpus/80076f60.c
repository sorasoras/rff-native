#include "tc_rt.h"

void fn_80076f60(void)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(0x804890c8u);
    f1 = (f64)rdf32(0x804890ccu);
    f0 = (f64)rdf32(0x804890d0u);
    wr32(0x804865b8u, 0u);
    wr32(0x804865bcu, 0u);
    wr32(0x804865c0u, 0u);
    wr32(0x804865c4u, 0u);
    wrf32d(0x804865c8u, f2);
    wrf32d(0x804865ccu, f1);
    wrf32d(0x804865d0u, f0);
    wr32(0x804865d4u, 5u);
    return;
}
