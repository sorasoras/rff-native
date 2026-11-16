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

void fn_800add64(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (param_2 >= 0) {
        r0 = ((u32)param_2 << 2u) & 0xfffffffcu;
        r8 = r0 - 0x7fcc9ad0u;
        r7 = (u32)rd8(r0 - 0x7fcc9ad0u);
        r6 = (u32)rd8(r8 + 1u);
        r5 = (u32)rd8(r8 + 2u);
        r0 = (u32)rd8(r8 + 3u);
        wr8(0x817fdfb8u, (u8)r7);
        wr8(0x817fdfb9u, (u8)r6);
        wr8(0x817fdfbau, (u8)r5);
        wr8(0x817fdfbbu, (u8)r0);
        a.r[0] = (u32)param_1 + 0x1cu;
        a.r[1] = 0x817fdfb8u;
        (void)tc_call(0x800adba0u, &a);
        a.r[0] = param_4;
        a.r[1] = 0u;
        a.r[2] = 0xffu;
        r3 = tc_call(0x800adf14u, &a);
        r3 = r3 & 0xffu;
        wr32(0x817fdfe4u, r3);
        f1 = rdf64(0x80572be8u);
        wr32(0x817fdfe0u, 0x43300000u);
        wrf32d((u32)param_1 + 0x28u, (f64)(f32)(rdf64(0x817fdfe0u) - f1));
    } else {
        wrf32d((u32)param_1 + 0x28u, (f64)rdf32(0x80572bc0u));
    }
    f3 = (f64)rdf32(0x80572bc0u);
    if (f3 == (f64)rdf32((u32)param_1 + 0x18u)) {
        f1 = (f64)rdf32((u32)param_1 + 0x20u);
        f0 = (f64)rdf32((u32)param_1 + 0x24u);
        wrf32d((u32)param_1 + 0xcu, (f64)rdf32((u32)param_1 + 0x1cu));
        wrf32d((u32)param_1 + 0x10u, f1);
        wrf32d((u32)param_1 + 0x14u, f0);
        wrf32d((u32)param_1 + 0x18u, f3);
    }
    f1 = (f64)rdf32(0x80571118u);
    f0 = (f64)rdf32(0x80572bd4u);
    wr32(0x817fdfe4u, param_3 ^ 0x80000000u);
    f0 = (f64)(f32)px_fdiv(f0, f1);
    f2 = rdf64(0x80572bd8u);
    wr32(0x817fdfe0u, 0x43300000u);
    f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfe0u) - f2), f0);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfe8u, f0);
    r31 = rd32(0x817fdfecu);
    wr32((u32)param_1 + 0x3cu, r31);
    if (r31 == 0u) {
        a.r[0] = (u32)param_1 + 0x2cu;
        (void)tc_call(0x800ada04u, &a);
        f2 = (f64)rdf32((u32)param_1 + 0x20u);
        f1 = (f64)rdf32((u32)param_1 + 0x24u);
        f0 = (f64)rdf32((u32)param_1 + 0x28u);
        wrf32d((u32)param_1 + 0xcu, (f64)rdf32((u32)param_1 + 0x1cu));
        wrf32d((u32)param_1 + 0x10u, f2);
        wrf32d((u32)param_1 + 0x14u, f1);
        wrf32d((u32)param_1 + 0x18u, f0);
    } else {
        a.r[0] = 0x817fdfc0u;
        a.r[1] = (u32)param_1 + 0x1cu;
        a.r[2] = (u32)param_1 + 0xcu;
        (void)tc_call(0x800adaa0u, &a);
        wr32(0x817fdfe8u, 0x43300000u);
        f1 = rdf64(0x80572bd8u);
        wr32(0x817fdfecu, r31 ^ 0x80000000u);
        f1 = (f64)(f32)(rdf64(0x817fdfe8u) - f1);
        a.f[0] = f1;
        a.r[0] = 0x817fdfd0u;
        a.r[1] = 0x817fdfc0u;
        (void)tc_call(0x800adb24u, &a);
        wrf32d((u32)param_1 + 0x2cu, (f64)rdf32(0x817fdfd0u));
        wrf32d((u32)param_1 + 0x30u, (f64)rdf32(0x817fdfd4u));
        wrf32d((u32)param_1 + 0x34u, (f64)rdf32(0x817fdfd8u));
        wrf32d((u32)param_1 + 0x38u, (f64)rdf32(0x817fdfdcu));
    }
    return;
}
