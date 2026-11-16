#include "tc_rt.h"

void fn_801a4100(s32 param_1, s32 param_2)
{
    u32 c0lt = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        if (rd32((u32)param_1 + 0xdc0u) == 0u) {
            a.f[0] = (f64)rdf32(0x80575934u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x12u;
            a.r[2] = 1u;
            (void)tc_call(0x800a94c0u, &a);
            return;
        }
        a.f[0] = (f64)rdf32(0x80575934u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x13u;
        a.r[2] = 1u;
        (void)tc_call(0x800a94c0u, &a);
    } else {
        if ((u32)param_2 == 1u && (s32)rd32((u32)param_1 + 0xd00u) > 0) {
            f31 = (f64)rdf32((u32)param_1 + 0xd94u);
            wr32((u32)param_1 + 0x2b0u, 1u);
            f1 = tc_callf(0x80040a00u, &a);
            f0 = (f64)(f32)((f64)rdf32(0x8057588cu) * f1);
            c0lt = f0 < f31;
            if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                wr32((u32)param_1 + 0x260u, 9u);
            } else {
                f31 = (f64)rdf32((u32)param_1 + 0xda4u);
                f1 = tc_callf(0x80040a00u, &a);
                f0 = (f64)(f32)((f64)rdf32(0x8057588cu) * f1);
                c0lt = f0 < f31;
                if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                    wr32((u32)param_1 + 0x260u, 0x10u);
                }
            }
        }
    }
    return;
}
