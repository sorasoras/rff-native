#include "tc_rt.h"

void fn_801b2c18(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32((u32)param_1 + 0x72cu) != 0u) {
        r3 = tc_call(0x801b0c80u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r3 = rd32(r3 + 0xbcu);
        if (r3 != 0u) {
            r3 = rd32(r3 + 0x70u);
            a.r[0] = r3;
            a.r[1] = 0xdu;
            r3 = tc_call(0x80031cf8u, &a);
            f0 = (f64)rdf32(0x80575b90u);
            wrf32d(0x817fdfecu, f0);
            wrf32d(0x817fdfe8u, f0);
            wrf32d(0x817fdfe4u, f0);
            r6 = rd32(r3 + 0x50u);
            wrf32d(0x817fdfe4u, (f64)rdf32(r6 + 0xcu));
            wrf32d(0x817fdfe8u, (f64)rdf32(r6 + 0x1cu));
            wrf32d(0x817fdfecu, (f64)rdf32(r6 + 0x2cu));
            a.r[0] = 0x817fdfe4u;
            a.r[1] = (u32)param_1 + 0x730u;
            a.r[2] = 0x817fdfe4u;
            (void)tc_call(0x80234380u, &a);
            r3 = rd32(0x817fdfe8u);
            r0 = rd32(0x817fdfecu);
            wr32(0x817fdfc0u, rd32(0x817fdfe4u));
            wr32(0x817fdfc4u, r3);
            wr32(0x817fdfc8u, r0);
            a.r[0] = rd32((u32)param_1 + 0x72cu);
            a.r[1] = 0x817fdfc0u;
            f1 = tc_callf(0x8015811cu, &a);
            r4 = tc_lastr4();
        }
    }
    if (rd32((u32)param_1 + 0x728u) != 0u) {
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
        r7 = rd32(r3 + 8u);
        wr32(0x817fdfd8u, rd32(r3));
        r0 = rd32(0x80471a18u);
        wr32(0x817fdfe0u, r7);
        r3 = rd32(r3 + 4u);
        r0 = r0 * 0x4150u;
        f1 = (f64)rdf32(0x817fdfd8u);
        wr32(0x817fdfdcu, r3);
        a.f[0] = f1;
        a.f[1] = (f64)rdf32(0x817fdfe0u);
        a.r[0] = r0 - 0x7fb92738u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80089fc8u, &a);
        wrf32d(0x817fdfdcu, f1);
        r3 = rd32(0x817fdfdcu);
        r0 = rd32(0x817fdfe0u);
        wr32(0x817fdfb4u, rd32(0x817fdfd8u));
        wr32(0x817fdfb8u, r3);
        wr32(0x817fdfbcu, r0);
        a.r[0] = rd32((u32)param_1 + 0x728u);
        a.r[1] = 0x817fdfb4u;
        (void)tc_call(0x8015811cu, &a);
        (void)tc_call(0x801b0c80u, &a);
        f1 = (f64)rdf32(0x80575b90u);
        f2 = (f64)rdf32(rd32(0x804863d8u) + 0x14u);
        f0 = (f64)rdf32(0x80575bb0u);
        wrf32d(0x817fdfccu, f1);
        f3 = (f64)(f32)(f2 - f0);
        wrf32d(0x817fdfd0u, f2);
        wrf32d(0x817fdfd4u, f1);
        if (f0 < f3) {
            f3 = (f64)(f32)(f3 - (f64)rdf32(0x80575bb4u));
        } else {
            f0 = (f64)rdf32(0x80575bb8u);
            if ((f0 > f3) || (f0 == f3)) {
                f3 = (f64)(f32)((f64)rdf32(0x80575bb4u) + f3);
            }
        }
        wrf32d(0x817fdfd0u, f3);
        r3 = rd32(0x817fdfd0u);
        r0 = rd32(0x817fdfd4u);
        wr32(0x817fdfa8u, rd32(0x817fdfccu));
        wr32(0x817fdfacu, r3);
        wr32(0x817fdfb0u, r0);
        a.r[0] = rd32((u32)param_1 + 0x728u);
        a.r[1] = 0x817fdfa8u;
        (void)tc_call(0x801582b4u, &a);
    }
    return;
}
