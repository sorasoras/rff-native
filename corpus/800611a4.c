#include "tc_rt.h"

void fn_800611a4(s32 param_1)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0xf8u;
        (void)tc_call(0x8005250cu, &a);
        a.r[0] = (u32)param_1 + 0xcu;
        (void)tc_call(0x8005250cu, &a);
        a.r[0] = (u32)param_1 + 0x80u;
        (void)tc_call(0x8005250cu, &a);
        r0 = rd32((u32)param_1 + 0x174u);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            f2 = (f64)rdf32(0x80572528u);
            f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x16cu) - f2);
            f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x170u) + f2);
            c0lt = f1 < (f64)rdf32(0x8057252cu);
            wrf32d((u32)param_1 + 0x16cu, f1);
            wrf32d((u32)param_1 + 0x170u, f2);
            if (c0lt) {
                f0 = (f64)rdf32(0x80572540u);
                c0eq = rd32((u32)param_1 + 0x178u) == 0u;
                wr32((u32)param_1 + 0x17cu, rd32((u32)param_1 + 0x17cu) + 1u);
                wrf32d((u32)param_1 + 0x16cu, f0);
                if (!c0eq) {
                    wr32((u32)param_1 + 0x178u, 0u);
                    wr32((u32)param_1 + 0x34u, 1u);
                    wr32((u32)param_1 + 0xa8u, 0u);
                } else {
                    wr32((u32)param_1 + 0x178u, 1u);
                    wr32((u32)param_1 + 0x34u, 0u);
                    wr32((u32)param_1 + 0xa8u, 1u);
                }
            }
            if (rd32((u32)param_1 + 0x17cu) >= 4u) {
                f1 = (f64)rdf32(0x8057253cu);
                wr32((u32)param_1 + 0x174u, 2u);
                a.f[0] = f1;
                a.r[0] = 1u;
                a.r[1] = 6u;
                (void)tc_call(0x800523b0u, &a);
                wr32(0x805710d8u, 0u);
            }
            r3 = tc_call(0x80061340u, &a);
            if (r3 != 0u && (f64)rdf32((u32)param_1 + 0x170u) > (f64)rdf32(0x80572544u)) {
                f1 = (f64)rdf32(0x8057253cu);
                wr32((u32)param_1 + 0x174u, 2u);
                a.f[0] = f1;
                a.r[0] = 1u;
                a.r[1] = 8u;
                (void)tc_call(0x800523b0u, &a);
            }
        } else if (!c0lt) {
            if ((s32)r0 < 3 && rd32(0x805706d0u) == 7u) {
                wr32((u32)param_1 + 0x174u, 3u);
                wr32((u32)param_1 + 0x34u, 0u);
                wr32((u32)param_1 + 0xa8u, 0u);
                wr32((u32)param_1 + 0x120u, 0u);
            }
        } else if ((s32)r0 >= 0 && rd32(0x805706d0u) == 7u) {
            f1 = (f64)rdf32(0x80572540u);
            f0 = (f64)rdf32(0x8057252cu);
            wr32((u32)param_1 + 0x174u, 1u);
            wrf32d((u32)param_1 + 0x16cu, f1);
            wrf32d((u32)param_1 + 0x170u, f0);
        }
    }
    return;
}
