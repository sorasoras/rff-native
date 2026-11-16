#include "tc_rt.h"

void fn_80035258(f64 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r31 = rd32(rd32((u32)param_2 + 0xc0u) + 4u);
    if (r31 != 0u) {
        r30 = (u32)param_2 + 0x98u;
        if (rd32(r31 + 4u) != 0u) {
            a.f[0] = param_1;
            a.r[0] = r30;
            a.r[1] = r31;
            (void)tc_call(0x80034d78u, &a);
            r3 = (u32)rd16(rd32((u32)param_2 + 0x3cu) + 0x5cu);
            if ((r3 & 0x8000u) != 0u) {
                wrf32d(r30 + 4u, (f64)(f32)((f64)rdf32(r30 + 4u) * (f64)rdf32((u32)param_2 + 0xc4u)));
            } else {
                if ((r3 & 0x4000u) != 0u) {
                    f3 = (f64)rdf32((u32)param_2 + 0xc4u);
                    f1 = (f64)(f32)((f64)rdf32(r30 + 4u) * f3);
                    f0 = (f64)(f32)((f64)rdf32(r30 + 8u) * f3);
                    wrf32d(r30, (f64)(f32)((f64)rdf32(r30) * f3));
                    wrf32d(r30 + 4u, f1);
                    wrf32d(r30 + 8u, f0);
                }
            }
        }
        if (rd32(r31 + 8u) != 0u) {
            a.f[0] = param_1;
            a.r[0] = r30 + 0xcu;
            a.r[1] = r31;
            (void)tc_call(0x80035074u, &a);
        }
        if (rd32(r31 + 0xcu) != 0u) {
            a.f[0] = param_1;
            a.r[0] = r30 + 0x1cu;
            a.r[1] = r31;
            (void)tc_call(0x800351f4u, &a);
        }
        wr16((u32)param_2 + 0x34u, (u16)((u32)rd16((u32)param_2 + 0x34u) | 0x400u));
    }
    return;
}
