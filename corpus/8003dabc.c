#include "tc_rt.h"

void fn_8003dabc(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80571fa8u);
    f0 = (f64)rdf32(0x80571fb4u);
    f3 = (f64)rdf32(0x80571facu);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f3;
    a.f[3] = (f64)(f32)(param_1 * f0);
    a.f[4] = f1;
    a.f[5] = ppc_fnmsubs(param_1, f0, f3);
    a.r[0] = ((u32)param_2 * 0x60u) - 0x7fc41d00u;
    (void)tc_call(0x80251a34u, &a);
    wr32(0x803be5fcu, rd32(0x803be5fcu) | ((((u32)param_2 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_2 & 0x1fu))));
    return;
}
