#include "tc_rt.h"

void fn_80089454(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r25 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    f1 = (f64)rdf32(0x803d27a4u);
    f0 = (f64)rdf32(0x803d27a8u);
    f30 = (f64)rdf32(0x803d27acu);
    wrf32d(0x817fdfa8u, (f64)rdf32(0x803d27a0u));
    r30 = (u32)rd8(0x80492824u);
    wrf32d(0x817fdfacu, f1);
    r28 = 0u;
    r29 = (u32)rd8(0x80492821u);
    r25 = 0u;
    wrf32d(0x817fdfb0u, f0);
    f31 = (f64)rdf32(0x80572908u);
    wrf32d(0x817fdfb4u, f30);
    while ((s32)r28 < (s32)rd32(param_r3 + 0x2288u)) {
        r3 = param_r3 + r25;
        if ((param_r4 & rd32(r3 + 0x7acu)) != 0u && rd32(r3 + 0x7b4u) != 0u && (f64)rdf32(r3 + 0x7b0u) > f31) {
            r3 = rd32(r3 + 0x7a8u);
            a.r[0] = r3;
            a.r[1] = 1u;
            (void)tc_call(0x8007b16cu, &a);
            a.r[0] = rd32(param_r3 + r25 + 0x7a4u);
            (void)tc_call(0x8007b194u, &a);
            wrf32d(0x817fdfb4u, (f64)rdf32(param_r3 + r25 + 0x7b0u));
            a.r[0] = 0x817fdfa8u;
            (void)tc_call(0x8004a4fcu, &a);
            r4 = 1u;
            r3 = rd32(param_r3 + r25 + 0x7b8u);
            if ((r3 & 0x3800u) != 0u) {
                if ((r3 & 0x800u) == 0u) {
                    if ((r3 & 0x1000u) == 0u) {
                        r3 = ((r29 << 2u) & 0x3fcu) + r29 - 0x7fcb0288u;
                        if (r30 >= (u32)rd8(r3 + 3u) || r30 < (u32)rd8(r3)) {
                            r4 = 1u;
                        } else {
                            r4 = 0u;
                        }
                    } else {
                        r3 = ((r29 << 2u) & 0x3fcu) + r29 - 0x7fcb0288u;
                        if (r30 < (u32)rd8(r3 + 2u) || r30 >= (u32)rd8(r3 + 3u)) {
                            r4 = 0u;
                        } else {
                            r4 = 1u;
                        }
                    }
                } else {
                    r0 = ((r29 << 2u) & 0x3fcu) + r29;
                    r3 = r0 - 0x7fcb0288u;
                    r0 = (u32)rd8(r0 - 0x7fcb0288u);
                    if (r30 < r0 || r30 >= (u32)rd8(r3 + 2u)) {
                        r4 = 0u;
                    } else {
                        r4 = 1u;
                    }
                }
            }
            if (r4 != 0u) {
                r4 = param_r3 + r25;
                r3 = rd32(r4 + 0x7a4u);
                r4 = rd32(r4 + 0x7a8u);
                a.r[0] = r3;
                a.r[1] = r4;
                (void)tc_call(0x8007b1a8u, &a);
            }
            (void)tc_call(0x8007b1a4u, &a);
            a.r[0] = rd32(param_r3 + r25 + 0x7a8u);
            a.r[1] = 0u;
            (void)tc_call(0x8007b16cu, &a);
        }
        r28 = r28 + 1u;
        r25 = r25 + 0x8cu;
    }
    wrf32d(0x817fdfb4u, f30);
    a.r[0] = 0x817fdfa8u;
    (void)tc_call(0x8004a4fcu, &a);
    return;
}
