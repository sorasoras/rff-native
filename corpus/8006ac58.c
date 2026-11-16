#include "tc_rt.h"

void fn_8006ac58(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    r5 = 0u;
    wr32(0x817fe004u, 0x817ff000u);
    r6 = 0x80471ed0u;
    wr32(0x817fdffcu, 0u);
    ctr = 0xau;
    for (;;) {
        r7 = rd32(r6 + 0xbf8u);
        if (r7 != 0u) {
            f0 = (f64)rdf32(r7 + 0x18u);
            r0 = 0u;
            f1 = (f64)rdf32(param_2);
            if ((f0 < f1) || (f0 == f1)) {
                f0 = (f64)rdf32(r7 + 0x24u);
                if ((f0 > f1) || (f0 == f1)) {
                    f0 = (f64)rdf32(r7 + 0x20u);
                    f1 = (f64)rdf32(param_2 + 8u);
                    if ((f0 < f1) || (f0 == f1)) {
                        f0 = (f64)rdf32(r7 + 0x2cu);
                        if ((f0 > f1) || (f0 == f1)) {
                            r0 = 1u;
                        }
                    }
                }
            }
            if (r0 != 0u) {
                r0 = 1u;
                break;
            }
        }
        r7 = rd32(r6 + 0xbfcu);
        if (r7 != 0u) {
            f0 = (f64)rdf32(r7 + 0x18u);
            r0 = 0u;
            f1 = (f64)rdf32(param_2);
            if ((f0 < f1) || (f0 == f1)) {
                f0 = (f64)rdf32(r7 + 0x24u);
                if ((f0 > f1) || (f0 == f1)) {
                    f0 = (f64)rdf32(r7 + 0x20u);
                    f1 = (f64)rdf32(param_2 + 8u);
                    if ((f0 < f1) || (f0 == f1)) {
                        f0 = (f64)rdf32(r7 + 0x2cu);
                        if ((f0 > f1) || (f0 == f1)) {
                            r0 = 1u;
                        }
                    }
                }
            }
            if (r0 != 0u) {
                r0 = 1u;
                break;
            }
        }
        r6 = r6 + 8u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r0 = 0u;
            break;
        }
    }
    if (r0 != 0u) {
        r0 = rd32((u32)param_1 + 0x290u);
        if ((s32)r0 < 10 || (s32)r0 > 18) {
            f3 = (f64)rdf32(0x805725d8u);
            f4 = (f64)rdf32(0x805725e0u);
            f0 = (f64)rdf32(param_2 + 8u);
            wrf32d(0x817fdfa4u, f3);
            f2 = (f64)rdf32(param_2);
            f1 = (f64)rdf32(param_2 + 4u);
            wrf32d(0x817fdfb4u, f3);
            wrf32d(0x817fdfc8u, f4);
            wrf32d(0x817fdfd8u, f3);
            wrf32d(0x817fdfe8u, f3);
            wrf32d(0x817fdfccu, f3);
            wrf32d(0x817fdfdcu, f4);
            wrf32d(0x817fdfecu, f3);
            wrf32d(0x817fdfd0u, f3);
            wrf32d(0x817fdfe0u, f3);
            wrf32d(0x817fdff0u, f4);
            wrf32d(0x817fdfd4u, f3);
            wrf32d(0x817fdfe4u, f3);
            wrf32d(0x817fdff4u, f3);
            wrf32d(0x817fdf98u, f4);
            wrf32d(0x817fdfa8u, f3);
            wrf32d(0x817fdfb8u, f3);
            wrf32d(0x817fdf9cu, f3);
            wrf32d(0x817fdfacu, f4);
            wrf32d(0x817fdfbcu, f3);
            wrf32d(0x817fdfa0u, f3);
            wrf32d(0x817fdfb0u, f3);
            wrf32d(0x817fdfc0u, f4);
            wrf32d(0x817fdfa4u, f2);
            wrf32d(0x817fdfb4u, f1);
            wrf32d(0x817fdfc4u, f0);
            a.r[0] = 0x817fdf98u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x817fdfc8u;
            (void)tc_call(0x802337a0u, &a);
            a.r[0] = rd32(0x80472b1cu);
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x800315c0u, &a);
            a.r[0] = rd32(0x80472b1cu);
            a.r[1] = 7u;
            (void)tc_call(0x800318a8u, &a);
        }
    }
    return;
}
