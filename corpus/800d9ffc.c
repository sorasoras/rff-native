#include "tc_rt.h"

void fn_800d9ffc(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    if ((u32)((s32)((rd32(param_1 + 0x74u) << 4u) & 0xc0000000u) >> 31) != 0u) {
        f2 = (f64)rdf32(param_1 + 0x10cu);
        f0 = (f64)rdf32(0x805739e8u);
        f1 = (f64)(f32)(f2 - (f64)rdf32(param_1 + 0x110u));
        wrf32d(param_1 + 0x10cu, f1);
        if ((f1 < f0) || (f1 == f0)) {
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            (void)tc_call(rd32(rd32(param_1) + 0x80u), &a);
            wr32(param_1 + 0x74u, rd32(param_1 + 0x74u) & 0xf7ffffffu);
        }
    }
    if ((u32)((s32)((rd32(param_1 + 0x74u) << 1u) & 0xc0000000u) >> 31) != 0u) {
        a.r[0] = 0x8046ae14u;
        a.r[1] = param_1;
        a.r[2] = 0u;
        r3 = tc_call(0x8007b0f4u, &a);
        if (r3 == 0u) {
            a.r[0] = 0x8046ae14u;
            a.r[1] = param_1;
            f1 = tc_callf(0x8007b03cu, &a);
            wr32(param_1 + 0x74u, rd32(param_1 + 0x74u) & 0x7fffffffu);
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x88u), &a);
        }
    }
    return;
}
