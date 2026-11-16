#include "tc_rt.h"

u32 fn_80112040(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0x30u) + 0x10u), &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32((u32)param_1 + 0x30u) + 0x1cu), &a);
        if (f1 != (f64)rdf32(0x805707e4u)) {
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = param_3;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32((u32)param_1 + 0x30u) + 0x1cu), &a);
            f0 = (f64)rdf32(0x805707e4u);
            r3 = (((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) ^ 1u;
        }
    }
    return r3;
}
