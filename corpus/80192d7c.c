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

u32 fn_80192d7c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = rd32(rd32(0x80571398u) + 0x38u);
    a.r[0] = 0x8049f1b0u;
    a.r[1] = (u32)rd16(r30 + 0x20cu);
    r3 = tc_call(0x8015f2b0u, &a);
    r0 = r3 & 0xffu;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0x200000u;
    r3 = 0u;
    if (r0 != 0u) {
        r3 = 1u;
    }
    if (r3 == 0u) {
        return 1u;
    }
    r5 = (u32)rd16(r30 + 0x20cu);
    r0 = (u32)rd8(r30 + 0x20fu) - 1u;
    wr32(0x817fdfe8u, 0x43300000u);
    r0 = r0 ^ 0x80000000u;
    f2 = rdf64(0x805753c8u);
    wr32(0x817fdfecu, r0);
    f1 = rdf64(0x805753e0u);
    f0 = rdf64(0x817fdfe8u);
    wr32(0x817fdfe4u, (u32)rd8((((r5 - 0x55u) << 3u) & 0xfffffff8u) - 0x7fb5e9c8u));
    f2 = f0 - f2;
    f0 = rdf64(0x805753d8u);
    wr32(0x817fdfe0u, 0x43300000u);
    f0 = (f1 * f2) + f0;
    f0 = (rdf64(0x817fdfe0u) - rdf64(0x805753d0u)) * f0;
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdff0u, f0);
    a.r[0] = rd32(0x817fdff4u) & 0xffffu;
    a.r[1] = 0x817fdfb8u;
    r3 = tc_call(0x800f8d6cu, &a);
    r30 = r3;
    a.r[0] = 0xdu;
    a.r[1] = 0x54u;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    a.r[0] = r3;
    a.r[1] = (((r30 - 1u) << 1u) & 0xfffffffeu) - 0x7e802048u;
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x800f8ebcu, &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfb8u;
    a.r[2] = 0u;
    (void)tc_call(0x80100670u, &a);
    return 1u;
}
