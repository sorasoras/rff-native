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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_800cb9a8(f64 param_1, f64 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r9 = (u32)rd8(param_3 + 0x25u);
    r0 = (u32)rd8(param_3 + 0x26u);
    r8 = (u32)rd8(param_3 + 0x27u);
    wr8(0x817fdf28u, rd8(param_3 + 0x24u));
    r7 = (u32)rd8(param_6);
    wr8(0x817fdf29u, (u8)r9);
    r9 = (u32)rd8(param_6 + 3u);
    wr8(0x817fdf2au, (u8)r0);
    f28 = (f64)rdf32(param_3 + 0x34u);
    wr8(0x817fdf2bu, (u8)r8);
    f5 = rdf64(0x80572f98u);
    f0 = (f64)(f32)(f28 + param_1);
    r0 = (u32)rd8(param_6 + 2u);
    wr32(0x817fdf34u, rd32(0x817fdf28u));
    f4 = (f64)rdf32(0x80572f94u);
    r4 = (u32)rd8(param_6 + 1u);
    f6 = (f64)rdf32(0x80572f8cu);
    f30 = (f64)rdf32(param_3 + 0x18u);
    f1 = px_b2f((u64)rd8(0x817fdf37u) | 0x4330000000000000ull);
    f29 = (f64)rdf32(param_3 + 0x1cu);
    wr8(param_3 + 0x26u, (u8)r0);
    f27 = (f64)rdf32(param_3 + 0x38u);
    f1 = (f64)(f32)(f1 - f5);
    f26 = (f64)rdf32(param_3 + 0xcu);
    wr8(param_3 + 0x24u, (u8)r7);
    f1 = (f64)(f32)px_fdiv(f1, f4);
    f25 = (f64)rdf32(param_3 + 0x10u);
    wr8(param_3 + 0x25u, (u8)r4);
    f1 = (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f5), f4) * f1);
    f1 = (f64)(f32)(f4 * f1);
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    r0 = (u32)px_f2b(f1);
    wr8(param_6 + 3u, (u8)r0);
    wr8(param_3 + 0x27u, (u8)r0);
    if (!(f6 < f0)) {
        f6 = f0;
    }
    f0 = (f64)(f32)(f27 + param_2);
    f1 = (f64)rdf32(0x80572f8cu);
    wrf32d(param_3 + 0x34u, f6);
    if (!(f1 < f0)) {
        f1 = f0;
    }
    r28 = 0u - (u32)param_5;
    wrf32d(param_3 + 0x38u, f1);
    f31 = rdf64(0x80572fa0u);
    r27 = (u32)(s8)r28;
    while ((s32)(s8)r27 <= param_5) {
        a.r[0] = param_3;
        a.r[1] = (u32)(s8)r27;
        r3 = tc_call(0x800cb978u, &a);
        if (r3 == 0u) {
            r26 = (u32)(s8)r28;
            while ((s32)(s8)r26 <= param_5) {
                a.r[0] = param_3;
                a.r[1] = (u32)(s8)r26;
                r3 = tc_call(0x800cb978u, &a);
                if (r3 == 0u) {
                    r7 = (u32)(s8)r26 ^ 0x80000000u;
                    r0 = (u32)(s8)r27 ^ 0x80000000u;
                    wrf32d(param_3 + 0xcu, (f64)(f32)(param_1 + (f64)(f32)(f26 + (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - f31))));
                    wrf32d(param_3 + 0x10u, (f64)(f32)(param_2 + (f64)(f32)(f25 + (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f31))));
                    wrf32d(param_3 + 0x18u, (f64)(f32)(param_1 + (f64)(f32)(f30 + (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - f31))));
                    wrf32d(param_3 + 0x1cu, (f64)(f32)(param_2 + (f64)(f32)(f29 + (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f31))));
                    a.r[0] = param_3;
                    a.r[1] = param_4;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    (void)tc_call(0x800cbe84u, &a);
                }
                r26 = r26 + 1u;
            }
        }
        r27 = r27 + 1u;
    }
    r0 = rd32(0x817fdf28u);
    wrf32d(param_3 + 0x18u, f30);
    wr32(0x817fdf2cu, r0);
    r5 = (u32)rd8(0x817fdf2cu);
    r4 = (u32)rd8(0x817fdf2du);
    r3 = (u32)rd8(0x817fdf2eu);
    r0 = (u32)rd8(0x817fdf2fu);
    wrf32d(param_3 + 0x1cu, f29);
    wrf32d(param_3 + 0xcu, f26);
    wrf32d(param_3 + 0x10u, f25);
    wr8(param_3 + 0x24u, (u8)r5);
    wr8(param_3 + 0x25u, (u8)r4);
    wr8(param_3 + 0x26u, (u8)r3);
    wr8(param_3 + 0x27u, (u8)r0);
    wrf32d(param_3 + 0x34u, f28);
    wrf32d(param_3 + 0x38u, f27);
    return;
}
