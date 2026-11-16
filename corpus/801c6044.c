#include "tc_rt.h"

u32 fn_801c6044(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((s32)rd32((u32)param_1 + 0xecu) <= 0) {
        f0 = (f64)rdf32(0x80575d50u);
        f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x245fu;
            (void)tc_call(0x8010a75cu, &a);
            a.r[0] = param_2;
            a.r[1] = 0x817fdfe4u;
            (void)tc_call(0x801c3228u, &a);
            f1 = (f64)rdf32(0x80575ce0u);
            r5 = rd32(0x804890f0u);
            r0 = rd32(0x804890f4u);
            wr32(0x817fdfb4u, rd32(0x804890ecu));
            wr32(0x817fdfb8u, r5);
            wr32(0x817fdfbcu, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdfb4u;
            a.r[1] = 0x817fdfb4u;
            f1 = tc_callf(0x802343c8u, &a);
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfc0u, rd32(r3));
            wr32(0x817fdfc4u, r0);
            wr32(0x817fdfc8u, rd32(r3 + 8u));
            a.r[0] = 0x817fdfc0u;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x817fdfc0u;
            (void)tc_call(0x80234380u, &a);
            r8 = rd32(0x817fdfc4u);
            r7 = rd32(0x817fdfc8u);
            r6 = rd32(0x804890ecu);
            r5 = rd32(0x804890f0u);
            r0 = rd32(0x804890f4u);
            wr32(0x817fdfd8u, rd32(0x817fdfc0u));
            f1 = (f64)rdf32(0x80575cf8u);
            wr32(0x817fdfdcu, r8);
            wr32(0x817fdfe0u, r7);
            wr32(0x817fdfa8u, r6);
            wr32(0x817fdfacu, r5);
            wr32(0x817fdfb0u, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdfa8u;
            a.r[1] = 0x817fdfa8u;
            (void)tc_call(0x802343c8u, &a);
            r3 = rd32(0x817fdfacu);
            r0 = rd32(0x817fdfb0u);
            wr32(0x817fdfccu, rd32(0x817fdfa8u));
            wr32(0x817fdfd0u, r3);
            wr32(0x817fdfd4u, r0);
            r3 = tc_call(0x801c192cu, &a);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0x817fdfccu;
                (void)tc_call(0x801c1ab8u, &a);
            }
            a.r[0] = 0x804890ecu;
            a.r[1] = 0x817fdfe4u;
            a.r[2] = 0x817fdfccu;
            (void)tc_call(0x80234380u, &a);
            a.r[0] = 0x817fdfccu;
            a.r[1] = 0x817fdfccu;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x80575cf8u);
            a.r[0] = 0x817fdfccu;
            a.r[1] = 0x817fdfccu;
            (void)tc_call(0x802343c8u, &a);
            r3 = tc_call(0x801c192cu, &a);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0x817fdfccu;
                (void)tc_call(0x801c1ab8u, &a);
            }
            a.f[0] = (f64)rdf32(0x80575d44u);
            a.r[0] = 0x817fdfe4u;
            a.r[1] = 0x817fdfe4u;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x804890ecu;
            a.r[1] = 0x817fdfe4u;
            a.r[2] = 0x817fdfccu;
            (void)tc_call(0x80234380u, &a);
            a.r[0] = 0x817fdfccu;
            a.r[1] = 0x817fdfccu;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x80575cf8u);
            a.r[0] = 0x817fdfccu;
            a.r[1] = 0x817fdfccu;
            (void)tc_call(0x802343c8u, &a);
            r3 = tc_call(0x801c192cu, &a);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0x817fdfccu;
                (void)tc_call(0x801c1ab8u, &a);
            }
            wr32((u32)param_1 + 0xecu, rd32((u32)param_1 + 0xecu) + 1u);
        }
    }
    return (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
}
