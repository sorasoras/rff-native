#include "tc_rt.h"

void fn_800c3298(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80572ea8u);
    f2 = (f64)rdf32(param_1 + 0x948u);
    wrf32d(param_1 + 0x948u, (f64)(f32)(f2 + (f64)rdf32(0x80572f0cu)));
    a.r[0] = param_1;
    a.r[1] = 8u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    wr32(param_1 + 0x290u, 0x1cu);
    f0 = (f64)rdf32(0x80572eacu);
    wrf32d(param_1 + 0x974u, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0x978u, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x97cu, (f64)rdf32(0x804890d0u));
    wrf32d(param_1 + 0x98cu, f0);
    return;
}
