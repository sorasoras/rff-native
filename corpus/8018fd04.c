#include "tc_rt.h"

void fn_8018fd04(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f31 = (f64)rdf32(0x80575330u);
    wr32(0x817fdfecu, 0u);
    r31 = (u32)param_1 + 0xc8u;
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r29 = 0u;
    wr32(0x817fdfe0u, 0u);
    r30 = (u32)param_1;
    do {
        a.r[0] = r31;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 == 0u) {
            a.r[0] = r31;
            (void)tc_call(0x80157e6cu, &a);
        } else {
            a.r[0] = r31;
            r3 = tc_call(0x80321010u, &a);
            if (r3 != 0u) {
                r3 = rd32(r3 + 0xcu);
            } else {
                r3 = 0u;
            }
            r0 = 0u;
            if (r3 == 1u || r3 == 2u) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = r31;
                (void)tc_call(0x80157e6cu, &a);
            } else {
                a.r[0] = (u32)param_1;
                a.r[1] = rd32(r30 + 4u);
                r3 = tc_call(0x80190000u, &a);
                if (r3 != 0u) {
                    r3 = rd32(r3 + 0x70u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0xdu;
                        r3 = tc_call(0x80031cf8u, &a);
                        r5 = rd32(r3 + 0x50u);
                        wrf32d(0x817fdfdcu, f31);
                        f0 = (f64)rdf32(r5 + 0x2cu);
                        wrf32d(0x817fdfd8u, f31);
                        f1 = (f64)rdf32(r5 + 0x1cu);
                        wrf32d(0x817fdfdcu, f0);
                        f0 = (f64)rdf32(r5 + 0xcu);
                        wrf32d(0x817fdfd8u, f1);
                        r0 = rd32(0x817fdfdcu);
                        wrf32d(0x817fdfd4u, f0);
                        r6 = rd32(0x817fdfd4u);
                        wr32(0x817fdfccu, rd32(0x817fdfd8u));
                        wr32(0x817fdfc8u, r6);
                        wr32(0x817fdfd0u, r0);
                        a.r[0] = r31;
                        a.r[1] = 0x817fdfc8u;
                        (void)tc_call(0x8015811cu, &a);
                    }
                }
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
        r31 = r31 + 0x54u;
    } while ((s32)r29 < 4);
    return;
}
