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

u32 fn_8017748c(f64 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    r31 = 0x804c0f98u;
    ctr = 0xc8u;
    do {
        if (rd32(r31 + 0x48u) == 0u) {
            wr32(r31 + 0xe8u, (u32)param_2);
            wr32(r31 + 0xecu, param_3);
            if ((u32)param_2 != 0xffffffffu) {
                wr32(0x817fdfb8u, (u32)param_2);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149f58u, &a);
                wr32(r31 + 0xf0u, r3);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149e10u, &a);
                wr32(r31 + 0x14cu, r3);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149e40u, &a);
                wr32(r31 + 0x154u, r3);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149e70u, &a);
                wr32(r31 + 0x160u, r3);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149ee8u, &a);
                wr8(r31 + 0x1a4u, (u8)(((u32)rd8(r31 + 0x1a4u) & 0xffffff7fu) | ((r3 << 7u) & 0x80u)));
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149f04u, &a);
                wr8(r31 + 0x1a4u, (u8)(((u32)rd8(r31 + 0x1a4u) & 0xffffffbfu) | ((r3 << 6u) & 0x40u)));
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149f20u, &a);
                wr8(r31 + 0x1a4u, (u8)(((u32)rd8(r31 + 0x1a4u) & 0xffffffdfu) | ((r3 << 5u) & 0x20u)));
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149f3cu, &a);
                wr8(r31 + 0x1a4u, (u8)(((u32)rd8(r31 + 0x1a4u) & 0xffffffefu) | ((r3 << 4u) & 0x10u)));
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x80149f70u, &a);
                wrf32d(r31 + 0x128u, f1);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x80149f88u, &a);
                wrf32d(r31 + 0x12cu, f1);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x80149fa0u, &a);
                wrf32d(r31 + 0x13cu, f1);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x80149fe8u, &a);
                wrf32d(r31 + 0x138u, f1);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x8014a000u, &a);
                wrf32d(r31 + 0x144u, f1);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x8014a060u, &a);
                wrf32d(r31 + 0x134u, f1);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x8014a078u, &a);
                wr32(r31 + 0x148u, r3);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x80149fb8u, &a);
                f0 = (f64)(f32)((f64)rdf32(0x80574f88u) * f1);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdfc0u, f0);
                wr16(r31 + 0x140u, (u16)rd32(0x817fdfc4u));
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x80149fd0u, &a);
                f0 = (f64)rdf32(0x80574f88u);
                wr32(0x817fdfd0u, 0x43300000u);
                f1 = (f64)(f32)(f0 * f1);
                f2 = rdf64(0x80574f98u);
                f0 = (f64)rdf32(0x80574f8cu);
                f1 = px_ctiw(f1, ppc_fctiwz(f1));
                wrf64(0x817fdfc8u, f1);
                wr32(0x817fdfd4u, (u32)(s16)rd32(0x817fdfccu) ^ 0x80000000u);
                f0 = ppc_fmadds(f0, param_1, (f64)(f32)(rdf64(0x817fdfd0u) - f2));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdfd8u, f0);
                wr16(r31 + 0x142u, (u16)rd32(0x817fdfdcu));
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149e28u, &a);
                a.r[0] = r31;
                a.r[1] = r3;
                (void)tc_call(0x801796d4u, &a);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149e58u, &a);
                a.r[0] = r31;
                a.r[1] = r3;
                (void)tc_call(0x80179718u, &a);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x8014a018u, &a);
                wrf32d(r31 + 0x15cu, f1);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149e88u, &a);
                a.r[0] = r31;
                a.r[1] = r3;
                (void)tc_call(0x8017975cu, &a);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x8014a030u, &a);
                wrf32d(r31 + 0x168u, f1);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x8014a090u, &a);
                wr32(r31 + 0x16cu, r3);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x8014a0a8u, &a);
                wr32(r31 + 0x170u, r3);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x8014a0c0u, &a);
                wr32(r31 + 0x178u, r3);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x8014a0d8u, &a);
                wr32(r31 + 0x17cu, r3);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149ea0u, &a);
                wr32(r31 + 0x180u, r3);
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149eb8u, &a);
                a.r[0] = r31;
                a.r[1] = r3;
                (void)tc_call(0x801797a0u, &a);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x8014a048u, &a);
                wrf64(0x817fdfe0u, px_ctiw(f1, ppc_fctiwz(f1)));
                wr32(r31 + 0x188u, rd32(0x817fdfe4u));
                a.r[0] = 0x817fdfb8u;
                r3 = tc_call(0x80149ed0u, &a);
                wr32(r31 + 0x18cu, r3);
                wrf32d(r31 + 0x174u, (f64)rdf32(0x80574f90u));
            } else {
                a.r[0] = r31;
                (void)tc_call(0x80177aacu, &a);
            }
            a.r[0] = r31;
            (void)tc_call(0x8006ff58u, &a);
            r3 = r31;
            return r3;
        }
        r31 = r31 + 0x1ecu;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = 0u;
    return r3;
}
