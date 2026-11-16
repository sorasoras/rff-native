#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static s32 px_quant(f64 v, f64 m, s32 lo, s32 hi)
{
    f64 x = v * m;
    if (x != x) return 0;
    if (x <= (f64)lo) return lo;
    if (x >= (f64)hi) return hi;
    return (s32)x;
}

static f64 px_qscale(u32 sc)
{
    f64 m = 1.0;
    s32 n = (s32)(sc & 0x3fu);
    if (n >= 32) n -= 64;
    for (; n > 0; n--) m *= 2.0;
    for (; n < 0; n++) m *= 0.5;
    return m;
}

static f64 px_dq(u32 g, u32 ea)
{
    u32 t = (g >> 16) & 7u;
    f64 m = px_qscale(g >> 24);
    if (t == 4u) return (f64)(f32)((f64)rd8(ea) / m);
    if (t == 5u) return (f64)(f32)((f64)rd16(ea) / m);
    if (t == 6u) return (f64)(f32)((f64)(s8)rd8(ea) / m);
    if (t == 7u) return (f64)(f32)((f64)(s16)rd16(ea) / m);
    return (f64)rdf32(ea);
}

static void px_q(u32 g, u32 ea, f64 v)
{
    u32 t = g & 7u;
    f64 m = px_qscale(g >> 8);
    if (t == 4u) wr8(ea, (u8)px_quant(v, m, 0, 255));
    else if (t == 5u) wr16(ea, (u16)px_quant(v, m, 0, 65535));
    else if (t == 6u) wr8(ea, (u8)px_quant(v, m, -128, 127));
    else if (t == 7u) wr16(ea, (u16)px_quant(v, m, -32768, 32767));
    else wrf32d(ea, v);
}

f64 fn_802d5af4(f64 param_1, f64 param_2)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0;
    f1 = param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80348ab4u);
    if (f0 != param_2 || f0 != param_1) {
        f4 = (f64)rdf32(0x80348ab4u);
        if (!((param_2 > f4) || (param_2 == f4))) {
            if (!((param_1 > f4) || (param_1 == f4))) {
                f0 = -param_2;
                f1 = -param_1;
                if (!((f0 > f1) || (f0 == f1))) {
                    f3 = f1;
                    f4 = (f64)rdf32(0x80348ac8u);
                    f1 = f0;
                    r0 = 1u;
                } else {
                    f3 = f0;
                    f4 = (f64)rdf32(0x80348ad0u);
                    r0 = 0u;
                }
            } else {
                f0 = -param_2;
                if (!((f0 > param_1) || (f0 == param_1))) {
                    f3 = param_1;
                    f4 = (f64)rdf32(0x80348ac0u);
                    f1 = f0;
                    r0 = 0u;
                } else {
                    f3 = f0;
                    f4 = (f64)rdf32(0x80348accu);
                    r0 = 1u;
                }
            }
        } else if (!((param_1 > f4) || (param_1 == f4))) {
            f1 = -param_1;
            if (!((param_2 > f1) || (param_2 == f1))) {
                f3 = f1;
                f4 = (f64)rdf32(0x80348ac8u);
                f1 = param_2;
                r0 = 0u;
            } else {
                f3 = param_2;
                r0 = 1u;
            }
        } else if (!((param_2 > param_1) || (param_2 == param_1))) {
            f3 = param_1;
            f4 = (f64)rdf32(0x80348ac0u);
            f1 = param_2;
            r0 = 1u;
        } else {
            f3 = param_2;
            r0 = 0u;
        }
        if (r0 == 0u) {
            f1 = (f64)(f32)px_fdiv(f1, f3);
            f1 = (f64)(f32)(f1 * (f64)rdf32(0x80348abcu));
            px_q(0u, 0x817fdfecu, f1);
            r0 = (u32)rd16(0x817fdfecu);
            wr16(0x817fdfe8u, (u16)r0);
            r0 = (r0 << 3u) & 0xfffffff8u;
            f1 = (f64)(f32)(f4 + (f64)(f32)((f64)rdf32(r0 - 0x7fc64fb0u) + (f64)(f32)((f64)(f32)(f1 - px_dq(0u, 0x817fdfe8u)) * (f64)rdf32(r0 - 0x7fc64facu))));
        } else {
            f1 = (f64)(f32)px_fdiv(f1, f3);
            f1 = (f64)(f32)(f1 * (f64)rdf32(0x80348abcu));
            px_q(0u, 0x817fdff0u, f1);
            r0 = (u32)rd16(0x817fdff0u);
            wr16(0x817fdfeau, (u16)r0);
            r0 = (r0 << 3u) & 0xfffffff8u;
            f1 = (f64)(f32)(f4 - (f64)(f32)((f64)rdf32(r0 - 0x7fc64fb0u) + (f64)(f32)((f64)(f32)(f1 - px_dq(0u, 0x817fdfeau)) * (f64)rdf32(r0 - 0x7fc64facu))));
        }
    } else {
        f1 = f0;
    }
    return f1;
}
