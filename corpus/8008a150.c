#include "tc_rt.h"

void fn_8008a150(f64 param_1, f64 param_2, f64 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f3 = param_3;
    r5 = param_6;
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    f0 = (f64)rdf32(0x80572908u);
    wrf32d(0x817fdfa0u, f0);
    f31 = (f64)rdf32(0x8057293cu);
    wrf32d(0x817fdf9cu, f0);
    wrf32d(0x817fdf98u, f0);
    if (param_6 != 0u) {
        wr32(param_6, 0u);
    }
    r31 = param_4;
    r29 = 0u;
    do {
        r30 = r31;
        r28 = 0u;
        do {
            r4 = rd32(r30 + 0x24u);
            if (r4 != 0u && rd32(r30 + 0x28u) == 1u) {
                r3 = rd32(r4 + 0xcu);
                f0 = (f64)rdf32(r3);
                if ((param_1 < f0) || (param_1 == f0)) {
                    r0 = 0u;
                } else {
                    f0 = (f64)rdf32(r3 + 8u);
                    if ((param_2 < f0) || (param_2 == f0)) {
                        r0 = 0u;
                    } else {
                        f0 = (f64)rdf32(r3 + 0xcu);
                        if ((param_1 > f0) || (param_1 == f0)) {
                            r0 = 0u;
                        } else {
                            f0 = (f64)rdf32(r3 + 0x14u);
                            if (!((param_2 > f0) || (param_2 == f0))) {
                                r0 = 1u;
                            } else {
                                r0 = 0u;
                            }
                        }
                    }
                }
                if (r0 != 0u) {
                    r12 = rd32(r4 + 0x18u);
                    r4 = rd32(r4 + 0xcu);
                    a.r[0] = 0x817fdf98u;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.f[0] = param_1;
                    a.f[1] = param_2;
                    a.f[2] = f3;
                    f1 = tc_callf(r12, &a);
                    r5 = 0u;
                    f3 = 0.0;
                    if (f1 > f31 && f1 < param_3) {
                        f31 = f1;
                        wrf32d(param_5, (f64)rdf32(0x817fdf98u));
                        wrf32d(param_5 + 4u, (f64)rdf32(0x817fdf9cu));
                        wrf32d(param_5 + 8u, (f64)rdf32(0x817fdfa0u));
                        if (param_6 != 0u) {
                            wr32(param_6, r29);
                        }
                    }
                }
            }
            r28 = r28 + 1u;
            r30 = r30 + 8u;
        } while ((s32)r28 < 20);
        r29 = r29 + 1u;
        r31 = r31 + 0xa0u;
    } while ((s32)r29 < 2);
    (void)((f64)rdf32(0x8057293cu) != f31);
    return;
}
