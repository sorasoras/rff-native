#include "tc_rt.h"

void fn_8009183c(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r25 = param_r3;
    a.r[0] = param_r4;
    r3 = tc_call(0x800bf01cu, &a);
    f31 = (f64)rdf32(0x8057296cu);
    r29 = r3;
    r27 = 0u;
    r28 = 0u;
    while (r27 < rd32(r29)) {
        r26 = rd32(r29 + 4u) + r28;
        f2 = (f64)rdf32(r26 + 0x10u);
        f1 = (f64)rdf32(r26 + 0xcu);
        wrf32d(0x817fdfb8u, (f64)rdf32(r26 + 8u));
        wrf32d(0x817fdfbcu, f1);
        wrf32d(0x817fdfc0u, f2);
        r3 = tc_call(0x8009000cu, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x30u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x30u;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x30u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
        if (r3 != 0u) {
            wrf32d(r3 + 0x20u, f31);
            wrf32d(r3 + 0x1cu, f31);
            wrf32d(r3 + 0x18u, f31);
            wrf32d(r3 + 0x2cu, f31);
            wrf32d(r3 + 0x28u, f31);
            wrf32d(r3 + 0x24u, f31);
        }
        wr32(r25 + 0xbf8u, r3);
        a.r[0] = 0x80492800u;
        a.r[1] = rd32(r26);
        a.r[2] = r27;
        r3 = tc_call(0x8017b190u, &a);
        a.r[0] = rd32(r25 + 0xbf8u);
        a.r[1] = r3;
        a.r[2] = rd32(r26 + 0x14u);
        a.r[3] = rd32(r26 + 0x18u);
        a.r[4] = 0x817fdfb8u;
        a.r[5] = rd32(r26 + 0x1cu);
        (void)tc_call(0x8008fd20u, &a);
        r3 = rd32(r25 + 0xbf8u);
        r28 = r28 + 0x20u;
        r25 = r25 + 4u;
        r27 = r27 + 1u;
        wr32(r3 + 0xcu, 1u);
    }
    return;
}
