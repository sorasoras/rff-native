#include "tc_rt.h"

void fn_801d5628(u32 param_1, u32 param_2, s32 param_3, u32 param_4, s32 param_5, s32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    f0 = (f64)rdf32(0x8057600cu);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    r3 = rd32(param_1 + 8u);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = param_4;
    a.r[4] = (u32)param_5;
    a.r[5] = (u32)param_6;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    wrf32d(0x817fdfd8u, (f64)rdf32(r3));
    wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 4u));
    wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 8u));
    if (param_3 < 0) {
        r3 = rd32(param_1 + 8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        wrf32d(0x817fdfd8u, (f64)rdf32(r3));
        wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 4u));
        wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 8u));
    } else {
        a.r[0] = rd32(param_1 + 8u);
        a.r[1] = (u32)param_3;
        r3 = tc_call(0x801d4e14u, &a);
        r3 = rd32(r3 + 0x50u);
        wrf32d(0x817fdfd8u, (f64)rdf32(r3 + 0xcu));
        wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 0x1cu));
        wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 0x2cu));
    }
    a.r[0] = 0x817fdfd8u;
    a.r[1] = param_4;
    a.r[2] = 0x817fdfd8u;
    (void)tc_call(0x80234380u, &a);
    if (rd32(param_1 + 0x10u) != 0u) {
        r3 = rd32(0x817fdfdcu);
        r0 = rd32(0x817fdfe0u);
        wr32(0x817fdfc0u, rd32(0x817fdfd8u));
        wr32(0x817fdfc4u, r3);
        wr32(0x817fdfc8u, r0);
        a.r[0] = rd32(param_1 + 0x10u);
        a.r[1] = 0x817fdfc0u;
        (void)tc_call(0x8015811cu, &a);
        a.r[0] = rd32(param_1 + 0x10u);
        r3 = tc_call(0x80321010u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32(param_1 + 0x10u);
            r3 = tc_call(0x80321010u, &a);
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                r3 = rd32(r3 + 0xcu);
            }
            r0 = 0u;
            if (r3 == 1u || r3 == 2u) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                a.r[0] = rd32(param_1 + 0x10u);
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    return;
                }
            }
        }
        wr32(param_1 + 0x10u, 0u);
    } else {
        r5 = param_1 + 0x14u;
        wr32(param_1 + 0x10u, r5);
        if ((u32)param_5 != 0u) {
            a.r[0] = param_2;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = r5;
            r3 = tc_call(0x800d7908u, &a);
        } else {
            a.r[0] = param_2;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = r5;
            r3 = tc_call(0x800d7900u, &a);
        }
        if (r3 != 0u) {
            r3 = rd32(0x817fdfdcu);
            r0 = rd32(0x817fdfe0u);
            wr32(0x817fdfb4u, rd32(0x817fdfd8u));
            wr32(0x817fdfb8u, r3);
            wr32(0x817fdfbcu, r0);
            a.r[0] = rd32(param_1 + 0x10u);
            a.r[1] = 0x817fdfb4u;
            f1 = tc_callf(0x8015811cu, &a);
            r4 = tc_lastr4();
            f0 = (f64)rdf32(0x8057600cu);
            wrf32d(0x817fdfccu, f0);
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfd4u, f0);
            if ((u32)param_6 != 0u) {
                r3 = rd32(param_1 + 8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                wrf32d(0x817fdfd0u, f1);
            }
            if (rd32(param_1 + 0x10u) != 0u) {
                r3 = rd32(0x817fdfd0u);
                r0 = rd32(0x817fdfd4u);
                wr32(0x817fdfa8u, rd32(0x817fdfccu));
                wr32(0x817fdfacu, r3);
                wr32(0x817fdfb0u, r0);
                a.r[0] = rd32(param_1 + 0x10u);
                a.r[1] = 0x817fdfa8u;
                (void)tc_call(0x801582b4u, &a);
            }
        }
    }
    return;
}
