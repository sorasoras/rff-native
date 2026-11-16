#include "tc_rt.h"

void fn_801e1c0c(u32 param_1)
{
    u32 r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x801dda54u, &a);
    a.r[0] = 0x239eu;
    a.r[1] = r3;
    (void)tc_call(0x801dc4b4u, &a);
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = 0x1au;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.f[0] = (f64)rdf32(0x80576208u);
    a.f[1] = 0.0;
    (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
    a.r[0] = param_1;
    r3 = tc_call(0x801dda54u, &a);
    a.f[0] = (f64)rdf32(0x80576278u);
    a.f[1] = (f64)rdf32(0x805762b8u);
    a.r[0] = param_1;
    a.r[1] = 0xaau;
    a.r[2] = r3;
    (void)tc_call(0x801dda7cu, &a);
    r5 = rd32(param_1);
    f1 = (f64)rdf32(0x80576204u);
    wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) | 0x20000000u);
    r5 = rd32(param_1);
    wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) | 0x4000000u);
    wr32(rd32(param_1) + 0xd58u, 0u);
    a.f[0] = f1;
    a.r[0] = param_1;
    (void)tc_call(0x801dd9dcu, &a);
    return;
}
