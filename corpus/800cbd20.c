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

void fn_800cbd20(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = (u32)param_1 + 0x890u;
    a.r[1] = 0x400u;
    a.r[2] = param_2;
    a.r[3] = param_3;
    f1 = tc_callf(0x8025e71cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x890u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0x10a4u) + 8u), &a);
    r30 = r3;
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x800cd5c0u, &a);
    r3 = (u32)rd8((u32)param_1 + 0x52u);
    r31 = (u32)(s8)r3;
    if ((r3 & 1u) != 0u) {
        f0 = (f64)rdf32((u32)param_1 + 0x30u);
        f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x60u) * f0);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x5cu) * f0);
        wr8(0x817fdfdcu, rd8((u32)param_1 + 0x2cu));
        wr8(0x817fdfddu, rd8((u32)param_1 + 0x2du));
        wr8(0x817fdfdeu, rd8((u32)param_1 + 0x2eu));
        wr8(0x817fdfdfu, rd8((u32)param_1 + 0x2fu));
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x30u) * (f64)rdf32((u32)param_1 + 0x54u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfe0u, f0);
        a.f[0] = f1;
        a.f[1] = f2;
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = rd32(0x817fdfe4u);
        a.r[3] = 0x817fdfdcu;
        (void)tc_call(0x800cb9a8u, &a);
    }
    if ((r31 & 2u) != 0u) {
        f1 = (f64)rdf32(0x80572f78u);
        wr8(0x817fdfd8u, rd8((u32)param_1 + 0x28u));
        wr8(0x817fdfd9u, rd8((u32)param_1 + 0x29u));
        wr8(0x817fdfdau, rd8((u32)param_1 + 0x2au));
        wr8(0x817fdfdbu, rd8((u32)param_1 + 0x2bu));
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x30u) * (f64)rdf32((u32)param_1 + 0x58u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfe0u, f0);
        a.f[0] = f1;
        a.f[1] = f1;
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = rd32(0x817fdfe4u);
        a.r[3] = 0x817fdfd8u;
        (void)tc_call(0x800cb9a8u, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x800cd5c0u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r30;
    a.r[2] = 1u;
    a.r[3] = 0u;
    (void)tc_call(0x800cbe84u, &a);
    return;
}
