#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8013ceb8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, s32 param_7)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfc8u, 0x43300000u);
    r30 = param_2;
    r31 = param_3;
    wr32(0x817fdfd0u, 0x43300000u);
    r28 = param_6;
    if ((s32)param_3 < 1 || (s32)param_3 > 10) {
        a.r[0] = param_3;
        a.r[1] = 1u;
        a.r[2] = 0xau;
        r3 = tc_call(0x800adf14u, &a);
        r31 = r3;
    }
    if ((s32)param_2 < 1 || (s32)param_2 > 99) {
        a.r[0] = param_2;
        a.r[1] = 1u;
        a.r[2] = 0x63u;
        r3 = tc_call(0x800adf14u, &a);
        r30 = r3;
    }
    if ((param_6 - 0x7fff0000u) == 0xffffu) {
        wr32(0x817fdfccu, param_4 ^ 0x80000000u);
        f2 = rdf64(0x80574408u);
        wr32(0x817fdfd4u, param_5 ^ 0x80000000u);
        f1 = (f64)(f32)(rdf64(0x817fdfc8u) - f2);
        f2 = (f64)(f32)(rdf64(0x817fdfd0u) - f2);
        a.f[0] = f1;
        a.f[1] = f2;
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80089fc8u, &a);
        wrf64(0x817fdfd8u, px_ctiw(f1, ppc_fctiwz(f1)));
        r28 = rd32(0x817fdfdcu);
    }
    wr32(0x817fdfccu, param_4 ^ 0x80000000u);
    f3 = rdf64(0x80574408u);
    f0 = rdf64(0x817fdfc8u);
    wr32(0x817fdfd4u, r28 ^ 0x80000000u);
    f2 = (f64)(f32)(f0 - f3);
    wr32(0x817fdfccu, param_5 ^ 0x80000000u);
    f0 = rdf64(0x817fdfc8u);
    f1 = (f64)(f32)(rdf64(0x817fdfd0u) - f3);
    wrf32d(0x817fdfb8u, f2);
    f0 = (f64)(f32)(f0 - f3);
    wrf32d(0x817fdfbcu, f1);
    wrf32d(0x817fdfc0u, f0);
    if ((u32)param_7 != 0u) {
        r3 = tc_call(0x8006bb94u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xe0u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r28 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0xe0u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0xe0u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r28 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            f1 = tc_callf(0x801a66e4u, &a);
        }
        a.r[0] = r28;
        a.r[1] = param_1;
        a.r[2] = 0x817fdfb8u;
        a.r[3] = 0x804890c8u;
        a.r[4] = r31 & 0xffu;
        a.r[5] = r30 & 0xffu;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        f1 = tc_callf(rd32(rd32(r28) + 0x48u), &a);
        wr32(r28 + 0x7cu, 1u);
        a.r[0] = r28;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        f1 = tc_callf(rd32(rd32(r28) + 0x50u), &a);
        a.r[0] = r28;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(r28) + 0x1cu), &a);
        a.r[0] = r28;
        (void)tc_call(0x801a6adcu, &a);
    } else {
        r3 = tc_call(0x8006bb94u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0xb8u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r28 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0xb8u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0xb8u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r28 = r3;
        }
        if (r3 != 0u) {
            r3 = r3;
            a.r[0] = r3;
            f1 = tc_callf(0x800d5c2cu, &a);
        }
        a.r[0] = r28;
        a.r[1] = param_1;
        a.r[2] = 0x817fdfb8u;
        a.r[3] = 0x804890c8u;
        a.r[4] = r31 & 0xffu;
        a.r[5] = r30 & 0xffu;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        f1 = tc_callf(rd32(rd32(r28) + 0x48u), &a);
        wr32(r28 + 0x7cu, 1u);
        a.r[0] = r28;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        f1 = tc_callf(rd32(rd32(r28) + 0x50u), &a);
        a.r[0] = r28;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(r28) + 0x1cu), &a);
        a.r[0] = rd32(r28 + 0xa4u);
        (void)tc_call(0x800cf688u, &a);
    }
    return;
}
