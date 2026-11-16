#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80056604(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80572344u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    r0 = rd32((u32)param_1 + 0x194u);
    c0lt = (s32)r0 < 5;
    if (r0 == 5u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = (u32)param_1 + 0x1a8u;
        (void)tc_call(0x80056348u, &a);
    } else if (!c0lt) {
        c0lt = (s32)r0 < 7;
        if (r0 == 7u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfe4u;
            a.r[2] = (u32)param_1 + 0x1a8u;
            a.r[3] = (u32)param_1 + 0x19cu;
            a.r[4] = 0u;
            (void)tc_call(0x800555ecu, &a);
        } else if (c0lt) {
            wrf32d(0x817fdfe4u, (f64)rdf32((u32)param_1 + 0x134u));
            wrf32d(0x817fdfe8u, (f64)rdf32((u32)param_1 + 0x138u));
            wrf32d(0x817fdfecu, (f64)rdf32((u32)param_1 + 0x13cu));
            f1 = (f64)rdf32((u32)param_1 + 0x144u);
            f0 = (f64)rdf32((u32)param_1 + 0x148u);
            wrf32d((u32)param_1 + 0x1a8u, (f64)rdf32((u32)param_1 + 0x140u));
            wrf32d((u32)param_1 + 0x1acu, f1);
            wrf32d((u32)param_1 + 0x1b0u, f0);
        }
    } else if ((s32)r0 >= 4) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = (u32)param_1 + 0x1a8u;
        a.r[3] = (u32)param_1 + 0x19cu;
        (void)tc_call(0x800560d4u, &a);
    } else if ((s32)r0 >= 0) {
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfbcu;
        a.r[3] = 0x817fdfb8u;
        r3 = tc_call(0x8008b844u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r29 = r3;
        if (rd32((u32)param_1 + 0x224u) == 0u || r3 == 0u) {
            wr32((u32)param_1 + 0x238u, 0xffffffffu);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfe4u;
            a.r[2] = (u32)param_1 + 0x1a8u;
            a.r[3] = (u32)param_1 + 0x19cu;
            a.r[4] = 0u;
            (void)tc_call(0x80055e28u, &a);
        } else {
            if (rd32(0x817fdfb8u) != 1u) {
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfd8u, rd32(r3));
                wr32(0x817fdfdcu, r0);
                wr32(0x817fdfe0u, rd32(r3 + 8u));
                a.r[0] = 0x817fdfd8u;
                a.r[1] = r29;
                a.r[2] = 0x817fdfd8u;
                (void)tc_call(0x802343a4u, &a);
                wrf32d(0x817fdfdcu, (f64)rdf32(0x80572344u));
                a.r[0] = 0x817fdfd8u;
                f1 = tc_callf(0x80234440u, &a);
                f6 = (f64)(f32)px_fdiv(f1, (f64)rdf32(r29 + 0xcu));
                f5 = (f64)rdf32(r29 + 0x14u);
                f4 = (f64)rdf32((u32)param_1 + 0x1d0u);
                f0 = (f64)rdf32((u32)param_1 + 0x1d4u);
                f2 = (f64)(f32)((f64)rdf32(0x80572358u) - f6);
                wrf32d((u32)param_1 + 0x230u, ppc_fmadds(f6, (f64)(f32)((f64)rdf32((u32)param_1 + 0x1d8u) - f5), f5));
                f3 = (f64)rdf32(r29 + 0x18u);
                wrf32d((u32)param_1 + 0x228u, ppc_fmadds(f6, (f64)(f32)(f4 - f3), f3));
                f1 = (f64)(f32)((f64)rdf32(r29 + 0x10u) * f2);
                wrf32d((u32)param_1 + 0x22cu, f0);
                wrf32d((u32)param_1 + 0x234u, f1);
            }
            wr32((u32)param_1 + 0x238u, rd32(0x817fdfbcu));
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfe4u;
            a.r[2] = (u32)param_1 + 0x1a8u;
            a.r[3] = (u32)param_1 + 0x19cu;
            (void)tc_call(0x80055b70u, &a);
        }
    }
    r0 = rd32((u32)param_1 + 0x204u);
    wrf32d((u32)param_1 + 0x134u, (f64)rdf32(0x817fdfe4u));
    f2 = (f64)rdf32((u32)param_1 + 0x1a8u);
    f1 = (f64)rdf32((u32)param_1 + 0x1acu);
    wrf32d((u32)param_1 + 0x138u, (f64)rdf32(0x817fdfe8u));
    f0 = (f64)rdf32((u32)param_1 + 0x1b0u);
    wrf32d((u32)param_1 + 0x13cu, (f64)rdf32(0x817fdfecu));
    wrf32d((u32)param_1 + 0x140u, f2);
    wrf32d((u32)param_1 + 0x144u, f1);
    wrf32d((u32)param_1 + 0x148u, f0);
    if (r0 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80056960u, &a);
    }
    if (rd32((u32)param_1 + 0x23cu) != 0u) {
        r29 = 0u;
        a.r[0] = (u32)param_1 + 0x240u;
        f1 = tc_callf(0x80234428u, &a);
        if (f1 > (f64)rdf32(0x80572358u)) {
            r3 = (u32)param_1 + 0x240u;
            a.f[0] = (f64)rdf32(0x80572384u);
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x802343c8u, &a);
            r0 = rd32((u32)param_1 + 0x244u);
            wr32(0x817fdfccu, rd32((u32)param_1 + 0x240u));
            wr32(0x817fdfd0u, r0);
            wr32(0x817fdfd4u, rd32((u32)param_1 + 0x248u));
            a.r[0] = 0x817fdfccu;
            a.r[1] = (u32)param_1 + 0x134u;
            a.r[2] = 0x817fdfccu;
            (void)tc_call(0x80234380u, &a);
            r29 = 1u;
            wrf32d((u32)param_1 + 0x134u, (f64)rdf32(0x817fdfccu));
            wrf32d((u32)param_1 + 0x138u, (f64)rdf32(0x817fdfd0u));
            wrf32d((u32)param_1 + 0x13cu, (f64)rdf32(0x817fdfd4u));
        }
        a.r[0] = (u32)param_1 + 0x24cu;
        f1 = tc_callf(0x80234428u, &a);
        if (f1 > (f64)rdf32(0x80572358u)) {
            r3 = (u32)param_1 + 0x24cu;
            a.f[0] = (f64)rdf32(0x80572384u);
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x802343c8u, &a);
            r0 = rd32((u32)param_1 + 0x250u);
            wr32(0x817fdfc0u, rd32((u32)param_1 + 0x24cu));
            wr32(0x817fdfc4u, r0);
            wr32(0x817fdfc8u, rd32((u32)param_1 + 0x254u));
            a.r[0] = 0x817fdfc0u;
            a.r[1] = (u32)param_1 + 0x140u;
            a.r[2] = 0x817fdfc0u;
            (void)tc_call(0x80234380u, &a);
            r29 = 1u;
            wrf32d((u32)param_1 + 0x140u, (f64)rdf32(0x817fdfc0u));
            wrf32d((u32)param_1 + 0x144u, (f64)rdf32(0x817fdfc4u));
            wrf32d((u32)param_1 + 0x148u, (f64)rdf32(0x817fdfc8u));
        }
        if (r29 == 0u) {
            wr32((u32)param_1 + 0x23cu, 0u);
        }
    }
    return;
}
