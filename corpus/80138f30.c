#include "tc_rt.h"

void fn_80138f30(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = 0u;
    a.r[2] = 1u;
    f1 = tc_callf(0x80139a50u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[1] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119edcu, &a);
    if (rd32(0x80571138u) == 0u) {
        r30 = (u32)rd8(0x8049e0d4u);
    } else {
        r30 = 0u;
        r4 = rd32(0x8049dfa4u);
        if ((r4 & 1u) != 0u) {
            if ((r4 & 2u) != 0u) {
                if ((r4 & 4u) == 0u) {
                    r30 = 2u;
                }
            } else {
                r30 = 1u;
            }
        } else {
            r30 = 0u;
        }
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = r30;
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[1] = r3;
    (void)tc_call(0x80119ffcu, &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r31 = r3 + 0x44u;
    a.r[0] = r31;
    a.r[1] = r30;
    a.r[2] = rd32(r3 + 0x42cu);
    f1 = tc_callf(0x80119fb0u, &a);
    wr32(r31 + 0x3ecu, r30);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119edcu, &a);
    return;
}
