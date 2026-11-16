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

void fn_80323344(u32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, f64 param_f1)
{
    u32 r3 = 0, r23 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f8 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0;
    f64 f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (param_4 >= 1) {
        f31 = (f64)rdf32(param_6);
        f0 = (f64)rdf32(0x80577b40u);
        if (!((f64)(f32)ppc_fabs(f31) > f0)) {
            f31 = f0;
        }
        f30 = (f64)rdf32(param_6 + 0x10u);
        f0 = (f64)rdf32(0x80577b40u);
        if (!((f64)(f32)ppc_fabs(f30) > f0)) {
            f30 = f0;
        }
        if ((param_5 & 0x2000000u) == 0u) {
            f29 = (f64)rdf32(param_6 + 0x14u);
            f0 = (f64)rdf32(0x80577b40u);
            if (!((f64)(f32)ppc_fabs(f29) > f0)) {
                f29 = f0;
            }
        } else {
            f29 = f31;
        }
        f28 = (f64)rdf32(0x80577b20u);
        if ((param_5 & 0x40000u) == 0u) {
            f4 = rdf64(0x80577b30u);
            f2 = (f64)rdf32(0x80577b18u);
            f1 = (f64)rdf32(0x80577b44u);
            f0 = (f64)rdf32(0x80577b28u);
            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r3);
            f2 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)((r3 >> 0x10u) & 0xffffu) | 0x4330000000000000ull) - f4), f2);
            f1 = (f64)(f32)(f1 * f2);
            f27 = (f64)(f32)(f0 * f1);
        } else {
            f27 = (f64)rdf32(param_6 + 8u);
        }
        if ((param_5 & 0x20000u) == 0u) {
            a.f[0] = param_f1;
            a.f[1] = f31;
            a.f[2] = f30;
            a.f[3] = f29;
            a.f[4] = f28;
            a.f[5] = f28;
            a.f[6] = f27;
            a.f[7] = (f64)rdf32(0x80577b20u);
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = (u32)param_4;
            a.r[4] = param_5;
            a.r[5] = param_6;
            a.r[6] = param_7;
            a.r[7] = param_8;
            (void)tc_call(0x80322ee4u, &a);
        } else {
            a.f[0] = (f64)(f32)((f64)rdf32(param_6 + 0xcu) - (f64)rdf32(param_6 + 8u));
            a.f[1] = rdf64(0x80577b48u);
            f1 = tc_callf(0x80262c6cu, &a);
            f1 = (f64)(f32)f1;
            if (f1 < (f64)rdf32(0x80577b50u) || f1 > (f64)rdf32(0x80577b54u)) {
                f22 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(param_6 + 0xcu) - (f64)rdf32(param_6 + 8u)), (f64)(f32)(px_b2f((u64)rd16(param_2 + 0x32u) | 0x4330000000000000ull) - rdf64(0x80577b30u)));
            } else {
                f22 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(param_6 + 0xcu) - (f64)rdf32(param_6 + 8u)), (f64)(f32)(px_b2f((u64)(((u32)rd16(param_2 + 0x32u) - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80577b38u)));
            }
            f23 = rdf64(0x80577b38u);
            r23 = 0u;
            f24 = (f64)rdf32(0x80577b58u);
            f25 = (f64)rdf32(0x80577b28u);
            while ((s32)r23 < param_4) {
                if (param_4 > 1) {
                    f8 = (f64)(f32)(f25 * (f64)(f32)(f30 * (f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(r23 ^ 0x80000000u) | 0x4330000000000000ull) - f23), (f64)(f32)(px_b2f((u64)(((u32)param_4 - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - f23)) - f24)));
                } else {
                    f8 = (f64)rdf32(0x80577b20u);
                }
                a.f[0] = param_f1;
                a.f[1] = f31;
                a.f[2] = f30;
                a.f[3] = f29;
                a.f[4] = f28;
                a.f[5] = f22;
                a.f[6] = f27;
                a.f[7] = f8;
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = (u32)param_4;
                a.r[4] = param_5;
                a.r[5] = param_6;
                a.r[6] = param_7;
                a.r[7] = param_8;
                (void)tc_call(0x80322ee4u, &a);
                r23 = r23 + 1u;
            }
        }
    }
    return;
}
