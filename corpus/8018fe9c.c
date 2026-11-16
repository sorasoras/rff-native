#include "tc_rt.h"

void fn_8018fe9c(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r23 = 0, r24 = 0, r26 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    r24 = param_r3 + 4u;
    r23 = 1u;
    do {
        a.r[0] = param_r3;
        a.r[1] = rd32(r24 + 4u);
        r3 = tc_call(0x80190000u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r26 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r4 = tc_lastr4();
            f1 = (f64)rdf32(r3 + 4u);
            if (!(f1 < (f64)rdf32(param_r3 + 0x504u))) {
                wr32(r24 + 0xb8u, 0u);
            } else {
                r0 = rd32(r24 + 0xb8u) - 1u;
                wr32(r24 + 0xb8u, r0);
                if ((s32)r0 <= 0) {
                    a.r[0] = r26;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r26) + 0x28u), &a);
                    r4 = rd32(r3 + 4u);
                    r0 = rd32(0x8035629cu);
                    wr32(0x817fdfc8u, rd32(r3));
                    wr32(0x817fdfccu, r4);
                    wr32(0x817fdfd0u, rd32(r3 + 8u));
                    if (r0 == 0u) {
                        a.f[0] = (f64)rdf32(0x80575340u);
                        a.r[0] = 0x4cu;
                        a.r[1] = 0x817fdfc8u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d783cu, &a);
                        r26 = r3;
                    } else {
                        a.f[0] = (f64)rdf32(0x80575340u);
                        a.r[0] = 0x4cu;
                        a.r[1] = 0x817fdfc8u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d7768u, &a);
                        r26 = r3;
                    }
                    if (r3 != 0u) {
                        r3 = r3;
                        a.r[0] = r3;
                        a.r[1] = 0x1eu;
                        (void)tc_call(0x80157f28u, &a);
                        a.r[1] = 0xffffffffu;
                        r3 = tc_call(0x8010b43cu, &a);
                        wr32(r26 + 0x20u, r3);
                        wr32(r26 + 0x24u, 0u);
                    }
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 0x113cu;
                    a.r[2] = 0x817fdfc8u;
                    (void)tc_call(0x8010a754u, &a);
                    wr32(r24 + 0xb8u, 0xfu);
                }
            }
        }
        r23 = r23 + 1u;
        r24 = r24 + 4u;
    } while ((s32)r23 < 4);
    return;
}
