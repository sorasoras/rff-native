#include "tc_rt.h"

void fn_800d990c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x18u) + 0x10u;
    a.r[1] = 0u;
    r3 = tc_call(0x802de9f0u, &a);
    r31 = r3;
    while (r31 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x18u) + 0x10u;
        a.r[1] = r31;
        r3 = tc_call(0x802de9f0u, &a);
        f1 = tc_lastf();
        r29 = rd32(r31 + 0x44u);
        r30 = r3;
        while (r29 != 0u) {
            r23 = rd32(r29 + (u32)rd16(r31 + 0x4eu) + 4u);
            if (rd32(r29 + 0x10u) != 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80356884u;
                a.r[1] = 0x17au;
                a.r[2] = 0x80356854u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802e41c0u, &a);
            }
            r0 = 1u;
            r4 = 1u;
            r3 = rd32(rd32(r29 + 0xc8u) + 0xcu);
            if (r3 != 1u && r3 != 2u) {
                r4 = 0u;
            }
            if (r4 == 0u && r3 != 3u) {
                r0 = 0u;
            }
            if (r0 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80356840u;
                a.r[1] = 0x17du;
                a.r[2] = 0x80356718u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802e41c0u, &a);
            }
            a.r[0] = rd32(r29 + 0xc8u) + 0x44u;
            a.r[1] = r29;
            (void)tc_call(0x802de984u, &a);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x10u;
            a.r[1] = r29;
            (void)tc_call(0x802de984u, &a);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 4u;
            a.r[1] = r29;
            f1 = tc_callf(0x802de7f4u, &a);
            r29 = r23;
        }
        r31 = r30;
    }
    r26 = rd32((u32)param_1 + 0x18u);
    if (r26 != 0u) {
        a.r[0] = r26 + 0x10u;
        a.r[1] = 0u;
        r3 = tc_call(0x802de9f0u, &a);
        r25 = r3;
        if (r3 != 0u) {
            a.r[0] = r26 + 0x10u;
            a.r[1] = r3;
            r3 = tc_call(0x802de9f0u, &a);
            r24 = r3;
            while (r25 != 0u) {
                if (rd32(r25 + 0xcu) == 3u && rd32(r25 + 0x10u) == 0u) {
                    a.r[0] = rd32(r25 + 0x20u) + 0xccu;
                    a.r[1] = r25;
                    (void)tc_call(0x802de984u, &a);
                    a.r[0] = r26 + 0x10u;
                    a.r[1] = r25;
                    (void)tc_call(0x802de984u, &a);
                    a.r[0] = r26 + 4u;
                    a.r[1] = r25;
                    (void)tc_call(0x802de7f4u, &a);
                }
                r25 = r24;
                a.r[0] = r26 + 0x10u;
                a.r[1] = r24;
                r3 = tc_call(0x802de9f0u, &a);
                r24 = r3;
            }
        }
    }
    r26 = rd32((u32)param_1 + 0x10u);
    if (r26 != 0u) {
        a.r[0] = r26 + 0x10u;
        a.r[1] = 0u;
        r3 = tc_call(0x802de9f0u, &a);
        r25 = r3;
        if (r3 != 0u) {
            a.r[0] = r26 + 0x10u;
            a.r[1] = r3;
            r3 = tc_call(0x802de9f0u, &a);
            r24 = r3;
            while (r25 != 0u) {
                if (rd32(r25 + 0xcu) == 3u && rd32(r25 + 0x10u) == 0u) {
                    a.r[0] = rd32(r25 + 0xbcu) + 0x30u;
                    a.r[1] = r25;
                    (void)tc_call(0x802de984u, &a);
                    a.r[0] = r26 + 0x10u;
                    a.r[1] = r25;
                    (void)tc_call(0x802de984u, &a);
                    a.r[0] = r26 + 4u;
                    a.r[1] = r25;
                    (void)tc_call(0x802de7f4u, &a);
                }
                r25 = r24;
                a.r[0] = r26 + 0x10u;
                a.r[1] = r24;
                r3 = tc_call(0x802de9f0u, &a);
                r24 = r3;
            }
        }
    }
    r26 = rd32((u32)param_1 + 8u);
    if (r26 != 0u) {
        a.r[0] = r26 + 0x10u;
        a.r[1] = 0u;
        r3 = tc_call(0x802de9f0u, &a);
        r25 = r3;
        if (r3 != 0u) {
            a.r[0] = r26 + 0x10u;
            a.r[1] = r3;
            r3 = tc_call(0x802de9f0u, &a);
            r24 = r3;
            while (r25 != 0u) {
                if (rd32(r25 + 0xcu) == 3u && rd32(r25 + 0x10u) == 0u) {
                    a.r[0] = rd32(rd32(r25 + 0x20u) + 0xc018u) + (rd32(r25 + 0x40u) * 0x1cu) + 0xcu;
                    a.r[1] = r25;
                    (void)tc_call(0x802de984u, &a);
                    a.r[0] = r26 + 0x10u;
                    a.r[1] = r25;
                    (void)tc_call(0x802de984u, &a);
                    a.r[0] = r26 + 4u;
                    a.r[1] = r25;
                    (void)tc_call(0x802de7f4u, &a);
                }
                r25 = r24;
                a.r[0] = r26 + 0x10u;
                a.r[1] = r24;
                r3 = tc_call(0x802de9f0u, &a);
                r24 = r3;
            }
        }
    }
    return;
}
