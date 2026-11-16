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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_801e3864(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x1bcu);
    a.r[1] = (u32)param_1 + 8u;
    (void)tc_call(0x801dc4b4u, &a);
    r3 = rd32((u32)param_1 + 0x130u);
    if ((s32)r3 >= 0) {
        if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
            r0 = rd32((u32)param_1 + 0xcu);
            wr32(0x817fdfdcu, rd32((u32)param_1 + 8u));
            wr32(0x817fdfe0u, r0);
            wr32(0x817fdfe4u, rd32((u32)param_1 + 0x10u));
            a.f[0] = (f64)rdf32((u32)param_1 + 0x134u);
            a.r[0] = rd32((u32)param_1 + 0x130u);
            a.r[1] = 0x817fdfdcu;
            a.r[2] = 0x804890c8u;
            a.r[3] = 0x804b15c0u;
            r3 = tc_call(0x800d7758u, &a);
            r30 = r3;
        } else {
            a.f[0] = (f64)rdf32((u32)param_1 + 0x134u);
            a.r[0] = r3;
            a.r[1] = (u32)param_1 + 8u;
            a.r[2] = 0x804890c8u;
            a.r[3] = 0x804b15c0u;
            r3 = tc_call(0x800d782cu, &a);
            r30 = r3;
        }
        if (r3 != 0u) {
            if ((f64)rdf32(0x8057622cu) != (f64)rdf32((u32)param_1 + 0x138u)) {
                r3 = tc_call(0x8003c9c8u, &a);
                r3 = r3 ^ 0x80000000u;
                wr32(0x817fdfecu, r3);
                f2 = rdf64(0x80576210u);
                wr32(0x817fdfe8u, 0x43300000u);
                f0 = (f64)(f32)px_fdiv((f64)rdf32((u32)param_1 + 0x138u), (f64)(f32)(rdf64(0x817fdfe8u) - f2));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdff0u, f0);
                a.r[0] = r30;
                a.r[1] = rd32(0x817fdff4u);
                (void)tc_call(0x80157f28u, &a);
            }
            wr32(r30 + 0x20u, 0xffffffffu);
            wr32(r30 + 0x24u, 0u);
            wr32((u32)param_1 + 0x12cu, r30);
        }
    }
    r30 = rd32((u32)param_1 + 0x114u);
    if (r30 != 0u) {
        a.r[0] = r30;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = r30;
            (void)tc_call(0x80157e6cu, &a);
        }
    }
    r3 = rd32((u32)param_1 + 0x114u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x114u);
            (void)tc_call(0x80157f30u, &a);
        }
    }
    r12 = rd32((u32)param_1 + 0x1b4u);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32((u32)param_1 + 0x114u, 0u);
    wr32((u32)param_1 + 0x118u, 0xffffffffu);
    wrf32d((u32)param_1 + 0x11cu, f2);
    wrf32d((u32)param_1 + 0x120u, f1);
    wrf32d((u32)param_1 + 0x124u, f0);
    wr32((u32)param_1 + 0x128u, 0u);
    if (r12 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0x1b8u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        f1 = tc_callf(r12, &a);
        f2 = 0.0;
    }
    if (rd32((u32)param_1 + 0x1a8u) != 0u) {
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x8006ff00u, &a);
        f2 = 0.0;
    }
    r12 = rd32((u32)param_1 + 0x1b0u);
    if (r12 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0x1b8u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        (void)tc_call(r12, &a);
    }
    r3 = rd32((u32)param_1 + 0xe4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0xe4u);
            (void)tc_call(0x80157f30u, &a);
        }
    }
    r3 = rd32((u32)param_1 + 0xfcu);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32((u32)param_1 + 0xe4u, 0u);
    wr32((u32)param_1 + 0xe8u, 0xffffffffu);
    wrf32d((u32)param_1 + 0xecu, f2);
    wrf32d((u32)param_1 + 0xf0u, f1);
    wrf32d((u32)param_1 + 0xf4u, f0);
    wr32((u32)param_1 + 0xf8u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0xfcu);
            (void)tc_call(0x80157f30u, &a);
        }
    }
    r3 = rd32((u32)param_1 + 0x114u);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32((u32)param_1 + 0xfcu, 0u);
    wr32((u32)param_1 + 0x100u, 0xffffffffu);
    wrf32d((u32)param_1 + 0x104u, f2);
    wrf32d((u32)param_1 + 0x108u, f1);
    wrf32d((u32)param_1 + 0x10cu, f0);
    wr32((u32)param_1 + 0x110u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x114u);
            (void)tc_call(0x80157f30u, &a);
        }
    }
    r3 = rd32((u32)param_1 + 0x144u);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32((u32)param_1 + 0x114u, 0u);
    wr32((u32)param_1 + 0x118u, 0xffffffffu);
    wrf32d((u32)param_1 + 0x11cu, f2);
    wrf32d((u32)param_1 + 0x120u, f1);
    wrf32d((u32)param_1 + 0x124u, f0);
    wr32((u32)param_1 + 0x128u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x144u);
            (void)tc_call(0x80157f30u, &a);
        }
    }
    f0 = (f64)rdf32(0x8057621cu);
    f4 = (f64)rdf32(0x80576204u);
    wrf32d((u32)param_1 + 0x14cu, (f64)rdf32(0x80576200u));
    f3 = (f64)rdf32(0x805761f0u);
    wrf32d((u32)param_1 + 0x150u, f0);
    f2 = (f64)rdf32(0x80576220u);
    wr32((u32)param_1 + 0x144u, 0u);
    f1 = (f64)rdf32(0x80576224u);
    wr32((u32)param_1 + 0x148u, 0xffffffffu);
    f0 = (f64)rdf32(0x80576228u);
    wrf32d((u32)param_1 + 0x154u, f4);
    wr32((u32)param_1 + 0x158u, 0u);
    r4 = rd32(0x804890d8u);
    r3 = rd32(0x804890dcu);
    wr32(0x817fdfd0u, rd32(0x804890d4u));
    wr32(0x817fdfd4u, r4);
    f6 = (f64)rdf32(0x817fdfd0u);
    wr32(0x817fdfd8u, r3);
    f5 = (f64)rdf32(0x817fdfd4u);
    f4 = (f64)rdf32(0x817fdfd8u);
    wrf32d((u32)param_1 + 0x174u, f6);
    wrf32d((u32)param_1 + 0x178u, f5);
    wrf32d((u32)param_1 + 0x17cu, f4);
    r4 = rd32(0x804890ccu);
    r3 = rd32(0x804890d0u);
    wr32(0x817fdfc4u, rd32(0x804890c8u));
    wr32(0x817fdfc8u, r4);
    f6 = (f64)rdf32(0x817fdfc4u);
    wr32(0x817fdfccu, r3);
    f5 = (f64)rdf32(0x817fdfc8u);
    f4 = (f64)rdf32(0x817fdfccu);
    wrf32d((u32)param_1 + 0x15cu, f6);
    wrf32d((u32)param_1 + 0x160u, f5);
    wrf32d((u32)param_1 + 0x164u, f4);
    r4 = rd32(0x804890ccu);
    r3 = rd32(0x804890d0u);
    wr32(0x817fdfb8u, rd32(0x804890c8u));
    wr32(0x817fdfbcu, r4);
    f6 = (f64)rdf32(0x817fdfb8u);
    wr32(0x817fdfc0u, r3);
    f5 = (f64)rdf32(0x817fdfbcu);
    f4 = (f64)rdf32(0x817fdfc0u);
    wrf32d((u32)param_1 + 0x168u, f6);
    wrf32d((u32)param_1 + 0x16cu, f5);
    wrf32d((u32)param_1 + 0x170u, f4);
    wr32((u32)param_1 + 0x180u, 0u);
    wrf32d((u32)param_1 + 0x184u, f3);
    wrf32d((u32)param_1 + 0x188u, f3);
    wrf32d((u32)param_1 + 0x18cu, f3);
    wrf32d((u32)param_1 + 0x190u, f2);
    wr32((u32)param_1 + 0x1a4u, 0u);
    wr32((u32)param_1 + 0x1a8u, 1u);
    wrf32d((u32)param_1 + 0x194u, f1);
    wr32((u32)param_1 + 0x1acu, 0u);
    wrf32d((u32)param_1 + 0x20u, f0);
    wr32((u32)param_1 + 0x1a0u, 0u);
    wr32((u32)param_1 + 0x19cu, 0u);
    wr32((u32)param_1 + 0x1b4u, 0u);
    wr32((u32)param_1 + 0x1b0u, 0u);
    wr32((u32)param_1 + 0x1b8u, 0u);
    wr32((u32)param_1 + 0x1bcu, 0xffffffffu);
    wr32((u32)param_1 + 0x1c0u, 0xffffffffu);
    return;
}
