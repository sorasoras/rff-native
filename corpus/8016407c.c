#include "tc_rt.h"

void fn_8016407c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 4u, rd32(param_2));
    a.r[0] = 0x20u;
    r3 = tc_call(0x80164438u, &a);
    r25 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801644a8u, &a);
    }
    wr32(param_1, r25);
    a.r[0] = r25;
    a.r[1] = rd32(rd32(param_1 + 4u) + 0x10u);
    (void)tc_call(0x80164674u, &a);
    r22 = rd32(param_1);
    wr32(rd32(param_1 + 4u) + 0xd4u, 0u);
    a.r[0] = param_2 + 0x14u;
    r3 = tc_call(0x802ee834u, &a);
    r23 = r3;
    r21 = 0u;
    for (;;) {
        a.r[0] = param_2 + 0x14u;
        r3 = tc_call(0x802ee818u, &a);
        if ((s32)r21 >= (s32)(r3 & 0xffffu)) break;
        a.r[0] = rd32(rd32(param_1 + 4u) + 0x14u);
        a.r[1] = r23;
        r3 = tc_call(0x802e5528u, &a);
        if (r3 != 0u) {
            r28 = rd32(r3 + 0x10u);
            r27 = r3 + 0x10u;
            while (r28 != r27) {
                a.r[0] = 0x20u;
                r3 = tc_call(0x80164438u, &a);
                f1 = tc_lastf();
                r24 = r3;
                if (r3 != 0u) {
                    a.r[0] = r3;
                    f1 = tc_callf(0x801644a8u, &a);
                }
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r22;
                a.r[1] = r24;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8016455cu, &a);
                if (r28 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80360724u;
                    a.r[1] = 0x23du;
                    a.r[2] = 0x80360700u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802e41c0u, &a);
                }
                a.r[0] = r24;
                a.r[1] = rd32(r28 + 8u);
                (void)tc_call(0x80164674u, &a);
                a.r[0] = param_1;
                a.r[1] = r24;
                a.r[2] = param_3;
                (void)tc_call(0x80164250u, &a);
                r22 = r24;
                r28 = rd32(r28);
            }
        }
        r23 = r23 + 0x14u;
        r21 = r21 + 1u;
    }
    return;
}
