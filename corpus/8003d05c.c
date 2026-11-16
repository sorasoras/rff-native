#include "tc_rt.h"

static s32 px_quant(f64 v, f64 m, s32 lo, s32 hi)
{
    f64 x = v * m;
    if (x != x) return 0;
    if (x <= (f64)lo) return lo;
    if (x >= (f64)hi) return hi;
    return (s32)x;
}

static u32 px_qsize(u32 t)
{
    return t == 4u || t == 6u ? 1u : t == 5u || t == 7u ? 2u : 4u;
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

void fn_8003d05c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0, t9 = 0, t27 = 0;
    f64 t13 = 0.0, t14 = 0.0, t15 = 0.0, t31 = 0.0, t32 = 0.0, t33 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    if ((param_3 & 6u) != 0u && (u32)rd8(0x803be608u) != 0u) {
        r31 = 1u;
    }
    r28 = 0u;
    if (r31 != 0u && (u32)rd8(0x803be609u) != 0u) {
        r28 = 1u;
    }
    a.r[0] = 1u;
    (void)tc_call(0x80251e90u, &a);
    if (param_1 == 0u) {
        r30 = 1u;
    } else {
        t9 = param_1 + 2u;
        t13 = (f64)(f32)((f64)rdf32(0x803be610u) * px_dq(0u, param_1 + px_qsize(0u)));
        t14 = (f64)(f32)((f64)rdf32(0x803be614u) * px_dq(0u, t9));
        t15 = (f64)(f32)((f64)rdf32(0x803be618u) * px_dq(0u, t9 + px_qsize(0u)));
        px_q(0u, 0x817fdfe0u, (f64)(f32)((f64)rdf32(0x803be60cu) * px_dq(0u, param_1)));
        px_q(0u, px_qsize(0u) - 0x7e802020u, t13);
        px_q(0u, 0x817fdfe2u, t14);
        px_q(0u, px_qsize(0u) - 0x7e80201eu, t15);
        wr32(0x817fdfe4u, rd32(0x817fdfe0u));
        a.r[0] = 4u;
        a.r[1] = 0x817fdfe4u;
        (void)tc_call(0x80251ce0u, &a);
        r30 = 0u;
    }
    if (param_2 == 0u) {
        r29 = 1u;
    } else {
        t27 = param_2 + 2u;
        t31 = (f64)(f32)((f64)rdf32(0x803be620u) * px_dq(0u, param_2 + px_qsize(0u)));
        t32 = (f64)(f32)((f64)rdf32(0x803be624u) * px_dq(0u, t27));
        t33 = (f64)(f32)((f64)rdf32(0x803be628u) * px_dq(0u, t27 + px_qsize(0u)));
        px_q(0u, 0x817fdfd8u, (f64)(f32)((f64)rdf32(0x803be61cu) * px_dq(0u, param_2)));
        px_q(0u, px_qsize(0u) - 0x7e802028u, t31);
        px_q(0u, 0x817fdfdau, t32);
        px_q(0u, px_qsize(0u) - 0x7e802026u, t33);
        wr32(0x817fdfdcu, rd32(0x817fdfd8u));
        a.r[0] = 4u;
        a.r[1] = 0x817fdfdcu;
        (void)tc_call(0x80251db8u, &a);
        r29 = 0u;
    }
    a.r[0] = 0u;
    a.r[1] = r31;
    a.r[2] = r30;
    a.r[3] = r29;
    a.r[4] = rd32(0x803be600u);
    a.r[5] = 2u;
    a.r[6] = 1u;
    (void)tc_call(0x80251eb4u, &a);
    a.r[0] = 2u;
    a.r[1] = r28;
    a.r[2] = r30;
    a.r[3] = r29;
    a.r[4] = rd32(0x803be600u);
    a.r[5] = 2u;
    a.r[6] = 1u;
    (void)tc_call(0x80251eb4u, &a);
    a.r[0] = 5u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 2u;
    (void)tc_call(0x80251eb4u, &a);
    return;
}
