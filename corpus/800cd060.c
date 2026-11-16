#include "tc_rt.h"

static void px_rec(u32 sp_, u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r1 = 0, r3 = 0, r4 = 0, r11 = 0, r26 = 0, r30 = 0, r31 = 0, t0 = 0, t1 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x90u, sp_);
    r1 = sp_ - 0x90u;
    wr32(r1 + 0x94u, 0x817ff000u);
    wrf64(r1 + 0x80u, 0.0);
    t0 = r1 + 0x88u;
    wrf32d(t0, 0.0);
    wrf32d(t0 + 4u, 0.0);
    wrf64(r1 + 0x70u, 0.0);
    t1 = r1 + 0x78u;
    wrf32d(t1, 0.0);
    wrf32d(t1 + 4u, 0.0);
    r11 = r1 + 0x70u;
    wr32(r11 - 0x1cu, 0u);
    wr32(r11 - 0x18u, 0u);
    wr32(r11 - 0x14u, 0u);
    wr32(r11 - 0x10u, 0u);
    wr32(r11 - 0xcu, 0u);
    wr32(r11 - 8u, 0u);
    wr32(r11 - 4u, 0u);
    r26 = param_2;
    a.r[0] = param_1;
    (void)tc_call(0x800cb948u, &a);
    f0 = (f64)rdf32(0x80572f78u);
    wrf32d(r1 + 0x18u, f0);
    wrf32d(r1 + 0x14u, f0);
    if (param_4 != 0u) {
        wrf32d(r1 + 0x18u, (f64)rdf32(param_4));
    }
    if (param_5 != 0u) {
        wrf32d(r1 + 0x14u, (f64)rdf32(param_5));
    }
    r30 = 0u;
    while (r30 < param_3) {
        r4 = (u32)rd16(r26);
        if (r4 == 0u || r4 == 0xau) break;
        r31 = 0u;
        a.r[0] = param_1;
        a.r[1] = r4;
        r3 = tc_call(0x800ccaf4u, &a);
        if (r3 != 0u) {
            r3 = tc_call(0x800ccf94u, &a);
            a.r[0] = r26;
            a.r[1] = r3;
            r3 = tc_call(0x8025e8ecu, &a);
            if (r3 != 0u) {
                r31 = 1u;
            }
        }
        if (r31 == 0u) {
            a.r[0] = param_1;
            a.r[1] = (u32)rd16(r26);
            f1 = tc_callf(0x800cca68u, &a);
            f31 = f1;
            f30 = (f64)rdf32(param_1 + 0xcu);
            a.r[0] = param_1;
            f1 = tc_callf(0x800cd534u, &a);
            f1 = (f64)(f32)(f30 + f1);
            f0 = (f64)(f32)((f64)rdf32(r1 + 0x18u) + f31);
            if (f0 > f1) break;
            wrf32d(r1 + 0x18u, f0);
            r26 = r26 + 2u;
            r30 = r30 + 1u;
        } else {
            a.r[0] = param_1;
            a.r[1] = r1 + 0x20u;
            (void)tc_call(0x800cc61cu, &a);
            a.r[0] = param_1;
            a.r[1] = r26;
            a.r[2] = r1 + 0x10u;
            a.r[3] = r1 + 0xcu;
            a.r[4] = r1 + 8u;
            r3 = tc_call(0x800ccb48u, &a);
            if (r3 != 0u) {
                px_rec(r1, param_1, rd32(r1 + 0x10u), rd32(r1 + 0xcu), r1 + 0x18u, r1 + 0x14u);
                f0 = (f64)rdf32(param_1 + 0x30u);
                f1 = (f64)rdf32(r1 + 0x14u);
                if (!(f1 > f0)) {
                    f1 = f0;
                }
                wrf32d(r1 + 0x14u, f1);
                a.r[0] = param_1;
                a.r[1] = r1 + 0x20u;
                (void)tc_call(0x800cc6a0u, &a);
                r3 = rd32(r1 + 8u);
                r30 = r30 + r3;
                r26 = r26 + ((r3 << 1u) & 0xfffffffeu);
            } else {
                r26 = r26 + 2u;
            }
        }
    }
    if (param_4 != 0u) {
        wrf32d(param_4, (f64)rdf32(r1 + 0x18u));
    }
    if (param_5 != 0u) {
        wrf32d(param_5, (f64)rdf32(r1 + 0x14u));
    }
    return;
}

void fn_800cd060(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    px_rec(0x817fe000u, param_1, param_2, param_3, param_4, param_5);
}
