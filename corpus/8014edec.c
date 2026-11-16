#include "tc_rt.h"

void fn_8014edec(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 0x20000u) == 0u) {
        r3 = rd32(param_1 + 0x12cu);
        if (r3 != 0u) {
            wr32(r3 + 0x34u, 1u);
        }
    } else {
        r3 = rd32(param_1 + 0x12cu);
        if (r3 != 0u) {
            wr32(r3 + 0x34u, 0u);
        }
    }
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800d9ffcu, &a);
        if ((u32)((s32)rd32(param_1 + 0x120u) >> 31) != 0u) {
            f1 = (f64)rdf32(param_1 + 0x10cu);
            f0 = (f64)rdf32(0x805747a0u);
            if ((f1 < f0) || (f1 == f0)) {
                a.r[0] = param_1;
                (void)tc_call(0x800da354u, &a);
                r3 = rd32(param_1 + 0x12cu);
                if (r3 == 0u) {
                    return;
                }
                a.r[0] = r3;
                (void)tc_call(0x80157e6cu, &a);
                wr32(param_1 + 0x12cu, 0u);
                return;
            }
        }
        f1 = (f64)rdf32(param_1 + 0x128u);
        f0 = (f64)rdf32(0x805747a0u);
        if (!((f1 < f0) || (f1 == f0))) {
            wrf32d(param_1 + 0x128u, (f64)(f32)(f1 - (f64)rdf32(0x805747a4u)));
        } else {
            wr32(param_1 + 0x120u, rd32(param_1 + 0x120u) & 0xbfffffffu);
        }
    }
    return;
}
