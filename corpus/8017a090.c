#include "tc_rt.h"

u32 fn_8017a090(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    r5 = param_3;
    r30 = 0xffffffffu;
    r31 = 0u;
    while ((s32)r31 < param_2) {
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = r5;
        a.f[0] = f1;
        r3 = tc_call(param_1, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        if ((s32)r30 < 0 && (u32)rd16(r3) >= 0x2e8u) {
            r30 = r31;
        } else {
            r4 = (u32)rd16(r3);
            r5 = 0u;
            if (r4 == (u32)rd16(param_3)) {
                r4 = (u32)rd8(r3 + 3u);
                if (r4 == (u32)rd8(param_3 + 3u)) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r5 = (u32)rd8(r3 + 2u);
                r4 = (u32)rd8(param_3 + 2u);
                r0 = r5 + r4;
                if ((s32)r0 <= 99) {
                    wr8(r3 + 2u, (u8)r0);
                    r5 = 1u;
                    wr8(param_3 + 2u, 0u);
                } else {
                    r0 = 0x63u - r5;
                    r5 = 0u;
                    r0 = r4 - r0;
                    wr8(param_3 + 2u, (u8)r0);
                    wr8(r3 + 2u, 0x63u);
                }
                if (r5 != 0u) {
                    r3 = 1u;
                    return r3;
                }
            }
        }
        r31 = r31 + 1u;
    }
    if ((s32)r30 < 0) {
        r3 = 0u;
    } else {
        while ((s32)r30 < param_2) {
            a.r[0] = r30;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
            r3 = tc_call(param_1, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            if ((u32)rd16(r3) >= 0x2e8u) {
                wr16(r3, rd16(param_3));
                wr8(r3 + 3u, rd8(param_3 + 3u));
                wr8(r3 + 2u, 0u);
                r4 = (u32)rd8(param_3 + 2u);
                if ((s32)r4 <= 99) {
                    wr8(r3 + 2u, (u8)r4);
                    r5 = 1u;
                    wr8(param_3 + 2u, 0u);
                } else {
                    r5 = 0u;
                    wr8(param_3 + 2u, (u8)(r4 - 0x63u));
                    wr8(r3 + 2u, 0x63u);
                }
                if (r5 != 0u) {
                    r3 = 1u;
                    return r3;
                }
            }
            r30 = r30 + 1u;
        }
        r3 = 0u;
    }
    return r3;
}
