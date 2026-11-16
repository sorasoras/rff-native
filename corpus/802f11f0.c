#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802f11f0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = (param_2 << 4u) & 0xfffffff0u;
    r28 = param_1 + r27;
    r6 = rd32(r28 + 0x60u);
    if ((s32)r6 < (s32)rd32(r28 + 0x5cu)) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        (void)tc_call(0x802f1550u, &a);
        r4 = tc_lastr4();
        r6 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
    }
    r5 = rd32(r28 + 0x5cu);
    r0 = rd32(r28 + 0x60u);
    if ((s32)r0 < (s32)r5) {
        r0 = r0 ^ 0x80000000u;
        wr32(0x817fdfd4u, r0);
        r4 = param_1 + r27;
        f4 = rdf64(0x80577540u);
        wr32(0x817fdfd0u, 0x43300000u);
        f0 = (f64)rdf32(r4 + 0x58u);
        f2 = (f64)rdf32(r4 + 0x54u);
        f3 = (f64)(f32)(rdf64(0x817fdfd0u) - f4);
        wr32(0x817fdfdcu, r5 ^ 0x80000000u);
        wr32(0x817fdfd8u, 0x43300000u);
        f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)(f3 * (f64)(f32)(f0 - f2)), (f64)(f32)(rdf64(0x817fdfd8u) - f4)));
    } else {
        f1 = (f64)rdf32(param_1 + r27 + 0x58u);
    }
    r3 = param_1 + r27;
    f0 = (f64)rdf32(0x8057753cu);
    wrf32d(r3 + 0x54u, f1);
    c0lt = (s32)param_2 < 1;
    wrf32d(r3 + 0x58u, f0);
    wr32(r3 + 0x5cu, 0u);
    wr32(r3 + 0x60u, 0u);
    if (param_2 == 1u) {
        a.r[0] = 0x8000u;
        f1 = tc_callf(0x802449f4u, &a);
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
    } else if (!c0lt) {
        if ((s32)param_2 < 3) {
            a.r[0] = 0x8000u;
            f1 = tc_callf(0x802449fcu, &a);
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
        }
    } else if ((s32)param_2 >= 0) {
        a.r[0] = 0x8000u;
        f1 = tc_callf(0x802449ecu, &a);
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
    }
    a.r[0] = param_3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    r3 = tc_call(rd32(rd32(param_3) + 0xcu), &a);
    if (r3 != 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r28 = r3;
        r3 = param_1 + (param_2 * 0xcu);
        r27 = r3 + 0xb4u;
        if (rd32(r3 + 0xb4u) == 0u) {
            c0lt = (s32)param_2 < 1;
            if (param_2 == 1u) {
                a.r[0] = 0x802f1650u;
                a.r[1] = param_2;
                (void)tc_call(0x80243e78u, &a);
            } else if (!c0lt) {
                if ((s32)param_2 < 3) {
                    a.r[0] = 0x802f1650u;
                    a.r[1] = param_2;
                    (void)tc_call(0x80243edcu, &a);
                }
            } else if ((s32)param_2 >= 0) {
                a.r[0] = 0x802f1650u;
                a.r[1] = param_2;
                (void)tc_call(0x80243e14u, &a);
            }
            wr8(param_1 + param_2 + 0xf0u, 2u);
        }
        wr32(0x817fdfc8u, r27 + 4u);
        a.r[0] = r27;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = param_3 + 4u;
        (void)tc_call(0x802deba4u, &a);
        a.r[0] = r28;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
