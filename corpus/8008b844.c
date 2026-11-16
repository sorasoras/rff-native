#include "tc_rt.h"

void fn_8008b844(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    f31 = (f64)rdf32(0x80572908u);
    r31 = param_1;
    r30 = param_1 + 0x3160u;
    r29 = 0u;
    do {
        if (rd32(r31 + 0x315cu) != 0u) {
            r6 = rd32(param_2 + 4u);
            r0 = rd32(param_2 + 8u);
            wr32(0x817fdfb8u, rd32(param_2));
            wr32(0x817fdfbcu, r6);
            wr32(0x817fdfc0u, r0);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r30;
            a.r[2] = 0x817fdfb8u;
            (void)tc_call(0x802343a4u, &a);
            wrf32d(0x817fdfbcu, f31);
            a.r[0] = 0x817fdfb8u;
            f1 = tc_callf(0x80234440u, &a);
            if (f1 < (f64)rdf32(r31 + 0x316cu)) {
                r6 = r31;
                r7 = 0u;
                ctr = 0xau;
                do {
                    if (rd32(r6 + 0x317cu) != 0u) {
                        f2 = (f64)rdf32(param_2 + 8u);
                        f0 = (f64)(f32)((f64)rdf32(r6 + 0x3198u) + f31);
                        c0lt = f2 < f0;
                        f1 = (f64)rdf32(param_2);
                        r5 = (((c0lt << 0x1fu) | ((f2 > f0) << 0x1eu) | ((c0lt || (f2 == f0)) << 0x1du) | (((f2 != f2) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
                        f0 = (f64)(f32)((f64)rdf32(r6 + 0x3190u) + f31);
                        c0lt = f1 < f0;
                        r4 = (((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
                        f0 = (f64)(f32)((f64)rdf32(r6 + 0x3184u) - f31);
                        c0lt = f0 < f1;
                        r3 = (((c0lt << 0x1fu) | ((f0 > f1) << 0x1eu) | ((c0lt || (f0 == f1)) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u;
                        f0 = (f64)(f32)((f64)rdf32(r6 + 0x318cu) - f31);
                        c0lt = f0 < f2;
                        if ((r5 & (r4 & (r3 & ((((c0lt << 0x1fu) | ((f0 > f2) << 0x1eu) | ((c0lt || (f0 == f2)) << 0x1du) | (((f0 != f0) || (f2 != f2)) << 0x1cu)) >> 0x1du) & 1u)))) != 0u) {
                            if (param_3 != 0u) {
                                wr32(param_3, r29);
                            }
                            if (param_4 != 0u) {
                                wr32(param_4, rd32(param_1 + (r29 * 0x160u) + ((r7 << 5u) & 0xffffffe0u) + 0x3180u));
                            }
                            return;
                        }
                    }
                    r6 = r6 + 0x20u;
                    r7 = r7 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x160u;
        r31 = r31 + 0x160u;
    } while (r29 < 0xau);
    return;
}
