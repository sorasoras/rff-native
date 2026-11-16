#include "tc_rt.h"

void fn_801ca6d4(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
    f3 = (f64)rdf32(0x80575e3cu);
    f4 = (f64)rdf32(0x80575e40u);
    f2 = rdf64(0x80575e50u);
    f0 = rdf64(0x80575e58u);
    f1 = -((f3 * f2) - rdf64(0x80575e48u));
    wrf32d(param_1 + 0x84u, f3);
    f0 = -((f4 * f2) - f0);
    wrf32d(param_1 + 0x88u, f4);
    f1 = (f64)(f32)f1;
    f2 = (f64)(f32)f0;
    wrf32d(param_1 + 0x78u, f1);
    wrf32d(param_1 + 0x7cu, f2);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    wr32(param_1 + 0x28u, 0u);
    wr32(param_1 + 0x74u, 0xffffffffu);
    wr8(param_1 + 0x8cu, 0u);
    return;
}
