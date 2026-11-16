#include "tc_rt.h"

void fn_800575b8(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_3 == 0u) {
        r31 = (u32)param_2 * 0x30u;
        r30 = (u32)param_1 + r31;
        a.f[0] = (f64)rdf32(r30 + 0x10u);
        a.f[1] = (f64)rdf32(r30 + 0x14u);
        a.f[2] = (f64)rdf32(r30 + 0x18u);
        a.f[3] = (f64)rdf32(r30 + 0x1cu);
        a.r[0] = rd32((u32)param_1 + r31);
        (void)tc_call(0x8003d8b4u, &a);
        a.f[0] = (f64)rdf32(r30 + 4u);
        a.f[1] = (f64)rdf32(r30 + 8u);
        a.f[2] = (f64)rdf32(r30 + 0xcu);
        a.r[0] = rd32(r30);
        (void)tc_call(0x8003d834u, &a);
        a.f[0] = (f64)rdf32(r30 + 0x24u);
        a.f[1] = (f64)rdf32(r30 + 0x28u);
        a.r[0] = rd32(r30);
        a.r[1] = rd32(r30 + 0x20u);
        (void)tc_call(0x8003d9e0u, &a);
    } else {
        if ((u32)param_3 == 1u) {
            r31 = (u32)param_1 + ((u32)param_2 * 0x28u);
            a.f[0] = (f64)rdf32(r31 + 0xa0u);
            a.f[1] = (f64)rdf32(r31 + 0xa4u);
            a.f[2] = (f64)rdf32(r31 + 0xa8u);
            a.f[3] = (f64)rdf32(r31 + 0xacu);
            a.r[0] = rd32(r31 + 0x90u);
            (void)tc_call(0x8003d8b4u, &a);
            a.f[0] = (f64)rdf32(r31 + 0x94u);
            a.f[1] = (f64)rdf32(r31 + 0x98u);
            a.f[2] = (f64)rdf32(r31 + 0x9cu);
            a.r[0] = rd32(r31 + 0x90u);
            (void)tc_call(0x8003d874u, &a);
            a.f[0] = (f64)rdf32(r31 + 0xb0u);
            a.r[0] = rd32(r31 + 0x90u);
            (void)tc_call(0x8003dabcu, &a);
        }
    }
    return;
}
