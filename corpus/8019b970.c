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

void fn_8019b970(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r4 = rd32((u32)param_1 + 0x500u);
    wr32(0x817fdfd8u, 0x43300000u);
    wr32(0x817fdfe0u, 0x43300000u);
    if (r4 != 0u) {
        a.r[0] = 0x803cb934u;
        a.r[1] = r4;
        f1 = tc_callf(0x8007b03cu, &a);
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
    }
    r0 = rd32((u32)param_1 + 0x40u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0x817fdf98u;
        a.r[1] = 0x8033ae28u;
        a.r[2] = (u32)rd8((u32)param_1 + 0x1bu);
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x8025b994u, &a);
        a.f[0] = (f64)(f32)((rdf64(0x80575728u) * (rdf64(0x80575730u) - (f64)rdf32((u32)param_1 + 0x514u))) + rdf64(0x80575720u));
        a.f[1] = (f64)rdf32(0x80575738u);
        a.f[2] = (f64)rdf32(0x80575718u);
        a.f[3] = (f64)rdf32(0x8057571cu);
        a.r[0] = 0x817fdf98u;
        a.r[1] = 3u;
        (void)tc_call(0x80052904u, &a);
        a.r[0] = (u32)rd16((u32)param_1 + 0x18u);
        r3 = tc_call(0x800cd694u, &a);
        r30 = r3;
        r3 = tc_call(0x80052c30u, &a);
        a.r[0] = r3;
        a.r[1] = r30;
        f1 = tc_callf(0x80079bf8u, &a);
        a.f[0] = f1;
        r3 = tc_call(0x802558e4u, &a);
        r30 = r3;
        a.r[0] = (u32)rd16((u32)param_1 + 0x18u);
        r3 = tc_call(0x800cd694u, &a);
        wr32(0x817fdfdcu, r30);
        a.f[0] = ppc_fnmsubs((f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - rdf64(0x805756c0u)) * (f64)rdf32(0x80575698u)), (f64)rdf32((u32)param_1 + 0x514u), (f64)rdf32(0x80575714u));
        a.f[1] = (f64)rdf32(0x8057573cu);
        a.f[2] = (f64)rdf32(0x80575718u);
        a.f[3] = (f64)rdf32(0x8057571cu);
        a.r[0] = r3;
        a.r[1] = 3u;
        (void)tc_call(0x80052a08u, &a);
        a.r[0] = 0x15u;
        a.r[1] = 8u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        r30 = r3;
        r3 = tc_call(0x80052c30u, &a);
        a.r[0] = r3;
        a.r[1] = r30;
        f1 = tc_callf(0x80079bf8u, &a);
        a.f[0] = f1;
        r3 = tc_call(0x802558e4u, &a);
        r30 = r3;
        a.r[0] = 0x15u;
        a.r[1] = 8u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        wr32(0x817fdfe4u, r30);
        a.f[0] = ppc_fnmsubs((f64)(f32)((f64)(f32)(rdf64(0x817fdfe0u) - rdf64(0x805756c0u)) * (f64)rdf32(0x80575698u)), (f64)(f32)((f64)rdf32(0x80575740u) * (f64)rdf32((u32)param_1 + 0x514u)), (f64)rdf32(0x80575714u));
        a.f[1] = (f64)rdf32(0x80575744u);
        a.f[2] = (f64)rdf32(0x80575718u);
        a.f[3] = (f64)rdf32(0x80575748u);
        a.r[0] = r3;
        a.r[1] = 3u;
        (void)tc_call(0x80052a08u, &a);
    } else if (!c0lt) {
        if ((s32)r0 < 3) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x817fdf58u;
            a.r[1] = 0x8033ae28u;
            a.r[2] = (u32)rd8((u32)param_1 + 0x1bu);
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8025b994u, &a);
            a.f[0] = (f64)(f32)((rdf64(0x80575750u) * (rdf64(0x80575730u) - (f64)rdf32((u32)param_1 + 0x514u))) + rdf64(0x80575720u));
            a.f[1] = (f64)rdf32(0x80575738u);
            a.f[2] = (f64)rdf32(0x80575718u);
            a.f[3] = (f64)rdf32(0x8057571cu);
            a.r[0] = 0x817fdf58u;
            a.r[1] = 3u;
            (void)tc_call(0x80052904u, &a);
            a.r[0] = (u32)rd16((u32)param_1 + 0x18u);
            r3 = tc_call(0x800cd694u, &a);
            r30 = r3;
            r3 = tc_call(0x80052c30u, &a);
            a.r[0] = r3;
            a.r[1] = r30;
            f1 = tc_callf(0x80079bf8u, &a);
            a.f[0] = f1;
            r3 = tc_call(0x802558e4u, &a);
            r30 = r3;
            a.r[0] = (u32)rd16((u32)param_1 + 0x18u);
            r3 = tc_call(0x800cd694u, &a);
            wr32(0x817fdfdcu, r30);
            a.f[0] = ppc_fnmsubs((f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - rdf64(0x805756c0u)) * (f64)rdf32(0x80575698u)), (f64)rdf32((u32)param_1 + 0x514u), (f64)rdf32(0x80575714u));
            a.f[1] = (f64)rdf32(0x8057573cu);
            a.f[2] = (f64)rdf32(0x80575718u);
            a.f[3] = (f64)rdf32(0x8057571cu);
            a.r[0] = r3;
            a.r[1] = 3u;
            (void)tc_call(0x80052a08u, &a);
            a.r[0] = 0x15u;
            a.r[1] = 7u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            r30 = r3;
            r3 = tc_call(0x80052c30u, &a);
            a.r[0] = r3;
            a.r[1] = r30;
            f1 = tc_callf(0x80079bf8u, &a);
            a.f[0] = f1;
            r3 = tc_call(0x802558e4u, &a);
            r30 = r3;
            a.r[0] = 0x15u;
            a.r[1] = 7u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            wr32(0x817fdfe4u, r30);
            a.f[0] = ppc_fnmsubs((f64)(f32)((f64)(f32)(rdf64(0x817fdfe0u) - rdf64(0x805756c0u)) * (f64)rdf32(0x80575698u)), (f64)(f32)((f64)rdf32(0x80575740u) * (f64)rdf32((u32)param_1 + 0x514u)), (f64)rdf32(0x80575714u));
            a.f[1] = (f64)rdf32(0x80575744u);
            a.f[2] = (f64)rdf32(0x80575718u);
            a.f[3] = (f64)rdf32(0x80575748u);
            a.r[0] = r3;
            a.r[1] = 3u;
            (void)tc_call(0x80052a08u, &a);
        }
    } else if ((s32)r0 >= 0) {
        if ((u32)rd8((u32)param_1 + 0x464u) != 6u) {
            if (rd32((u32)param_1 + 0x20u) != 0u) {
                a.r[0] = 0x15u;
                a.r[1] = 9u;
                a.r[2] = 0u;
                r3 = tc_call(0x801412f8u, &a);
            } else {
                a.r[0] = 0x15u;
                a.r[1] = 0x48u;
                a.r[2] = 0u;
                r3 = tc_call(0x801412f8u, &a);
            }
            r30 = r3;
        } else {
            a.r[0] = 0x15u;
            a.r[1] = 0x47u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            r30 = r3;
        }
        r3 = tc_call(0x80052c30u, &a);
        a.r[0] = r3;
        a.r[1] = r30;
        f1 = tc_callf(0x80079bf8u, &a);
        a.f[0] = f1;
        r3 = tc_call(0x802558e4u, &a);
        if ((u32)rd16((u32)param_1 + 0x1cu) == 0x2e8u) {
            f0 = (f64)rdf32(0x805756e8u);
        } else {
            f0 = (f64)rdf32(0x80575714u);
        }
        f2 = px_ctiw(f0, ppc_fctiwz(f0));
        wr32(0x817fdfdcu, r3);
        f1 = rdf64(0x805756c0u);
        f0 = rdf64(0x817fdfd8u);
        wrf64(0x817fdfe8u, f2);
        f1 = (f64)(f32)(f0 - f1);
        f5 = (f64)(f32)(f1 * (f64)rdf32(0x80575698u));
        f4 = rdf64(0x805756b8u);
        f0 = (f64)rdf32((u32)param_1 + 0x514u);
        wr32(0x817fdfe4u, rd32(0x817fdfecu) ^ 0x80000000u);
        a.f[0] = ppc_fnmsubs(f5, f0, (f64)(f32)(rdf64(0x817fdfe0u) - f4));
        a.f[1] = (f64)rdf32(0x80575708u);
        a.f[2] = (f64)rdf32(0x80575718u);
        a.f[3] = (f64)rdf32(0x8057571cu);
        a.r[0] = r30;
        a.r[1] = 3u;
        (void)tc_call(0x80052a08u, &a);
    }
    wr8((u32)param_1 + 0x494u, rd8((u32)param_1 + 0x4fcu));
    a.r[0] = (u32)param_1 + 0x468u;
    (void)tc_call(0x8005250cu, &a);
    r3 = (u32)rd8((u32)param_1 + 0x4fcu);
    wr32((u32)param_1 + 0x490u, 1u);
    if (r3 < 0xffu) {
        r3 = r3 + 0xau;
        r0 = 0xffu;
        if ((s32)r3 <= 255) {
            r0 = r3;
        }
        wr8((u32)param_1 + 0x4fcu, (u8)r0);
    }
    return;
}
