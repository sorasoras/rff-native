#include "tc_rt.h"

void fn_801f3674(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r4 = 7u - (u32)param_2;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r26 = 0u;
    r27 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
    wr32((u32)param_1 + 0xf10u, 0u);
    while ((s32)r26 < (s32)rd32((u32)param_1 + 0x3c0u)) {
        a.r[0] = r26;
        r3 = tc_call(0x8013f718u, &a);
        if (((u32)rd8(r3) & r27) != 0u) {
            a.r[0] = r26;
            r3 = tc_call(0x8013f39cu, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = r3;
            r3 = tc_call(0x801f33e8u, &a);
            r25 = r3;
            a.r[0] = r26;
            (void)tc_call(0x8013fdd0u, &a);
            c0lt = (s32)r25 < 4;
            if (r25 == 4u) {
                a.r[0] = r26;
                (void)tc_call(0x8013fc7cu, &a);
            } else if (!c0lt) {
                if ((s32)r25 < 6) {
                    a.r[0] = r26;
                    (void)tc_call(0x8013fc7cu, &a);
                }
            } else if ((s32)r25 >= 1) {
                a.r[0] = r26;
                (void)tc_call(0x8013fe24u, &a);
                a.r[0] = r26;
                (void)tc_call(0x8013fcd0u, &a);
            }
            a.r[0] = (u32)param_1;
            a.r[1] = r25;
            r3 = tc_call(0x801f4614u, &a);
            f1 = tc_lastf();
            r24 = r3;
            r30 = (u32)param_1 + 0xf08u;
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
            wr32(0x817fdfdcu, r30);
            a.r[0] = (u32)param_1 + 0xf04u;
            a.r[1] = 0x817fdfdcu;
            a.r[2] = r24;
            (void)tc_call(0x802deba4u, &a);
            wr32((u32)param_1 + 0xf10u, rd32((u32)param_1 + 0xf10u) + 1u);
            a.r[0] = r24;
            a.r[1] = r26;
            (void)tc_call(0x801f4b58u, &a);
            if (r25 == 1u) {
                a.r[0] = (u32)param_1;
                a.r[1] = r25;
                r3 = tc_call(0x801f4614u, &a);
                f1 = tc_lastf();
                r25 = r3;
                r30 = r24 + 0x24u;
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
                wr32(0x817fdfd8u, r30);
                a.r[0] = r24 + 0x20u;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = r25;
                (void)tc_call(0x802deba4u, &a);
                a.r[0] = r25;
                a.r[1] = r26;
                (void)tc_call(0x801f4b58u, &a);
                wr32(r24 + 0x40u, rd32(r24 + 0x24u));
            }
        }
        r26 = r26 + 1u;
    }
    wr32((u32)param_1 + 0xfd8u, (u32)param_1 + 0xf04u);
    return;
}
