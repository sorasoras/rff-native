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

void fn_8015c470(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8015c5dcu, &a);
    if (r3 != 0u) {
        f1 = (f64)rdf32((u32)param_1 + 0x43cu);
        f0 = (f64)rdf32(0x805749a8u);
        if (!(f1 < f0) && f1 != f0) {
            r3 = tc_call(0x80052c3cu, &a);
            r31 = r3;
            a.r[0] = r3;
            (void)tc_call(0x800cb808u, &a);
            wr8(r31 + 0x50u, (u8)rd32((u32)param_1 + 0x44cu));
            wr8(r31 + 0x51u, 1u);
            a.r[0] = rd32((u32)param_1 + 0x438u);
            r3 = tc_call(0x8015bdc0u, &a);
            f0 = (f64)rdf32((u32)param_1 + 0x43cu);
            wr8(0x817fdfecu, (u8)((r3 >> 0x18u) & 0xffu));
            f2 = px_ctiw(f0, ppc_fctiwz(f0));
            f1 = (f64)rdf32(0x805749b4u);
            wr8(0x817fdfedu, (u8)((r3 >> 0x10u) & 0xffu));
            f0 = (f64)rdf32(0x805749a8u);
            wr8(0x817fdfeeu, (u8)((r3 >> 8u) & 0xffu));
            wr8(0x817fdfefu, (u8)px_f2b(f2));
            wr32(0x817fdfe8u, rd32(0x817fdfecu));
            r0 = (u32)rd8(0x817fdfe9u);
            wr8(r31 + 0x24u, rd8(0x817fdfe8u));
            r3 = (u32)rd8(0x817fdfeau);
            wr8(r31 + 0x25u, (u8)r0);
            r0 = (u32)rd8(0x817fdfebu);
            wr8(r31 + 0x26u, (u8)r3);
            wr8(r31 + 0x27u, (u8)r0);
            wrf32d(r31 + 0x40u, f1);
            if ((f64)rdf32((u32)param_1 + 0x458u) != f0) {
                wr8(r31 + 0x52u, 3u);
                a.r[0] = r31;
                a.r[1] = 0x40u;
                a.r[2] = 0x40u;
                a.r[3] = 0x40u;
                a.r[4] = 0xffu;
                (void)tc_call(0x800cd03cu, &a);
                wrf32d(r31 + 0x58u, (f64)rdf32(0x805749d4u));
                a.r[0] = r31;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0x14u;
                (void)tc_call(0x800cd028u, &a);
                f0 = (f64)rdf32(0x805749dcu);
                wrf32d(r31 + 0x54u, (f64)rdf32(0x805749d8u));
                wrf32d(r31 + 0x5cu, f0);
                wrf32d(r31 + 0x60u, f0);
            }
            a.r[0] = 1u;
            (void)tc_call(0x8004ca7cu, &a);
            a.r[0] = 0u;
            a.r[1] = 0u;
            (void)tc_call(0x8004cb58u, &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800d3298u, &a);
            a.r[0] = 0u;
            (void)tc_call(0x8004ca7cu, &a);
        }
    }
    return;
}
