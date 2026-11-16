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

s32 fn_800817f4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fdffcu, 0u);
    r31 = (u32)param_1 * 0xau;
    wr32(0x817fdff8u, 0u);
    r10 = rd32(0x80337b04u);
    r9 = rd32(0x80337b08u);
    r8 = rd32(0x80337b0cu);
    r30 = (u32)rd8(0x80499098u) - (u32)param_1 - 1u;
    r7 = rd32(0x80337b10u);
    r6 = rd32(0x80337b14u);
    r5 = rd32(0x80337b18u);
    r4 = rd32(0x80337b1cu);
    r3 = rd32(0x80337b20u);
    r0 = rd32(0x80337b24u);
    wr32(0x817fdfb8u, rd32(0x80337b00u));
    wr32(0x817fdfbcu, r10);
    wr32(0x817fdfc0u, r9);
    wr32(0x817fdfc4u, r8);
    wr32(0x817fdfc8u, r7);
    wr32(0x817fdfccu, r6);
    wr32(0x817fdfd0u, r5);
    wr32(0x817fdfd4u, r4);
    wr32(0x817fdfd8u, r3);
    wr32(0x817fdfdcu, r0);
    if ((s32)r30 <= 0) {
        r30 = 0u;
    } else {
        if ((s32)r30 >= 9) {
            r30 = 9u;
        }
    }
    wr32(0x817fdfe4u, r31 ^ 0x80000000u);
    wr32(0x817fdfe0u, 0x43300000u);
    f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfe0u) - rdf64(0x805728c0u)) * (f64)rdf32(((r30 << 2u) & 0xfffffffcu) - 0x7e802048u));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfe8u, f0);
    return (s32)rd32(0x817fdfecu);
}
