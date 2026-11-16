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

void fn_8005ada8(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r6 = (u32)rd8(0x80492824u);
    r5 = (u32)rd8(0x80492825u);
    if ((u32)param_2 == 2u || (u32)param_2 == 1u) {
        r6 = 0xcu;
        r5 = 0u;
    }
    if (r6 < 4u || r6 > 0x12u) {
        if (r6 <= 0x12u || r6 >= 0x15u) {
            if (r6 >= 4u) {
                r0 = r6 - 0x15u;
            } else {
                r0 = r6 + 3u;
            }
            r0 = r0 ^ 0x80000000u;
            f0 = (f64)(f32)((f64)rdf32(0x805723e0u) * (f64)(f32)((f64)rdf32(0x805723e8u) - (f64)(f32)px_fdiv(ppc_fmadds((f64)rdf32(0x805723d8u), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80572400u)), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - rdf64(0x805723c8u))), (f64)rdf32(0x805723e4u))));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            if ((s32)(((u32)px_f2b(f0) & 0xffu) + 0x14u) >= 80) {
                r0 = 0x50u;
            } else {
                r0 = ((u32)px_f2b(f0) & 0xffu) + 0x14u;
            }
            wr8((u32)param_1 + 0x2c4u, (u8)r0);
        } else {
            f0 = (f64)(f32)((f64)rdf32(0x805723e0u) * (f64)(f32)px_fdiv(ppc_fmadds((f64)rdf32(0x805723d8u), (f64)(f32)(px_b2f((u64)((r6 - 0x12u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572400u)), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - rdf64(0x805723c8u))), (f64)rdf32(0x805723dcu)));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            if ((s32)(((u32)px_f2b(f0) & 0xffu) + 0x14u) >= 80) {
                r0 = 0x50u;
            } else {
                r0 = ((u32)px_f2b(f0) & 0xffu) + 0x14u;
            }
            wr8((u32)param_1 + 0x2c4u, (u8)r0);
        }
    } else if (r6 >= 6u) {
        if (r6 >= 0xcu) {
            f0 = (f64)rdf32(0x805723f8u);
            f1 = (f64)(f32)((f64)rdf32(0x805723f4u) * (f64)(f32)((f64)rdf32(0x805723e8u) - (f64)(f32)px_fdiv(ppc_fmadds((f64)rdf32(0x805723d8u), (f64)(f32)(px_b2f((u64)((r6 - 0xcu) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572400u)), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - rdf64(0x805723c8u))), (f64)rdf32(0x805723f0u))));
            if (!(f1 > f0)) {
                f1 = f0;
            }
            wr8((u32)param_1 + 0x2c4u, (u8)px_f2b(px_ctiw(f1, ppc_fctiwz(f1))));
        } else {
            f0 = (f64)(f32)((f64)rdf32(0x805723f4u) * (f64)(f32)px_fdiv(ppc_fmadds((f64)rdf32(0x805723d8u), (f64)(f32)(px_b2f((u64)((r6 - 6u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572400u)), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - rdf64(0x805723c8u))), (f64)rdf32(0x805723f0u)));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            if ((s32)(((u32)px_f2b(f0) & 0xffu) + 0x50u) >= 200) {
                r0 = 0xc8u;
            } else {
                r0 = ((u32)px_f2b(f0) & 0xffu) + 0x50u;
            }
            wr8((u32)param_1 + 0x2c4u, (u8)r0);
        }
    } else {
        f0 = (f64)(f32)((f64)rdf32(0x805723e0u) * (f64)(f32)px_fdiv(ppc_fmadds((f64)rdf32(0x805723d8u), (f64)(f32)(px_b2f((u64)((r6 - 4u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572400u)), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - rdf64(0x805723c8u))), (f64)rdf32(0x805723ecu)));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        if ((s32)(((u32)px_f2b(f0) & 0xffu) + 0x14u) >= 80) {
            r0 = 0x50u;
        } else {
            r0 = ((u32)px_f2b(f0) & 0xffu) + 0x14u;
        }
        wr8((u32)param_1 + 0x2c4u, (u8)r0);
    }
    return;
}
