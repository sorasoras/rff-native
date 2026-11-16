#include "tc_rt.h"

void fn_801200b8(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = param_2;
    r3 = tc_call(0x803014e4u, &a);
    if (r3 == 3u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8012019cu, &a);
        if ((s32)r3 >= 0) {
            r30 = param_1 + ((r3 << 7u) & 0xffffff80u) + 0x40u;
            a.r[0] = param_1;
            a.r[1] = r30;
            a.r[2] = param_2;
            (void)tc_call(0x801202f8u, &a);
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
            wr32(r30 + 0x4cu, rd32(r30 + 0x4cu) | 0xau);
            wr32(r30 + 0x60u, param_4);
            a.r[0] = r30 + 0x10u;
            a.r[1] = 1u;
            (void)tc_call(0x8011e5a0u, &a);
        }
    }
    return;
}
