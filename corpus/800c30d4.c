#include "tc_rt.h"

void fn_800c30d4(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80572efcu);
    f1 = (f64)rdf32(param_1 + 0x948u);
    wr32(param_1 + 0x290u, 0x1du);
    f0 = (f64)(f32)(f1 + f0);
    f1 = (f64)rdf32(0x80572ea8u);
    wrf32d(param_1 + 0x948u, f0);
    a.r[0] = param_1;
    a.r[1] = 0xau;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff7fffu);
    return;
}
