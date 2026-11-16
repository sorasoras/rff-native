#include "tc_rt.h"

void fn_8007e768(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rd32(param_r3 + 0xccu) != 0u) {
        f30 = (f64)rdf32(param_r3 + 0xd0u);
    } else {
        f30 = (f64)rdf32(0x80572864u);
    }
    f31 = (f64)rdf32(0x80572864u);
    r28 = 0u;
    r29 = 0u;
    while (r28 < rd32(param_r3 + 0x328u)) {
        r3 = rd32(rd32(param_r3 + 0x324u) + r29);
        if (r3 != 0u && (u32)((s32)rd32(r3 + 0x9cu) >> 31) != 0u) {
            if (f30 < f31) {
                wrf32d(r3 + 0xd0u, f30);
                wr32(r3 + 0xccu, 1u);
            } else {
                wr32(r3 + 0xccu, 0u);
            }
            a.r[0] = r3;
            a.r[1] = param_r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
        }
        r29 = r29 + 4u;
        r28 = r28 + 1u;
    }
    return;
}
