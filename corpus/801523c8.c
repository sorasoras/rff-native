#include "tc_rt.h"

void fn_801523c8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    if (rd32((u32)param_2 + 0x100u) == 1u) {
        f0 = (f64)rdf32(0x80574858u);
        f1 = (f64)rdf32(rd32((u32)param_2 + 0x70u) + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            r30 = (u32)param_2 + 0x16a0u;
            r29 = 0u;
            do {
                if ((u32)rd8(r30 + 0x3cu) == 0u) {
                    a.r[0] = (u32)param_2 + 0x36cu;
                    (void)tc_call(0x801548c4u, &a);
                    a.r[0] = r30;
                    (void)tc_call(0x80152a9cu, &a);
                }
                r29 = r29 + 1u;
                r30 = r30 + 0x1f0u;
            } while ((s32)r29 < 2);
        }
    }
    a.r[0] = (u32)param_2 + 0x16a0u;
    (void)tc_call(0x80153204u, &a);
    r30 = (u32)param_2 + 0x1890u;
    a.r[0] = r30;
    (void)tc_call(0x80153204u, &a);
    if ((rd32((u32)param_2 + 0x100u) == 2u && rd32((u32)param_2 + 0x1778u) == 4u) && rd32(r30 + 0xd8u) == 4u) {
        a.f[0] = (f64)rdf32(0x8057484cu);
        a.r[0] = (u32)param_2;
        a.r[1] = 3u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
    }
    if (rd32((u32)param_2 + 0x100u) == 3u) {
        f0 = (f64)rdf32(0x8057485cu);
        f1 = (f64)rdf32(rd32((u32)param_2 + 0x70u) + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            if ((u32)rd8((u32)param_2 + 0x16a0u) != 0u) {
                wr8((u32)param_2 + 0x16a0u, 0u);
            }
            if ((u32)rd8(r30) != 0u) {
                wr8(r30, 0u);
            }
        }
    }
    r30 = 0u;
    if (rd32((u32)param_2 + 0x1468u) == 3u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r30 = 1u;
        }
    }
    if (r30 != 0u) {
        r3 = rd32((u32)param_2 + 0xe88u);
        wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    }
    return;
}
