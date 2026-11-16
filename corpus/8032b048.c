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

void fn_8032b048(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = rd32(param_r3 + 4u);
    c0eq = (f64)rdf32(0x80577c40u) == (f64)rdf32(param_r3 + 0x88u);
    r31 = rd32(param_r3 + 8u);
    r12 = rd32(param_r3 + 0xcu);
    r11 = rd32(param_r3 + 0x10u);
    r10 = rd32(param_r3 + 0x14u);
    r9 = rd32(param_r3 + 0x18u);
    r8 = rd32(param_r3 + 0x1cu);
    r7 = rd32(param_r3 + 0x20u);
    r6 = rd32(param_r3 + 0x24u);
    r5 = rd32(param_r3 + 0x28u);
    r0 = rd32(param_r3 + 0x2cu);
    wr32(param_r4, rd32(param_r3));
    wr32(param_r4 + 4u, r30);
    wr32(param_r4 + 8u, r31);
    wr32(param_r4 + 0xcu, r12);
    wr32(param_r4 + 0x10u, r11);
    wr32(param_r4 + 0x14u, r10);
    wr32(param_r4 + 0x18u, r9);
    wr32(param_r4 + 0x1cu, r8);
    wr32(param_r4 + 0x20u, r7);
    wr32(param_r4 + 0x24u, r6);
    wr32(param_r4 + 0x28u, r5);
    wr32(param_r4 + 0x2cu, r0);
    if (!c0eq) {
        a.r[0] = 0x817fdfc4u;
        (void)tc_call(0x80254460u, &a);
        f0 = (f64)rdf32(0x817fdfc4u);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfe0u, f0);
        r0 = rd32(0x817fdfe4u);
        c0lt = (s32)r0 < 1;
        if (r0 != 1u) {
            if (!c0lt) {
                return;
            }
            if ((s32)r0 < 0) {
                return;
            }
            a.r[0] = param_r3;
            a.r[1] = param_r3 + 0x8cu;
            a.r[2] = 0x817fdfb8u;
            (void)tc_call(0x8023411cu, &a);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x817fdfb8u;
            r3 = tc_call(0x80320984u, &a);
            if (r3 != 0u) {
                f1 = (f64)rdf32(0x817fdfc0u);
                f0 = (f64)rdf32(0x80577c40u);
                if ((f1 > f0) || (f1 == f0)) {
                    f4 = (f64)rdf32(param_r3 + 0x88u);
                    f1 = (f64)rdf32(param_r4 + 0x1cu);
                    f0 = (f64)rdf32(param_r4 + 0x2cu);
                    wrf32d(param_r4 + 0xcu, (f64)(f32)((f64)rdf32(param_r4 + 0xcu) + (f64)(f32)((f64)rdf32(0x817fdfb8u) * f4)));
                    f1 = (f64)(f32)(f1 + (f64)(f32)((f64)rdf32(0x817fdfbcu) * f4));
                    wrf32d(param_r4 + 0x1cu, f1);
                    f0 = (f64)(f32)(f0 + (f64)(f32)((f64)rdf32(0x817fdfc0u) * f4));
                    wrf32d(param_r4 + 0x2cu, f0);
                    return;
                }
                f4 = (f64)rdf32(param_r3 + 0x88u);
                f1 = (f64)rdf32(param_r4 + 0x1cu);
                f0 = (f64)rdf32(param_r4 + 0x2cu);
                wrf32d(param_r4 + 0xcu, (f64)(f32)((f64)rdf32(param_r4 + 0xcu) - (f64)(f32)((f64)rdf32(0x817fdfb8u) * f4)));
                f1 = (f64)(f32)(f1 - (f64)(f32)((f64)rdf32(0x817fdfbcu) * f4));
                wrf32d(param_r4 + 0x1cu, f1);
                f0 = (f64)(f32)(f0 - (f64)(f32)((f64)rdf32(0x817fdfc0u) * f4));
                wrf32d(param_r4 + 0x2cu, f0);
                return;
            }
            wrf32d(param_r4 + 0x2cu, (f64)(f32)((f64)rdf32(param_r4 + 0x2cu) + (f64)rdf32(param_r3 + 0x88u)));
        } else {
            wrf32d(param_r4 + 0x2cu, (f64)(f32)((f64)rdf32(param_r4 + 0x2cu) + (f64)rdf32(param_r3 + 0x88u)));
        }
    }
    return;
}
