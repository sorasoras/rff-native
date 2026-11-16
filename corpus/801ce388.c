#include "tc_rt.h"

void fn_801ce388(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    c0lt = param_2 < 2;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 == 2u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        f1 = (f64)rdf32(0x80575e98u);
        wr32(0x817fdfbcu, rd32(r3));
        wr32(0x817fdfc0u, r0);
        wr32(0x817fdfc4u, rd32(r3 + 8u));
        a.f[0] = f1;
        a.r[0] = 0xfau;
        a.r[1] = 0x817fdfbcu;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    } else if (!c0lt) {
        if (param_2 < 4 && rd32(param_1 + 0xeccu) == 0u) {
            f2 = (f64)rdf32(0x80575f30u);
            wrf32d(0x817fdfb0u, (f64)rdf32(0x80575f2cu));
            f0 = (f64)rdf32(0x80575ea8u);
            wrf32d(0x817fdfb4u, f2);
            r8 = rd32(0x817fdfb0u);
            wrf32d(0x817fdfb8u, f0);
            r7 = rd32(0x817fdfb4u);
            r0 = rd32(0x817fdfb8u);
            f1 = (f64)rdf32(0x80575f34u);
            wr32(0x817fdf98u, r8);
            wr32(0x817fdf9cu, r7);
            wr32(0x817fdfa0u, r0);
            a.f[0] = f1;
            a.r[0] = 0x31u;
            a.r[1] = 0x817fdf98u;
            a.r[2] = 0x804890c8u;
            a.r[3] = 0x804b15c0u;
            r3 = tc_call(0x800d7758u, &a);
            wr32(param_1 + 0xeccu, r3);
            if (r3 != 0u) {
                wr32(r3 + 0x20u, 0xdc6u);
                wr32(r3 + 0x24u, 0u);
            }
        }
    } else {
        c0lt = param_2 < 0;
        if ((u32)param_2 == 0u) {
            if (rd32(param_1 + 0xd30u) == 0u) {
                f0 = (f64)rdf32(0x80575ea8u);
                wrf32d(0x817fdfe8u, f0);
                wrf32d(0x817fdfe4u, f0);
                wrf32d(0x817fdfe0u, f0);
                a.r[0] = param_1;
                a.r[1] = rd32(param_1 + 0x70u);
                a.r[2] = 0x38u;
                a.r[3] = 0x817fdfe0u;
                r3 = tc_call(0x801e87c8u, &a);
                if (r3 != 0u) {
                    a.f[0] = (f64)rdf32(0x80575e98u);
                    a.r[0] = rd32(param_1 + 0xd2cu);
                    a.r[1] = 0x817fdfe0u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    r3 = tc_call(0x800d7768u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    wr32(param_1 + 0xd30u, r3);
                    if (r3 != 0u) {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                        f0 = (f64)rdf32(0x80575ea8u);
                        wrf32d(0x817fdfd8u, f1);
                        wrf32d(0x817fdfd4u, f0);
                        r3 = rd32(0x817fdfd8u);
                        wrf32d(0x817fdfdcu, f0);
                        r0 = rd32(0x817fdfdcu);
                        wr32(0x817fdfa4u, rd32(0x817fdfd4u));
                        wr32(0x817fdfa8u, r3);
                        wr32(0x817fdfacu, r0);
                        a.r[0] = rd32(param_1 + 0xd30u);
                        a.r[1] = 0x817fdfa4u;
                        (void)tc_call(0x801582b4u, &a);
                        r4 = rd32(param_1 + 0xd30u);
                        wr32(r4 + 0x20u, 0xfc9u);
                        wr32(r4 + 0x24u, 0u);
                    }
                }
            }
        } else if (!c0lt) {
            f0 = (f64)rdf32(0x80575ea8u);
            r0 = rd32(0x8035653cu);
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfccu, f0);
            wrf32d(0x817fdfc8u, f0);
            if (r0 == 0u) {
                a.f[0] = (f64)rdf32(0x80575e98u);
                a.r[0] = 0xf4u;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d783cu, &a);
                r31 = r3;
            } else {
                a.f[0] = (f64)rdf32(0x80575e98u);
                a.r[0] = 0xf4u;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                r31 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = 0x4bu;
                (void)tc_call(0x80157f70u, &a);
                wr32(r31 + 0x20u, 0xfc9u);
                wr32(r31 + 0x24u, 0u);
            }
        }
    }
    return;
}
