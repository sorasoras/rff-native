#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801a178c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x100u);
    c0lt = (s32)r0 < 6;
    f1 = (f64)(f32)px_fdiv((f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u), (f64)rdf32((u32)param_1 + 0xf08u));
    if (r0 != 6u) {
        if (c0lt) {
            if (r0 == 2u) {
                a.f[0] = f1;
                a.r[0] = (u32)param_1;
                (void)tc_call(0x801a5f38u, &a);
                return;
            }
            return;
        }
        if (r0 == 0x10u) {
            a.f[0] = f1;
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a5ffcu, &a);
            return;
        }
        return;
    }
    a.f[0] = f1;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801a5ec4u, &a);
    return;
}
