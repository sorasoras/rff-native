#include "tc_rt.h"

void fn_80300c84(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r7 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    u32 r27 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u);
    TcArgs a = {0};
    (void)param_4;
    r7 = param_5;
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
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
    if ((param_5 & 1u) != 0u) {
        wrf32d(param_6, (f64)rdf32(0x8057774cu));
    }
    if ((param_5 & 8u) != 0u) {
        wr32(param_6 + 0x18u, 0u - rd32(param_2 + 0x1cu));
    }
    if (rd32(param_2 + 0xcu) != 1u) {
        r7 = param_5 & 0xffffffe9u;
    }
    r25 = r7 & 9u;
    r27 = rd32(param_2 + 0x10u);
    r18 = param_2 + 0x10u;
    r24 = r7 & 1u;
    r23 = r7 & 8u;
    r22 = r7 & 6u;
    r21 = r7 & 2u;
    r20 = r7 & 4u;
    r19 = r7 & 0x10u;
    while (r27 != r18) {
        r26 = r27 - 0x5cu;
        if (r25 != 0u) {
            a.r[0] = param_2;
            a.r[1] = r26;
            a.r[2] = param_3;
            a.r[3] = 0x817fdfb8u;
            a.r[4] = 0x817fdfb4u;
            r3 = tc_call(0x8030022cu, &a);
            f1 = tc_lastf();
            if (r24 != 0u) {
                f1 = (f64)rdf32(param_6);
                f0 = (f64)rdf32(0x817fdfb8u);
                if (!(f0 < f1)) {
                    f1 = f0;
                }
                wrf32d(param_6, f1);
            }
            if (r23 != 0u) {
                r3 = rd32(0x817fdfb4u);
                r0 = rd32(param_6 + 0x18u);
                if ((s32)r3 < (s32)r0) {
                    r3 = r0;
                }
                wr32(param_6 + 0x18u, r3);
            }
        }
        if (r22 != 0u) {
            a.r[0] = param_2;
            a.r[1] = r26;
            a.r[2] = param_3;
            a.r[3] = param_1 + 4u;
            a.r[4] = 0x817fdfb0u;
            a.r[5] = 0x817fdfacu;
            r3 = tc_call(0x8030036cu, &a);
            f1 = tc_lastf();
            if (r21 != 0u) {
                wrf32d(param_6 + 8u, (f64)rdf32(0x817fdfb0u));
            }
            if (r20 != 0u) {
                wrf32d(param_6 + 0xcu, (f64)rdf32(0x817fdfacu));
            }
        }
        if (r19 != 0u) {
            a.r[0] = param_2;
            a.r[1] = r26;
            a.r[2] = param_3;
            a.r[3] = 0x817fdfa8u;
            r3 = tc_call(0x803004d0u, &a);
            f1 = tc_lastf();
            wrf32d(param_6 + 4u, (f64)rdf32(0x817fdfa8u));
        }
        r27 = rd32(r27);
    }
    return;
}
