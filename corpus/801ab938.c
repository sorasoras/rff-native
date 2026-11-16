#include "tc_rt.h"

void fn_801ab938(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r5 = rd32(param_r3 + 0x1d8u);
    c0lt = (s32)r5 < 3;
    if (r5 == 3u) {
        r3 = rd32(param_r4 + 0x70u);
        f0 = (f64)rdf32(0x80575ab8u);
        f1 = (f64)rdf32(r3 + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            a.r[0] = r3;
            a.r[1] = rd32(0x80570924u);
            r3 = tc_call(0x80031be0u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                r4 = rd32(r3 + 0x50u);
                r3 = rd32(0x804863d8u);
                wrf32d(0x817fdfc4u, (f64)rdf32(r4 + 0xcu));
                wrf32d(0x817fdfc8u, (f64)rdf32(r4 + 0x1cu));
                wrf32d(0x817fdfccu, (f64)rdf32(r4 + 0x2cu));
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfb8u, rd32(r3));
                wr32(0x817fdfbcu, r0);
                wr32(0x817fdfc0u, rd32(r3 + 8u));
                a.r[0] = param_r4;
                a.r[1] = 0x817fdfc4u;
                a.r[2] = 0x817fdfb8u;
                a.r[3] = 0x804dc8b0u;
                f1 = tc_callf(0x801c3338u, &a);
                if (f1 > (f64)rdf32(0x80575a50u)) {
                    f0 = (f64)rdf32(0x80575abcu);
                    if ((f0 > f1) || (f0 == f1)) {
                        wrf32d(param_r3 + 0x1d4u, f1);
                    }
                }
            }
            wr32(param_r3 + 0x1d8u, rd32(param_r3 + 0x1d8u) + 1u);
        }
    } else if (!c0lt) {
        c0lt = (s32)r5 < 5;
        if (r5 == 5u) {
            f0 = (f64)rdf32(0x80575ac4u);
            f1 = (f64)rdf32(rd32(param_r4 + 0x70u) + 0x54u);
            if ((f1 > f0) || (f1 == f0)) {
                r29 = param_r3;
                r28 = param_r3 + 8u;
                r27 = 0u;
                do {
                    if (rd32(r29 + 0x50u) != 0u) {
                        a.r[0] = r28;
                        (void)tc_call(0x80070068u, &a);
                    }
                    r27 = r27 + 1u;
                    r28 = r28 + 0xe8u;
                    r29 = r29 + 0xe8u;
                } while ((s32)r27 < 2);
                wr32(param_r3 + 0x1d8u, rd32(param_r3 + 0x1d8u) + 1u);
            }
        } else if (c0lt) {
            f0 = (f64)rdf32(0x80575ac0u);
            f1 = (f64)rdf32(rd32(param_r4 + 0x70u) + 0x54u);
            if ((f1 > f0) || (f1 == f0)) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x245au;
                (void)tc_call(0x8010a75cu, &a);
                wr32(param_r3 + 0x1d8u, rd32(param_r3 + 0x1d8u) + 1u);
            }
        }
    } else {
        c0lt = (s32)r5 < 1;
        if (r5 == 1u) {
            r3 = rd32(param_r4 + 0x70u);
            f0 = (f64)rdf32(0x80575aacu);
            f1 = (f64)rdf32(r3 + 0x54u);
            if ((f1 > f0) || (f1 == f0)) {
                a.r[0] = r3;
                a.r[1] = rd32(0x80570920u);
                r3 = tc_call(0x80031be0u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    r4 = rd32(r3 + 0x50u);
                    r3 = rd32(0x804863d8u);
                    wrf32d(0x817fdfdcu, (f64)rdf32(r4 + 0xcu));
                    wrf32d(0x817fdfe0u, (f64)rdf32(r4 + 0x1cu));
                    wrf32d(0x817fdfe4u, (f64)rdf32(r4 + 0x2cu));
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdfd0u, rd32(r3));
                    wr32(0x817fdfd4u, r0);
                    wr32(0x817fdfd8u, rd32(r3 + 8u));
                    a.r[0] = param_r4;
                    a.r[1] = 0x817fdfdcu;
                    a.r[2] = 0x817fdfd0u;
                    a.r[3] = 0x804dc8b0u;
                    f1 = tc_callf(0x801c3338u, &a);
                    if (f1 < (f64)rdf32(0x80575a50u)) {
                        f0 = (f64)rdf32(0x80575ab0u);
                        if ((f0 < f1) || (f0 == f1)) {
                            wrf32d(param_r3 + 0xecu, f1);
                        }
                    }
                }
                wr32(param_r3 + 0x1d8u, rd32(param_r3 + 0x1d8u) + 1u);
            }
        } else if (!c0lt) {
            f0 = (f64)rdf32(0x80575ab4u);
            f1 = (f64)rdf32(rd32(param_r4 + 0x70u) + 0x54u);
            if ((f1 > f0) || (f1 == f0)) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x245au;
                (void)tc_call(0x8010a75cu, &a);
                wr32(param_r3 + 0x1d8u, rd32(param_r3 + 0x1d8u) + 1u);
            }
        } else if ((s32)r5 >= 0) {
            f0 = (f64)rdf32(0x80575aa8u);
            f1 = (f64)rdf32(rd32(param_r4 + 0x70u) + 0x54u);
            if ((f1 > f0) || (f1 == f0)) {
                wr32(param_r3 + 0x1d8u, r5 + 1u);
            }
        }
    }
    return;
}
