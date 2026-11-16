#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_801e13bc(s32 param_1)
{
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x801dc328u, &a);
    f31 = f1;
    a.r[0] = (u32)param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x24u) + 0x2cu), &a);
    f1 = (f64)(f32)px_fdiv(f1, f31);
    f1 = (f64)(f32)px_fdiv((f64)rdf32(0x80576200u), f1);
    return f1;
}
