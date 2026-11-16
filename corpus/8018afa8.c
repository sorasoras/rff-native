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

void fn_8018afa8(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r5 = 0u;
    if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
        r5 = 1u;
    }
    if (r5 == 0u) {
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
    f1 = tc_callf(0x8019893cu, &a);
    r4 = tc_lastr4();
    r0 = rd32((u32)param_1 + 0xb4u);
    if (r0 <= 0x16u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc904f0u);
        sw_ = r3;
        switch (sw_) {
        case 0x8018b258u:
            break;
        case 0x8018b058u:
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8018b26cu, &a);
            break;
        case 0x8018b12cu:
            r5 = (u32)rd8(0x80492821u);
            r7 = (u32)rd8(0x80492824u);
            r6 = (u32)rd8(0x80492825u);
            if ((u32)rd8(((r5 << 2u) & 0xfffffffcu) + r5 - 0x7fcb0286u) <= r7 || (s32)((u32)rd8(((r5 << 2u) & 0x3fcu) + r5 - 0x7fcb0286u) - 1u) > (s32)r7) {
                r3 = (u32)rd8(((r5 << 2u) & 0x3fcu) + r5 - 0x7fcb0285u);
                if (r3 <= r7 || (s32)(r3 - 1u) > (s32)r7) {
                    r3 = (u32)rd8(((r5 << 2u) & 0x3fcu) + r5 - 0x7fcb0286u);
                    if (r3 > r7 || (s32)(r3 - 1u) <= (s32)r7) {
                        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575288u));
                        break;
                    }
                    wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057528cu));
                    break;
                }
                if (r6 < 0x1eu) {
                    wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057528cu));
                    break;
                }
                wrf32d((u32)param_1 + 0xacu, (f64)(f32)((f64)rdf32(0x8057528cu) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - rdf64(0x80575298u)), (f64)rdf32(0x80575290u))));
                break;
            }
            if (r6 < 0x1eu) {
                wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575288u));
                break;
            }
            wrf32d((u32)param_1 + 0xacu, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - rdf64(0x80575298u)), (f64)rdf32(0x80575290u)));
            break;
        case 0x8018b064u:
            r4 = (u32)rd8(0x80492824u);
            r0 = (u32)rd8(0x80492825u);
            if (r4 >= 6u || r4 < 5u) {
                if (r4 >= 0xbu || r4 < 0xau) {
                    if (r4 < 6u || r4 > 0xau) {
                        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575288u));
                        break;
                    }
                    wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057528cu));
                    break;
                }
                if (r0 < 0x1eu) {
                    wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057528cu));
                    break;
                }
                wrf32d((u32)param_1 + 0xacu, (f64)(f32)((f64)rdf32(0x8057528cu) - (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80575298u)), (f64)rdf32(0x80575290u))));
                break;
            }
            if (r0 < 0x1eu) {
                wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575288u));
                break;
            }
            wrf32d((u32)param_1 + 0xacu, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - rdf64(0x80575298u)), (f64)rdf32(0x80575290u)));
            break;
        case 0x8018b04cu:
            wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057528cu));
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    return;
}
