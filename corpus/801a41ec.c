#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801a41ec(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        if (rd32((u32)param_1 + 0xdc0u) == 0u) {
            a.f[0] = (f64)rdf32((u32)param_1 + 0xd1cu);
            a.f[1] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32((u32)param_1 + 0xd24u)), (f64)rdf32(0x805758bcu));
            a.f[2] = (f64)rdf32(0x80575934u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x14u;
            (void)tc_call(0x800a9880u, &a);
            return;
        }
        a.f[0] = (f64)rdf32((u32)param_1 + 0xd1cu);
        a.f[1] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32((u32)param_1 + 0xd24u)), (f64)rdf32(0x805758bcu));
        a.f[2] = (f64)rdf32(0x80575934u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0xcu;
        (void)tc_call(0x800a9880u, &a);
    } else {
        if ((u32)param_2 == 1u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x801a3c1cu, &a);
            if (r3 != 0u) {
                wr32((u32)param_1 + 0x2b0u, 1u);
            }
        }
    }
    return;
}
