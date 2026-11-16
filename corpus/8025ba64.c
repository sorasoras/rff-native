#include "tc_rt.h"

void fn_8025ba64(s32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = (u32)param_3;
    if (param_2 >= 2u) {
        r31 = ((param_2 >> 1u) & 0x7fffffffu) + 1u;
        r6 = param_2 - 1u;
        r7 = r31 - 1u;
        r30 = param_2;
        r25 = (u32)param_3 - (((u32)param_3 << 1u) & 0xfffffffeu);
        r23 = (u32)param_1 + ((u32)param_3 * r7);
        r26 = r31 * (u32)param_3;
        r22 = (u32)param_1 + ((u32)param_3 * r6);
        for (;;) {
            if (r31 <= 1u) {
                r3 = r22 - 1u;
                r4 = r23 - 1u;
                r5 = (u32)param_3 + 1u;
                for (;;) {
                    r5 = r5 - 1u;
                    if (r5 == 0u) break;
                    r6 = (u32)(s8)rd8(r4 + 1u);
                    wr8(r4 + 1u, rd8(r3 + 1u));
                    r4 = r4 + 1u;
                    wr8(r3 + 1u, (u8)r6);
                    r3 = r3 + 1u;
                }
                r30 = r30 - 1u;
                if (r30 == 1u) break;
                r22 = r22 - (u32)param_3;
            } else {
                r26 = r26 - (u32)param_3;
                r23 = r23 - (u32)param_3;
                r31 = r31 - 1u;
            }
            r24 = r31;
            r20 = (u32)param_1 + (r26 + r25);
            while (((r24 << 1u) & 0xfffffffeu) <= r30) {
                r24 = (r24 << 1u) & 0xfffffffeu;
                r21 = r20;
                r20 = (u32)param_1 + ((u32)param_3 * (r24 - 1u));
                if (r24 < r30) {
                    r19 = r20 + (u32)param_3;
                    a.r[0] = r20;
                    a.r[1] = r19;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.f[0] = f1;
                    r3 = tc_call(param_4, &a);
                    f1 = tc_lastf();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    if ((s32)r3 < 0) {
                        r20 = r19;
                        r24 = r24 + 1u;
                    }
                }
                a.r[0] = r21;
                a.r[1] = r20;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.f[0] = f1;
                r3 = tc_call(param_4, &a);
                f1 = tc_lastf();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                if ((s32)r3 >= 0) break;
                r3 = r20 - 1u;
                r4 = r21 - 1u;
                r5 = (u32)param_3 + 1u;
                for (;;) {
                    r5 = r5 - 1u;
                    if (r5 == 0u) break;
                    r6 = (u32)(s8)rd8(r4 + 1u);
                    wr8(r4 + 1u, rd8(r3 + 1u));
                    r4 = r4 + 1u;
                    wr8(r3 + 1u, (u8)r6);
                    r3 = r3 + 1u;
                }
            }
        }
    }
    return;
}
