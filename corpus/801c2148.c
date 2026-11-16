#include "tc_rt.h"

void fn_801c2148(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, t1 = 0;
    f64 f1 = 0.0, f3 = 0.0, t3 = 0.0, t5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32(param_1 + 4u) != 0u) {
        r0 = rd32(param_1 + 0x3cu);
        c0lt = (s32)r0 < 1;
        if (r0 != 1u) {
            if (!c0lt) {
                return;
            }
            if ((s32)r0 < 0) {
                return;
            }
            if (rd32(param_1) == 0u) {
                return;
            }
            f1 = (f64)rdf32(0x80575ce0u);
            r5 = rd32(0x804890f0u);
            r0 = rd32(0x804890f4u);
            wr32(0x817fdfc4u, rd32(0x804890ecu));
            wr32(0x817fdfc8u, r5);
            wr32(0x817fdfccu, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdfc4u;
            a.r[1] = 0x817fdfc4u;
            f1 = tc_callf(0x802343c8u, &a);
            r3 = rd32(param_1 + 4u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfe8u, rd32(r3));
            wr32(0x817fdfecu, r0);
            wr32(0x817fdff0u, rd32(r3 + 8u));
            a.r[0] = 0x817fdfe8u;
            a.r[1] = 0x817fdfc4u;
            a.r[2] = 0x817fdfe8u;
            (void)tc_call(0x80234380u, &a);
            t1 = param_1 + 0x2cu;
            t3 = (f64)rdf32(t1 + 4u);
            t5 = (f64)rdf32(param_1 + 0x34u);
            wrf32d(0x817fdfdcu, (f64)rdf32(t1));
            wrf32d(0x817fdfe0u, t3);
            wrf32d(0x817fdfe4u, t5);
            r6 = rd32(0x817fdfecu);
            r0 = rd32(0x817fdff0u);
            wr32(0x817fdfd0u, rd32(0x817fdfe8u));
            wr32(0x817fdfd4u, r6);
            wr32(0x817fdfd8u, r0);
            a.r[0] = 0x817fdfd0u;
            a.r[1] = 0x817fdfdcu;
            a.r[2] = 0x817fdfd0u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdfd0u;
            f1 = tc_callf(0x80234428u, &a);
            if (f1 < (f64)rdf32(0x80575d04u)) {
                if (rd32(param_1 + 0x38u) == 1u) {
                    wr16(0x8049908cu, 0x2710u);
                }
                a.r[0] = param_1;
                (void)tc_call(0x801c2004u, &a);
                r3 = rd32(param_1 + 0x3cu);
                wr32(param_1 + 0x40u, 0x3cu);
                wr32(param_1 + 0x3cu, r3 + 1u);
                return;
            }
            f3 = (f64)rdf32(0x80575cfcu);
            r0 = 0u;
            r3 = 0u;
            if (f3 == (f64)rdf32(0x817fdfd0u) && f3 == (f64)rdf32(0x817fdfd4u)) {
                r3 = 1u;
            }
            if (r3 != 0u && (f64)rdf32(0x80575cfcu) == (f64)rdf32(0x817fdfd8u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdfd0u;
                a.r[1] = 0x817fdfd0u;
                (void)tc_call(0x802343e4u, &a);
            }
            a.f[0] = (f64)rdf32(0x80575d08u);
            a.r[0] = 0x817fdfd0u;
            a.r[1] = 0x817fdfd0u;
            (void)tc_call(0x802343c8u, &a);
            r3 = param_1 + 0x14u;
            a.r[0] = r3;
            a.r[1] = 0x817fdfd0u;
            a.r[2] = r3;
            (void)tc_call(0x80234380u, &a);
            r3 = param_1 + 0x14u;
            a.f[0] = (f64)rdf32(0x80575d00u);
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x817fdfdcu;
            a.r[1] = param_1 + 0x14u;
            a.r[2] = 0x817fdfdcu;
            (void)tc_call(0x80234380u, &a);
            wrf32d(param_1 + 0x2cu, (f64)rdf32(0x817fdfdcu));
            wrf32d(param_1 + 0x30u, (f64)rdf32(0x817fdfe0u));
            wrf32d(param_1 + 0x34u, (f64)rdf32(0x817fdfe4u));
            r3 = rd32(0x817fdfe0u);
            r0 = rd32(0x817fdfe4u);
            wr32(0x817fdfb8u, rd32(0x817fdfdcu));
            wr32(0x817fdfbcu, r3);
            wr32(0x817fdfc0u, r0);
            a.r[0] = rd32(param_1);
            a.r[1] = 0x817fdfb8u;
            (void)tc_call(0x8015811cu, &a);
        } else {
            r0 = rd32(param_1 + 0x40u) - 1u;
            wr32(param_1 + 0x40u, r0);
            if ((s32)r0 <= 0) {
                a.r[0] = param_1;
                (void)tc_call(0x801c2048u, &a);
            }
        }
    }
    return;
}
