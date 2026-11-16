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

void fn_8003d8b4(f64 param_1, f64 param_2, f64 param_3, f64 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    f5 = (f64)rdf32(0x80571fb0u);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)(f32)(f5 * param_1);
    f1 = (f64)(f32)(f5 * param_3);
    wr32(0x817fdffcu, 0u);
    f2 = (f64)(f32)(f5 * param_2);
    f3 = px_ctiw(f0, ppc_fctiwz(f0));
    f0 = (f64)(f32)(f5 * param_4);
    f2 = px_ctiw(f2, ppc_fctiwz(f2));
    r3 = ((u32)param_5 * 0x60u) - 0x7fc41d08u;
    wrf64(0x817fdfd0u, f3);
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r0 = rd32(0x817fdfd4u);
    wrf64(0x817fdfd8u, f2);
    wrf64(0x817fdfe0u, f1);
    r5 = rd32(0x817fdfdcu);
    wrf64(0x817fdfe8u, f0);
    r6 = rd32(0x817fdfe4u);
    r7 = rd32(0x817fdfecu);
    if ((s32)r0 < 0) {
        r0 = 0u;
    } else {
        if ((s32)r0 > 255) {
            r0 = 0xffu;
        }
    }
    if ((s32)r5 < 0) {
        r5 = 0u;
    } else {
        if ((s32)r5 > 255) {
            r5 = 0xffu;
        }
    }
    if ((s32)r6 < 0) {
        r6 = 0u;
    } else {
        if ((s32)r6 > 255) {
            r6 = 0xffu;
        }
    }
    if ((s32)r7 < 0) {
        r7 = 0u;
    } else {
        if ((s32)r7 > 255) {
            r7 = 0xffu;
        }
    }
    wr8(0x817fdfc8u, (u8)r0);
    r3 = r3 + 8u;
    wr8(0x817fdfc9u, (u8)r5);
    wr8(0x817fdfcau, (u8)r6);
    wr8(0x817fdfcbu, (u8)r7);
    wr32(0x817fdfccu, rd32(0x817fdfc8u));
    a.r[0] = r3;
    a.r[1] = 0x817fdfccu;
    (void)tc_call(0x80251c58u, &a);
    wr32(0x803be5fcu, rd32(0x803be5fcu) | ((((u32)param_5 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_5 & 0x1fu))));
    return;
}
