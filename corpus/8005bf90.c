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

void fn_8005bf90(f64 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_3;
    r3 = tc_call(0x80054084u, &a);
    r30 = r3;
    a.r[0] = param_4;
    r3 = tc_call(0x80054084u, &a);
    r31 = r3;
    a.f[0] = param_1;
    a.r[0] = (u32)param_2;
    a.r[1] = (u32)param_2;
    a.r[2] = r30 + 0x48u;
    a.r[3] = r3 + 0x48u;
    (void)tc_call(0x8005be64u, &a);
    a.f[0] = param_1;
    a.r[0] = (u32)param_2;
    a.r[1] = (u32)param_2 + 4u;
    a.r[2] = r30 + 0x4cu;
    a.r[3] = r31 + 0x4cu;
    (void)tc_call(0x8005be64u, &a);
    a.f[0] = param_1;
    a.r[0] = (u32)param_2;
    a.r[1] = (u32)param_2 + 8u;
    a.r[2] = r30 + 0x50u;
    a.r[3] = r31 + 0x50u;
    (void)tc_call(0x8005be64u, &a);
    f1 = (f64)rdf32(r30 + 0x44u);
    f3 = rdf64(0x805723c8u);
    f4 = (f64)rdf32(0x80572418u);
    wrf32d((u32)param_2 + 0xcu, ppc_fmadds(param_1, (f64)(f32)((f64)rdf32(r31 + 0x44u) - f1), f1));
    r0 = (u32)rd8(r31 + 0x54u);
    r3 = (u32)rd8(r30 + 0x54u);
    if (f4 > ppc_fmadds(param_1, (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3) - (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3)), (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3))) {
        wr8((u32)param_2 + 0x10u, (u8)px_f2b(px_ctiw(f4, ppc_fctiwz(f4))));
        return;
    }
    f4 = ppc_fmadds(param_1, (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3) - (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3)), (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f3));
    wr8((u32)param_2 + 0x10u, (u8)px_f2b(px_ctiw(f4, ppc_fctiwz(f4))));
    return;
}
