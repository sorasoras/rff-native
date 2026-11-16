#include "tc_rt.h"

void fn_80069f9c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (rd32((u32)param_1 + 0xa48u) == 0u) {
        r0 = rd32((u32)param_1 + 0x290u);
        if ((r0 != 0x19u && r0 != 0x18u) && r0 != 0x1au) {
            if (rd32(0x805711ecu) != 0u) {
                return;
            }
            if (rd32((u32)param_1 + 0x9e4u) == 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = rd32((u32)param_1 + 0x9e8u);
                a.r[2] = rd32((u32)param_1 + 0x9ecu);
                a.r[3] = (u32)param_1 + 0x9bcu;
                a.r[4] = 0u;
                (void)tc_call(0x8006a190u, &a);
            } else {
                a.r[0] = (u32)param_1;
                a.r[1] = rd32((u32)param_1 + 0x9e8u);
                a.r[2] = rd32((u32)param_1 + 0x9ecu);
                a.r[3] = (u32)param_1 + 0x9bcu;
                a.r[4] = 1u;
                (void)tc_call(0x8006a190u, &a);
            }
            r3 = rd32((u32)param_1 + 0x5c0u);
            r0 = 0u;
            if ((s32)r3 >= 0 && (s32)r3 <= 36) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                f2 = (f64)rdf32(0x80572680u);
                f0 = (f64)rdf32(0x803d27a4u);
                f4 = (f64)rdf32(0x803d27a8u);
                wrf32d(0x817fdfd8u, (f64)rdf32(0x803d27a0u));
                f3 = (f64)rdf32(0x803d27acu);
                wrf32d(0x817fdfdcu, f0);
                r10 = rd32(0x817fdfd8u);
                r9 = rd32(0x817fdfdcu);
                wrf32d(0x817fdfe0u, f4);
                f1 = (f64)rdf32(0x80572684u);
                r8 = rd32(0x817fdfe0u);
                wrf32d(0x817fdfe4u, f3);
                f0 = (f64)rdf32((u32)param_1 + 0x9acu);
                r7 = rd32(0x817fdfe4u);
                wrf32d(0x817fdfd8u, f2);
                wrf32d(0x817fdfdcu, f2);
                r6 = rd32(0x817fdfd8u);
                wrf32d(0x817fdfe0u, f1);
                r5 = rd32(0x817fdfdcu);
                wrf32d(0x817fdfe4u, f0);
                r4 = rd32(0x817fdfe0u);
                r0 = rd32(0x817fdfe4u);
                wr32(0x817fdfa8u, r6);
                wr32(0x817fdfacu, r5);
                f3 = (f64)rdf32(0x817fdfa8u);
                wr32(0x817fdfb0u, r4);
                f2 = (f64)rdf32(0x817fdfacu);
                wr32(0x817fdfb4u, r0);
                f1 = (f64)rdf32(0x817fdfb0u);
                f0 = (f64)rdf32(0x817fdfb4u);
                wr32(0x817fdfc8u, r10);
                wr32(0x817fdfccu, r9);
                wr32(0x817fdfd0u, r8);
                wr32(0x817fdfd4u, r7);
                wrf32d(0x803d27a0u, f3);
                wrf32d(0x803d27a4u, f2);
                wrf32d(0x803d27a8u, f1);
                wrf32d(0x803d27acu, f0);
                a.r[0] = 0x803d27a0u;
                (void)tc_call(0x8004a4fcu, &a);
                r5 = rd32((u32)param_1 + 0x9b0u);
                f0 = (f64)rdf32(0x805725f4u);
                wr32(0x817fdfbcu, rd32((u32)param_1 + 0x9b4u));
                f1 = (f64)rdf32(0x817fdfbcu);
                wr32(0x817fdfb8u, r5);
                f0 = (f64)(f32)(f1 + f0);
                wr32(0x817fdfc0u, rd32((u32)param_1 + 0x9b8u));
                wrf32d(0x817fdfbcu, f0);
                a.r[0] = (u32)param_1;
                a.r[1] = 0x817fdfb8u;
                (void)tc_call(0x8006ac58u, &a);
                r5 = rd32(0x817fdfccu);
                r4 = rd32(0x817fdfd0u);
                r0 = rd32(0x817fdfd4u);
                wr32(0x817fdf98u, rd32(0x817fdfc8u));
                wr32(0x817fdf9cu, r5);
                f3 = (f64)rdf32(0x817fdf98u);
                wr32(0x817fdfa0u, r4);
                f2 = (f64)rdf32(0x817fdf9cu);
                wr32(0x817fdfa4u, r0);
                f1 = (f64)rdf32(0x817fdfa0u);
                f0 = (f64)rdf32(0x817fdfa4u);
                wrf32d(0x803d27a0u, f3);
                wrf32d(0x803d27a4u, f2);
                wrf32d(0x803d27a8u, f1);
                wrf32d(0x803d27acu, f0);
                a.r[0] = 0x803d27a0u;
                (void)tc_call(0x8004a4fcu, &a);
            }
        }
    }
    return;
}
