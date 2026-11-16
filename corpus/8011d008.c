#include "tc_rt.h"

u32 fn_8011d008(s32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = rd32((u32)param_1 + 0x124u);
    a.r[1] = 0x817fdfd8u;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x80275974u, &a);
    if (r3 != 0u) {
        a.r[0] = 0x817fdfb8u;
        a.r[1] = param_2;
        (void)tc_call(0x8025bd34u, &a);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0x80339600u;
        (void)tc_call(0x8025be38u, &a);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 0x817fdfa8u;
        r3 = tc_call(0x802761b0u, &a);
        if (r3 != 0u) {
            for (;;) {
                a.r[0] = 0x817fdfa8u;
                a.r[1] = 0x817fdf98u;
                r3 = tc_call(0x8027622cu, &a);
                if (r3 == 0u) break;
                a.r[0] = (u32)param_1;
                a.r[1] = rd32(0x817fdfa4u);
                r3 = tc_call(0x8011d0ccu, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
            }
            r3 = 1u;
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
