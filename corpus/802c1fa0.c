#include "tc_rt.h"

void fn_802c1fa0(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (param_3 >= 0x18700u) {
        r3 = tc_call(0x80242ce0u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x80242ce8u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80243144u, &a);
        }
        (void)tc_call(0x802da7ecu, &a);
        (void)tc_call(0x802dc0f8u, &a);
        f1 = tc_callf(0x802ddb80u, &a);
        r4 = (u32)param_2 + 0x10000u;
        r5 = (u32)param_2 + 0x5c58u;
        wr8((u32)param_2 + 0x2e1cu, 0u);
        wr32((u32)param_2 + 0x2e20u, 0u);
        wr32((u32)param_2 + 0x2e24u, 0u);
        wr8((u32)param_2 + 0x5c48u, 0u);
        wr32((u32)param_2 + 0x5c4cu, 0u);
        wr32((u32)param_2 + 0x5c50u, 0u);
        wr8(r5 + 0x2e1cu, 0u);
        wr32(r5 + 0x2e20u, 0u);
        wr32(r5 + 0x2e24u, 0u);
        wr8(r4 - 0x4760u, 0u);
        wr32(r4 - 0x475cu, 0u);
        wr32(r4 - 0x4758u, 0u);
        wr8(r4 - 0x1934u, 0u);
        wr32(r4 - 0x1930u, 0u);
        wr32(r4 - 0x192cu, 0u);
        wr8(r4 + 0x14f8u, 0u);
        wr32(r4 + 0x14fcu, 0u);
        wr32(r4 + 0x1500u, 0u);
        wr8(r4 + 0x4324u, 0u);
        wr32(r4 + 0x4328u, 0u);
        wr32(r4 + 0x432cu, 0u);
        wr32(r4 + 0x46b4u, 0u);
        wr32(r4 + 0x46b8u, 0u);
        wr32(r4 + 0x46b0u, r4 + 0x4700u);
        wr32(r4 + 0x4334u, 0u);
        wr32(r4 + 0x4338u, 0u);
        wr32(r4 + 0x433cu, 0u);
        wr32(r4 + 0x4340u, 0u);
        r4 = r4 + 0x434cu;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x80275974u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_2 + 0x1434cu;
            a.r[1] = 0x80348648u;
            a.r[2] = 0x817fdfe4u;
            r3 = tc_call(0x80275a14u, &a);
            if (r3 != 0u) {
                a.r[0] = 0x817fdfe4u;
                r3 = tc_call(0x80276134u, &a);
                r5 = (u32)param_2 + 0x10000u;
                wr32(r5 + 0x46b4u, r3);
                a.r[0] = r5 + 0x434cu;
                a.r[1] = 0x8034865cu;
                a.r[2] = 0x817fdfd8u;
                r3 = tc_call(0x80275a14u, &a);
                if (r3 != 0u) {
                    a.r[0] = 0x817fdfd8u;
                    r3 = tc_call(0x80276134u, &a);
                    r4 = (u32)param_2 + 0x10000u;
                    wr32(r4 + 0x46b8u, r3);
                    r3 = r4 + 0x4680u;
                    r4 = r4 + 0x46a0u;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 4u;
                    (void)tc_call(0x8022ca4cu, &a);
                    r3 = (u32)param_2 + 0x10000u;
                    r7 = param_3 - 0x10000u;
                    r6 = rd32(r3 + 0x46b0u) + (r7 - 0x4700u);
                    r3 = r3 + 0x4368u;
                    r7 = r7 - 0x4700u;
                    a.r[0] = r3;
                    a.r[1] = 0x802c1c04u;
                    a.r[2] = 0u;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = 4u;
                    a.r[6] = 0u;
                    r3 = tc_call(0x8022f550u, &a);
                    if (r3 != 0u) {
                        wr32(0x80547478u, (u32)param_2);
                        a.r[0] = (u32)param_2 + 0x14368u;
                        (void)tc_call(0x8022fbb8u, &a);
                        a.r[0] = 0x802c1ba0u;
                        r3 = tc_call(0x802450d8u, &a);
                        wr32((u32)param_2 + 0x14348u, r3);
                    }
                }
            }
        }
    }
    return;
}
