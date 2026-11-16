#include "tc_rt.h"

s32 fn_8011fe08(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r31 = 0xffffffffu;
    a.r[0] = rd32(param_1);
    a.r[1] = param_2;
    r3 = tc_call(0x803014e4u, &a);
    if (r3 == 3u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8012019cu, &a);
        r31 = r3;
        if ((s32)r3 >= 0) {
            r30 = param_1 + ((r3 << 7u) & 0xffffff80u) + 0x40u;
            a.r[0] = param_1;
            a.r[1] = r30;
            a.r[2] = param_2;
            (void)tc_call(0x801202f8u, &a);
            if (rd32(r30 + 4u) != 0u) {
                a.r[0] = param_1;
                a.r[1] = r30;
                a.r[2] = param_3;
                (void)tc_call(0x80120c00u, &a);
                a.r[0] = param_1;
                a.r[1] = r30;
                a.r[2] = param_3;
                (void)tc_call(0x80120d70u, &a);
                a.r[0] = param_1;
                a.r[1] = r30;
                (void)tc_call(0x80120f70u, &a);
                f1 = (f64)rdf32(param_3 + 4u);
                wrf32d(r30 + 0x54u, (f64)rdf32(param_3));
                f0 = (f64)rdf32(param_3 + 8u);
                wrf32d(r30 + 0x58u, f1);
                wrf32d(r30 + 0x5cu, f0);
                wr32(r30 + 0x4cu, rd32(r30 + 0x4cu) | 2u);
                a.r[0] = param_1;
                a.r[1] = r30;
                r3 = tc_call(0x8012108cu, &a);
                if (r3 == 0u) {
                    r31 = 0xffffffffu;
                } else {
                    wr32(r30 + 0x4cu, rd32(r30 + 0x4cu) | 4u);
                }
                if ((s32)r31 >= 0) {
                    return (s32)r31;
                }
                a.r[0] = param_1;
                a.r[1] = r30;
                a.r[2] = param_3;
                f1 = tc_callf(0x80120ae4u, &a);
                f0 = (f64)rdf32(0x805742a4u);
                if (!((f1 < f0) || (f1 == f0))) {
                    return (s32)r31;
                }
                r3 = rd32(r30 + 4u);
                if (r3 == 0u) {
                    return (s32)r31;
                }
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802f5fd8u, &a);
            } else {
                r31 = 0xffffffffu;
            }
        }
    }
    return (s32)r31;
}
