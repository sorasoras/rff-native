#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801a2088(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xdc0u) == 0u) {
        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32((u32)param_1 + 0xd74u)), (f64)rdf32(0x805758bcu));
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800a993cu, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 4u;
            (void)tc_call(0x801a1e2cu, &a);
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 6u;
        (void)tc_call(0x801a1e2cu, &a);
    } else {
        if ((s32)rd32(0x8046ad7cu) <= 8) {
            a.r[0] = (u32)param_1;
            a.r[1] = 8u;
            (void)tc_call(0x801a1e2cu, &a);
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x10u;
            (void)tc_call(0x801a1e2cu, &a);
            wr32((u32)param_1 + 0x260u, 6u);
        }
    }
    return;
}
