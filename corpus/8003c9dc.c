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

void fn_8003c9dc(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = tc_call(0x8003c9d0u, &a);
    r6 = r3;
    r7 = 0x817fdfe8u;
    f2 = rdf64(0x80571fa0u);
    f1 = (f64)rdf32(0x80570668u);
    r8 = 0u;
    ctr = 7u;
    do {
        wr32(0x817fdff0u, 0x43300000u);
        wr32(0x817fdff4u, (u32)rd8(r3 + r8 + 0x32u));
        f0 = (f64)(f32)(f1 * (f64)(f32)(rdf64(0x817fdff0u) - f2));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdff8u, f0);
        r0 = rd32(0x817fdffcu);
        if ((s32)r0 > 63) {
            r0 = 0x3fu;
        } else {
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
        }
        wr8(r7, (u8)r0);
        r7 = r7 + 1u;
        r8 = r8 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = (u32)rd8(r3 + 0x19u);
    a.r[0] = r3;
    a.r[1] = r6 + 0x1au;
    a.r[2] = 1u;
    a.r[3] = 0x817fdfe8u;
    (void)tc_call(0x80251570u, &a);
    return;
}
