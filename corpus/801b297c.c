#include "tc_rt.h"

void fn_801b297c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = rd32((u32)param_1 + 0x72cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x72cu, 0u);
    }
    c0lt = param_2 < 2;
    r29 = 0xffffffffu;
    r31 = 0xffffffffu;
    if ((u32)param_2 == 2u) {
        r29 = 0x93u;
    } else if (!c0lt) {
        if (param_2 < 4) {
            r29 = 0x32u;
            r31 = 0x83u;
        }
    } else {
        c0lt = param_2 < 0;
        if ((u32)param_2 != 0u && !c0lt) {
            r29 = 0x94u;
        }
    }
    if (r29 != 0xffffffffu) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b2e30u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r3 = tc_call(0x801b0c80u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r3 = rd32(r3 + 0xbcu);
            if (r3 != 0u) {
                r3 = rd32(r3 + 0x70u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0xdu;
                    r3 = tc_call(0x80031cf8u, &a);
                    f1 = tc_lastf();
                    f0 = (f64)rdf32(0x80575b90u);
                    wrf32d(0x817fdfe0u, f0);
                    r4 = 0x8035616cu;
                    r0 = rd32(((r29 << 2u) & 0xfffffffcu) - 0x7fca9e94u);
                    wrf32d(0x817fdfdcu, f0);
                    wrf32d(0x817fdfd8u, f0);
                    r3 = rd32(r3 + 0x50u);
                    wrf32d(0x817fdfd8u, (f64)rdf32(r3 + 0xcu));
                    wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 0x1cu));
                    wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 0x2cu));
                    if (r0 != 0u) {
                        a.f[0] = (f64)rdf32(0x80575ba0u);
                        a.r[0] = r29;
                        a.r[1] = 0x817fdfd8u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d7768u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        wr32((u32)param_1 + 0x72cu, r3);
                        if (r3 != 0u) {
                            r0 = rd32((u32)param_1 + 0x734u);
                            wr32(0x817fdfb4u, rd32((u32)param_1 + 0x730u));
                            wr32(0x817fdfb8u, r0);
                            wr32(0x817fdfbcu, rd32((u32)param_1 + 0x738u));
                            a.r[0] = rd32((u32)param_1 + 0x72cu);
                            a.r[1] = 0x817fdfb4u;
                            f1 = tc_callf(0x801581ccu, &a);
                            r4 = tc_lastr4();
                        }
                    }
                }
            }
        }
        if (r31 != 0xffffffffu && rd32((u32)param_1 + 0x728u) == 0u) {
            r3 = rd32(0x804863d8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r7 = rd32(r3 + 4u);
            r0 = rd32(0x80471a18u);
            wr32(0x817fdfccu, rd32(r3));
            r0 = r0 * 0x4150u;
            wr32(0x817fdfd0u, r7);
            f1 = (f64)rdf32(0x817fdfccu);
            wr32(0x817fdfd4u, rd32(r3 + 8u));
            a.f[0] = f1;
            a.f[1] = (f64)rdf32(0x817fdfd4u);
            a.r[0] = r0 - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x80089fc8u, &a);
            wrf32d(0x817fdfd0u, f1);
            if (rd32(((r31 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
                a.f[0] = (f64)rdf32(0x80575ba0u);
                a.r[0] = r31;
                a.r[1] = 0x817fdfccu;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                wr32((u32)param_1 + 0x728u, r3);
                (void)tc_call(0x801b0c80u, &a);
                f1 = (f64)rdf32(0x80575b90u);
                f2 = (f64)rdf32(rd32(0x804863d8u) + 0x14u);
                f0 = (f64)rdf32(0x80575bb0u);
                wrf32d(0x817fdfc0u, f1);
                f3 = (f64)(f32)(f2 - f0);
                wrf32d(0x817fdfc4u, f2);
                wrf32d(0x817fdfc8u, f1);
                if (!(f0 < f3)) {
                    f0 = (f64)rdf32(0x80575bb8u);
                    if ((f0 > f3) || (f0 == f3)) {
                        f3 = (f64)(f32)((f64)rdf32(0x80575bb4u) + f3);
                    }
                } else {
                    f3 = (f64)(f32)(f3 - (f64)rdf32(0x80575bb4u));
                }
                wrf32d(0x817fdfc4u, f3);
                r3 = rd32(0x817fdfc4u);
                r0 = rd32(0x817fdfc8u);
                wr32(0x817fdfa8u, rd32(0x817fdfc0u));
                wr32(0x817fdfacu, r3);
                wr32(0x817fdfb0u, r0);
                a.r[0] = rd32((u32)param_1 + 0x728u);
                a.r[1] = 0x817fdfa8u;
                (void)tc_call(0x801582b4u, &a);
            }
        }
    }
    return;
}
