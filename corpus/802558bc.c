#include "tc_rt.h"

void fn_802558bc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r11 = tc_argr(8u), r12 = tc_argr(9u);
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = (u32)param_1;
    for (;;) {
        r0 = rd32(r12);
        r11 = rd32(r12 + 4u);
        r12 = rd32(r12 + 8u);
        r3 = r3 + r0;
        if ((s32)r11 < 0) goto L_802558dc;
    L_802558d4:;
        r12 = rd32(r3 + r12);
        r12 = rd32(r12 + r11);
    L_802558dc:;
        if (r12 != 0x802558bcu) {
            goto L_802558e0_sent_10;
        L_802558e0_tailc_4:;
            a.r[0] = r3;
            a.r[1] = tc_argr(1u);
            a.r[2] = tc_argr(2u);
            a.r[3] = tc_argr(3u);
            a.r[4] = tc_argr(4u);
            a.r[5] = tc_argr(5u);
            a.r[6] = tc_argr(6u);
            a.r[7] = tc_argr(7u);
            a.f[0] = tc_argf(0u);
            a.f[1] = tc_argf(1u);
            a.f[2] = tc_argf(2u);
            a.f[3] = tc_argf(3u);
            a.f[4] = tc_argf(4u);
            a.f[5] = tc_argf(5u);
            a.f[6] = tc_argf(6u);
            a.f[7] = tc_argf(7u);
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return;
        L_802558e0_ibg_7:;
            if (r12 == 0x802558d4u) goto L_802558d4;
            goto L_802558e0_tailc_4;
        L_802558e0_ibg_9:;
            if (r12 == 0x802558dcu) goto L_802558dc;
            goto L_802558e0_ibg_7;
        L_802558e0_sent_10:;
            if (r12 == 0x817ff000u) {
                return;
            }
            goto L_802558e0_ibg_9;
        }
    }
}
