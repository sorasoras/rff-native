#include "tc_rt.h"

void fn_801d2c14(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x280u) != 0u) {
        f31 = (f64)rdf32(0x80575ea8u);
        if ((u32)param_2 != 0u) {
            r3 = rd32((u32)param_1 + 0xe0u);
            f31 = (f64)(f32)((f64)rdf32(r3 + 0xd74u) * (f64)(f32)((f64)rdf32(0x80575f20u) * (f64)rdf32(r3 + 0xd7cu)));
        }
        r31 = 0u;
        do {
            if ((u32)param_2 != 0u) {
                a.f[0] = f31;
                a.r[0] = (u32)param_1 + 0x27cu;
                a.r[1] = r31;
                (void)tc_call(0x800a2560u, &a);
            } else {
                a.r[0] = (u32)param_1 + 0x27cu;
                a.r[1] = r31;
                (void)tc_call(0x800a25e4u, &a);
            }
            r31 = r31 + 1u;
        } while ((s32)r31 < 4);
    }
    return;
}
