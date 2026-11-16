#include "tc_rt.h"

void fn_801e11cc(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.f[0] = (f64)rdf32(0x80576208u);
    a.f[1] = 0.0;
    (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
    a.f[0] = (f64)rdf32(0x80576280u);
    a.r[0] = param_1;
    (void)tc_call(0x801dd9dcu, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    f1 = tc_callf(0x801ddb00u, &a);
    f31 = (f64)(f32)((f64)rdf32(0x805762c8u) * f1);
    a.r[0] = param_1;
    r3 = tc_call(0x801ddae8u, &a);
    a.f[0] = (f64)rdf32(0x80576200u);
    a.f[1] = f31;
    a.r[0] = param_1;
    a.r[1] = 0x64u;
    a.r[2] = r3;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x801dda74u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x801ddae8u, &a);
    a.f[0] = (f64)rdf32(0x80576204u);
    a.f[1] = f31;
    a.r[0] = param_1;
    a.r[1] = 0x70u;
    a.r[2] = r3;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x801dda74u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x801ddaf4u, &a);
    a.r[0] = 0x2397u;
    a.r[1] = r3;
    (void)tc_call(0x801dc4b4u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x801ddae8u, &a);
    a.r[0] = 0x2399u;
    a.r[1] = r3;
    (void)tc_call(0x801dc4b4u, &a);
    a.f[0] = f31;
    a.r[0] = param_1;
    (void)tc_call(0x801dd990u, &a);
    return;
}
