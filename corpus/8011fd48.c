#include "tc_rt.h"

s32 fn_8011fd48(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
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
            r3 = rd32(r30 + 4u);
            f1 = (f64)rdf32(param_1 + 0xcu);
            if (r3 != 0u) {
                a.f[0] = f1;
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802f7194u, &a);
            }
            a.r[0] = param_1;
            a.r[1] = r30;
            (void)tc_call(0x80120f70u, &a);
            a.r[0] = param_1;
            a.r[1] = r30;
            r3 = tc_call(0x8012108cu, &a);
            if (r3 == 0u) {
                r31 = 0xffffffffu;
            }
        }
    }
    return (s32)r31;
}
