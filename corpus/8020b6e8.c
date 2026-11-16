#include "tc_rt.h"

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

void fn_8020b6e8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r4 = 0u;
    if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
        r4 = 1u;
    }
    if (r4 == 0u) {
        wr32((u32)param_1 + 0x80u, rd32((u32)param_1 + 0x80u) & 0xf7ffffffu);
    } else {
        r4 = rd32((u32)param_1 + 0x80u);
        r0 = (r4 << 2u) & 0xc0000000u;
        if ((u32)((s32)r0 >> 31) != 0u) {
            r0 = (u32)((s32)r0 >> 31);
            if (r0 != 0u) {
                wr32((u32)param_1 + 0x80u, r4 | 0x8000000u);
            }
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8019893cu, &a);
    r5 = (u32)rd8(0x80492821u);
    r7 = (u32)rd8(0x80492824u);
    r6 = (u32)rd8(0x80492825u);
    if ((u32)rd8(((r5 << 2u) & 0xfffffffcu) + r5 - 0x7fcb0285u) <= r7 || (s32)((u32)rd8(((r5 << 2u) & 0x3fcu) + r5 - 0x7fcb0285u) - 1u) > (s32)r7) {
        r3 = (u32)rd8(((r5 << 2u) & 0x3fcu) + r5 - 0x7fcb0284u);
        if (r3 <= r7 || (s32)(r3 - 1u) > (s32)r7) {
            r3 = ((r5 << 2u) & 0x3fcu) + r5 - 0x7fcb0288u;
            if ((u32)rd8(r3 + 3u) > r7) {
                r3 = (u32)rd8(r3 + 4u);
                if ((s32)(r3 - 1u) <= (s32)r7) {
                    wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057678cu));
                    return;
                }
            }
            wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80576790u));
        } else if (r6 < 0x1eu) {
            wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80576790u));
        } else {
            wrf32d((u32)param_1 + 0xacu, (f64)(f32)((f64)rdf32(0x80576790u) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - rdf64(0x80576798u)), (f64)rdf32(0x80576788u))));
        }
    } else if (r6 < 0x1eu) {
        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057678cu));
    } else {
        wrf32d((u32)param_1 + 0xacu, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - rdf64(0x80576798u)), (f64)rdf32(0x80576788u)));
    }
    return;
}
