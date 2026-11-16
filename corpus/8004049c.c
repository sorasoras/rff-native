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

void fn_8004049c(f64 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    if (((u32)rd16((u32)param_2 + 0x14u) & 0x200u) != 0u) {
        r29 = rd32((u32)param_2 + 0x18u);
        r28 = 0u;
        while ((s32)r28 < (s32)(s8)rd8((u32)param_2 + 0x17u)) {
            r3 = rd32(r29 + 4u);
            if (r3 != 0u) {
                r30 = rd32(r3 + 8u);
                if (r30 != 0u) {
                    r4 = rd32(r30 + 0x14u);
                    if (r4 != 0u) {
                        a.r[0] = r30;
                        a.r[1] = r4;
                        a.f[0] = param_1;
                        (void)tc_call(rd32(r4 + 0x14u), &a);
                    }
                    r4 = rd32(r30 + 0x18u);
                    if (r4 != 0u) {
                        a.r[0] = r30 + 4u;
                        a.r[1] = r4;
                        a.f[0] = param_1;
                        (void)tc_call(rd32(r4 + 0x14u), &a);
                    }
                    r4 = rd32(r30 + 0x1cu);
                    if (r4 != 0u) {
                        a.r[0] = r30 + 8u;
                        a.r[1] = r4;
                        a.f[0] = param_1;
                        (void)tc_call(rd32(r4 + 0x14u), &a);
                    }
                    r4 = rd32(r30 + 0x20u);
                    if (r4 != 0u) {
                        a.r[0] = r30 + 0xcu;
                        a.r[1] = r4;
                        a.f[0] = param_1;
                        (void)tc_call(rd32(r4 + 0x14u), &a);
                    }
                    r4 = rd32(r30 + 0x24u);
                    if (r4 != 0u) {
                        a.r[0] = r30 + 0x10u;
                        a.r[1] = r4;
                        a.f[0] = param_1;
                        (void)tc_call(rd32(r4 + 0x14u), &a);
                    }
                }
            }
            r28 = r28 + 1u;
            r29 = r29 + 0x10u;
        }
    }
    if (((u32)rd16((u32)param_2 + 0x14u) & 0x100u) != 0u) {
        r4 = rd32((u32)param_2 + 0x34u);
        if (r4 != 0u) {
            a.r[0] = 0x817fdfc8u;
            a.r[1] = r4;
            a.f[0] = param_1;
            (void)tc_call(rd32(r4 + 0x14u), &a);
            wr8((u32)param_2 + 0x1cu, rd8(0x817fdfc8u));
            wr8((u32)param_2 + 0x1du, rd8(0x817fdfc9u));
            wr8((u32)param_2 + 0x1eu, rd8(0x817fdfcau));
        }
        r4 = rd32((u32)param_2 + 0x38u);
        if (r4 != 0u) {
            a.r[0] = 0x817fdfc4u;
            a.r[1] = r4;
            a.f[0] = param_1;
            (void)tc_call(rd32(r4 + 0x14u), &a);
            wr8((u32)param_2 + 0x20u, rd8(0x817fdfc4u));
            wr8((u32)param_2 + 0x21u, rd8(0x817fdfc5u));
            wr8((u32)param_2 + 0x22u, rd8(0x817fdfc6u));
        }
        r4 = rd32((u32)param_2 + 0x40u);
        if (r4 != 0u) {
            a.r[0] = 0x817fdfc0u;
            a.r[1] = r4;
            a.f[0] = param_1;
            (void)tc_call(rd32(r4 + 0x14u), &a);
            wr8((u32)param_2 + 0x24u, rd8(0x817fdfc0u));
            wr8((u32)param_2 + 0x25u, rd8(0x817fdfc1u));
            wr8((u32)param_2 + 0x26u, rd8(0x817fdfc2u));
        }
        r4 = rd32((u32)param_2 + 0x44u);
        if (r4 != 0u) {
            a.r[0] = 0x817fdfbcu;
            a.r[1] = r4;
            a.f[0] = param_1;
            (void)tc_call(rd32(r4 + 0x14u), &a);
            wr8((u32)param_2 + 0x28u, rd8(0x817fdfbcu));
            wr8((u32)param_2 + 0x29u, rd8(0x817fdfbdu));
            wr8((u32)param_2 + 0x2au, rd8(0x817fdfbeu));
        }
        r4 = rd32((u32)param_2 + 0x3cu);
        if (r4 != 0u) {
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r4;
            a.f[0] = param_1;
            (void)tc_call(rd32(r4 + 0x14u), &a);
            f1 = (f64)rdf32(0x817fdfb8u);
            f0 = (f64)rdf32(0x80571fb8u);
            if (f1 > f0) {
                wrf32d(0x817fdfb8u, f0);
            } else {
                f0 = (f64)rdf32(0x80571fbcu);
                if (f1 < f0) {
                    wrf32d(0x817fdfb8u, f0);
                }
            }
            f0 = (f64)(f32)((f64)rdf32(0x80571fe0u) * (f64)rdf32(0x817fdfb8u));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfd0u, f0);
            wr8((u32)param_2 + 0x23u, (u8)rd32(0x817fdfd4u));
        }
    }
    return;
}
