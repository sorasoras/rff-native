#include "tc_rt.h"

void fn_80114108(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32((u32)param_1 + 0x40u);
    wr32(0x817fdfe8u, 0x43300000u);
    wr32(0x817fdff0u, 0x43300000u);
    if (r0 != 0u) {
        r3 = rd32((u32)param_1 + 0x48u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = 0x43300000u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 0x18u), &a);
        }
        r3 = rd32((u32)param_1 + 0x4cu);
        if (r3 != 0u) {
            f0 = (f64)rdf32(0x80574124u);
            f1 = (f64)rdf32(0x80574144u);
            wrf32d(0x817fdfc8u, f0);
            wrf32d(0x817fdfb8u, f1);
            wrf32d(0x817fdfd8u, f0);
            wrf32d(0x817fdfbcu, f0);
            wrf32d(0x817fdfccu, f1);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfc0u, f0);
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfe0u, f1);
            wrf32d(0x817fdfc4u, f0);
            wrf32d(0x817fdfd4u, f0);
            wrf32d(0x817fdfe4u, f0);
            r5 = rd32((u32)param_1 + 0x48u);
            if (r5 != 0u) {
                r0 = rd32(r5 + 4u);
                wr32(0x817fdfb8u, rd32(r5));
                wr32(0x817fdfbcu, r0);
                r0 = rd32(r5 + 0xcu);
                wr32(0x817fdfc0u, rd32(r5 + 8u));
                wr32(0x817fdfc4u, r0);
                r0 = rd32(r5 + 0x14u);
                wr32(0x817fdfc8u, rd32(r5 + 0x10u));
                wr32(0x817fdfccu, r0);
                r0 = rd32(r5 + 0x1cu);
                wr32(0x817fdfd0u, rd32(r5 + 0x18u));
                wr32(0x817fdfd4u, r0);
                r0 = rd32(r5 + 0x24u);
                wr32(0x817fdfd8u, rd32(r5 + 0x20u));
                wr32(0x817fdfdcu, r0);
                r0 = rd32(r5 + 0x2cu);
                wr32(0x817fdfe0u, rd32(r5 + 0x28u));
                wr32(0x817fdfe4u, r0);
            }
            r7 = rd32(0x805707e8u);
            r6 = 0u;
            r4 = rd32(r3 + 0x40u) - r7;
            r5 = r3 + ((r7 << 2u) & 0xfffffffcu);
            ctr = r4;
            if ((s32)r4 > 0) {
                while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                    r6 = r6 + 1u;
                    r5 = r5 + 4u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) break;
                }
            }
            r4 = r6 + r7;
            r5 = rd32(r3 + (((r4 + 1u) << 2u) & 0xfffffffcu));
            if ((r5 & 1u) == 0u) {
                if ((r5 & 0x20u) != 0u) {
                    f0 = (f64)rdf32(0x80574124u);
                    r6 = r3 + ((r4 << 2u) & 0xfffffffcu);
                    wrf32d(0x817fdfb0u, f0);
                    f1 = rdf64(0x80574130u);
                    wrf32d(0x817fdfacu, f0);
                    wrf32d(0x817fdfa8u, f0);
                    wr32(0x817fdff4u, rd32(r6 + 8u) ^ 0x80000000u);
                    wrf32d(0x817fdfa8u, (f64)(f32)(rdf64(0x817fdff0u) - f1));
                    wr32(0x817fdfecu, rd32(r6 + 0xcu) ^ 0x80000000u);
                    wrf32d(0x817fdfacu, (f64)(f32)(rdf64(0x817fdfe8u) - f1));
                    wr32(0x817fdff4u, rd32(r6 + 0x10u) ^ 0x80000000u);
                    wrf32d(0x817fdfb0u, (f64)(f32)(rdf64(0x817fdff0u) - f1));
                    a.r[0] = 0x817fdfb8u;
                    a.r[1] = 0x817fdfa8u;
                    a.r[2] = 0x817fdfa8u;
                    (void)tc_call(0x8023411cu, &a);
                    a.r[0] = param_2;
                    a.r[1] = 0x817fdfa8u;
                    a.r[2] = param_2;
                    (void)tc_call(0x80234380u, &a);
                }
            } else {
                f1 = rdf64(0x80574130u);
                r3 = r3 + ((r4 << 2u) & 0xfffffffcu);
                wr32(0x817fdfecu, rd32(r3 + 8u) ^ 0x80000000u);
                wrf32d(param_2, (f64)(f32)(rdf64(0x817fdfe8u) - f1));
                wr32(0x817fdff4u, rd32(r3 + 0xcu) ^ 0x80000000u);
                wrf32d(param_2 + 4u, (f64)(f32)(rdf64(0x817fdff0u) - f1));
                wr32(0x817fdfecu, rd32(r3 + 0x10u) ^ 0x80000000u);
                wrf32d(param_2 + 8u, (f64)(f32)(rdf64(0x817fdfe8u) - f1));
            }
        }
    }
    return;
}
