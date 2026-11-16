#include "tc_rt.h"

u32 fn_8028712c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    (void)tc_call(0x80289ba4u, &a);
    r0 = (u32)(s8)param_1;
    if ((s32)r0 < 0 || (s32)r0 > 13) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = (u32)(s8)rd8(0x8050f808u);
        a.r[0] = r3;
        f1 = tc_callf(0x8022c2d8u, &a);
        if (r30 == 3u) {
            r3 = (u32)(s8)param_1;
            if (r3 == 0u) {
                r0 = 0xffu;
                r4 = 0xffu;
            } else {
                r3 = r3 + 1u;
                r3 = ((r3 << 2u) & 0xfffffffcu) + r3;
                r0 = r3 - 0xeu;
                r4 = r3 + 0xeu;
                if ((s32)r0 < 0) {
                    r0 = 0u;
                }
                if ((s32)r4 > 78) {
                    r4 = 0x4eu;
                }
            }
            r4 = r4 & 0xffu;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r0 & 0xffu;
            a.r[1] = r4;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80295830u, &a);
            (void)tc_call(0x80289ba4u, &a);
            r31 = 1u;
        }
        r3 = r31;
    }
    return r3;
}
