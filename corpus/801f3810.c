#include "tc_rt.h"

void fn_801f3810(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r22 = 0, r23 = 0, r24 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    r4 = 7u - (u32)param_2;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = 0u;
    r31 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
    wr32((u32)param_1 + 0xf10u, 0u);
    while ((s32)r30 < (s32)rd32((u32)param_1 + 0x3c0u)) {
        a.r[0] = r30;
        r3 = tc_call(0x8013f5b0u, &a);
        r22 = (u32)(s8)r3;
        a.r[0] = r30;
        r3 = tc_call(0x8013f39cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r3;
        r3 = tc_call(0x801f33e8u, &a);
        r29 = r3;
        a.r[0] = r30;
        r3 = tc_call(0x8013f718u, &a);
        if (((u32)rd8(r3) & r31) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r29;
            r3 = tc_call(0x801f4614u, &a);
            r28 = r3;
            a.r[0] = r3;
            a.r[1] = r30;
            f1 = tc_callf(0x801f4b58u, &a);
            r24 = r22 * 0x48u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_1 + r24 + 0x3d0u;
            a.r[2] = r28;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801f39a4u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                r23 = (u32)param_1 + r24 + (r29 * 0xcu) + 0x3c4u;
                r24 = r23 + 4u;
                if (r28 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80376ad0u;
                    a.r[1] = 0x233u;
                    a.r[2] = 0x80376aacu;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802e41c0u, &a);
                }
                wr32(0x817fdfccu, r24);
                a.r[0] = r23;
                a.r[1] = 0x817fdfccu;
                a.r[2] = r28;
                (void)tc_call(0x802deba4u, &a);
                r4 = (r29 << 2u) & 0xfffffffcu;
                r5 = (u32)param_1 + (r22 * 0x18u);
                wr32(r5 + r4, rd32(r5 + r4) + 1u);
                wr32(r5, rd32(r5) + 1u);
                if (r29 == 1u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r29;
                    r3 = tc_call(0x801f4614u, &a);
                    f1 = tc_lastf();
                    r22 = r3;
                    r29 = r28 + 0x24u;
                    if (r3 == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80376ad0u;
                        a.r[1] = 0x233u;
                        a.r[2] = 0x80376aacu;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802e41c0u, &a);
                    }
                    wr32(0x817fdfc8u, r29);
                    a.r[0] = r28 + 0x20u;
                    a.r[1] = 0x817fdfc8u;
                    a.r[2] = r22;
                    (void)tc_call(0x802deba4u, &a);
                    a.r[0] = r22;
                    a.r[1] = r30;
                    (void)tc_call(0x801f4b58u, &a);
                    wr32(r28 + 0x40u, rd32(r28 + 0x24u));
                }
            }
        }
        r30 = r30 + 1u;
    }
    return;
}
