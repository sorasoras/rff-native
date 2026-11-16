#include "tc_rt.h"

void fn_8011c6a8(s32 param_1)
{
    u32 r3 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x14u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x802ee834u, &a);
    r26 = r3;
    r25 = rd32(rd32((u32)param_1 + 0x14u) + 0x14u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011c79cu, &a);
    r24 = rd32((u32)param_1 + 0x10u);
    r27 = r3;
    r23 = 0u;
    while ((s32)r23 < (s32)r27) {
        a.r[0] = r25;
        a.r[1] = r26;
        r3 = tc_call(0x802e5528u, &a);
        r30 = r3;
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x802ee854u, &a);
        a.r[0] = r30;
        a.r[1] = rd32(r24);
        a.r[2] = r3;
        a.r[3] = 0u;
        f1 = tc_callf(0x802efee4u, &a);
        r30 = r30 + 0x10u;
        r31 = rd32(r30);
        while (r31 != r30) {
            if (r31 == 0u) {
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
            r22 = rd32(r31 + 8u);
            a.r[0] = r22;
            f1 = tc_callf(0x8011da7cu, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r22;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8011daacu, &a);
            r31 = rd32(r31);
        }
        r26 = r26 + 0x14u;
        r24 = r24 + 4u;
        r23 = r23 + 1u;
    }
    return;
}
