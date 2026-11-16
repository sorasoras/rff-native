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

void fn_8003d1c8(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0, r31 = 0, t9 = 0, t27 = 0, t45 = 0, t81 = 0;
    f64 t13 = 0.0, t14 = 0.0, t15 = 0.0, t31 = 0.0, t32 = 0.0, t33 = 0.0, t49 = 0.0, t50 = 0.0, t51 = 0.0, t67 = 0.0, t68 = 0.0, t69 = 0.0;
    f64 t85 = 0.0, t86 = 0.0, t87 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = 0u;
    if ((param_5 & 2u) != 0u && (u32)rd8(0x803be608u) != 0u) {
        r27 = 1u;
    }
    r31 = 0u;
    if (r27 != 0u && (u32)rd8(0x803be609u) != 0u) {
        r31 = 1u;
    }
    r29 = 1u;
    if ((r27 != 0u && (u32)param_4 != 0u) && rd32(0x803be604u) != 0u) {
        r29 = 2u;
    }
    a.r[0] = r29;
    (void)tc_call(0x80251e90u, &a);
    if (param_1 == 0u) {
        r26 = 1u;
    } else {
        t9 = param_1 + 2u;
        t13 = (f64)(f32)((f64)rdf32(0x803be610u) * px_dq(0u, param_1 + px_qsize(0u)));
        t14 = (f64)(f32)((f64)rdf32(0x803be614u) * px_dq(0u, t9));
        t15 = (f64)(f32)((f64)rdf32(0x803be618u) * px_dq(0u, t9 + px_qsize(0u)));
        px_q(0u, 0x817fdfc8u, (f64)(f32)((f64)rdf32(0x803be60cu) * px_dq(0u, param_1)));
        px_q(0u, px_qsize(0u) - 0x7e802038u, t13);
        px_q(0u, 0x817fdfcau, t14);
        px_q(0u, px_qsize(0u) - 0x7e802036u, t15);
        wr32(0x817fdfccu, rd32(0x817fdfc8u));
        a.r[0] = 4u;
        a.r[1] = 0x817fdfccu;
        (void)tc_call(0x80251ce0u, &a);
        r26 = 0u;
    }
    if (param_2 == 0u) {
        r25 = 1u;
    } else {
        t27 = param_2 + 2u;
        t31 = (f64)(f32)((f64)rdf32(0x803be620u) * px_dq(0u, param_2 + px_qsize(0u)));
        t32 = (f64)(f32)((f64)rdf32(0x803be624u) * px_dq(0u, t27));
        t33 = (f64)(f32)((f64)rdf32(0x803be628u) * px_dq(0u, t27 + px_qsize(0u)));
        px_q(0u, 0x817fdfc0u, (f64)(f32)((f64)rdf32(0x803be61cu) * px_dq(0u, param_2)));
        px_q(0u, px_qsize(0u) - 0x7e802040u, t31);
        px_q(0u, 0x817fdfc2u, t32);
        px_q(0u, px_qsize(0u) - 0x7e80203eu, t33);
        wr32(0x817fdfc4u, rd32(0x817fdfc0u));
        a.r[0] = 0u;
        a.r[1] = 0x817fdfc4u;
        (void)tc_call(0x80251db8u, &a);
        r25 = 0u;
    }
    if ((u32)param_3 == 0u) {
        r24 = 1u;
    } else {
        t45 = (u32)param_3 + 2u;
        t49 = (f64)(f32)((f64)rdf32(0x803be620u) * px_dq(0u, (u32)param_3 + px_qsize(0u)));
        t50 = (f64)(f32)((f64)rdf32(0x803be624u) * px_dq(0u, t45));
        t51 = (f64)(f32)((f64)rdf32(0x803be628u) * px_dq(0u, t45 + px_qsize(0u)));
        px_q(0u, 0x817fdfb8u, (f64)(f32)((f64)rdf32(0x803be61cu) * px_dq(0u, (u32)param_3)));
        px_q(0u, px_qsize(0u) - 0x7e802048u, t49);
        px_q(0u, 0x817fdfbau, t50);
        px_q(0u, px_qsize(0u) - 0x7e802046u, t51);
        wr32(0x817fdfbcu, rd32(0x817fdfb8u));
        a.r[0] = 2u;
        a.r[1] = 0x817fdfbcu;
        (void)tc_call(0x80251db8u, &a);
        r24 = 0u;
    }
    a.r[0] = 0u;
    a.r[1] = r27;
    a.r[2] = r26;
    a.r[3] = r25;
    a.r[4] = rd32(0x803be600u);
    a.r[5] = 2u;
    a.r[6] = 1u;
    (void)tc_call(0x80251eb4u, &a);
    a.r[0] = 2u;
    a.r[1] = r31;
    a.r[2] = r26;
    a.r[3] = r24;
    a.r[4] = rd32(0x803be600u);
    a.r[5] = 2u;
    a.r[6] = 1u;
    (void)tc_call(0x80251eb4u, &a);
    if ((s32)r29 >= 2) {
        wr32(0x817fdfd0u, 0u);
        t67 = (f64)(f32)((f64)rdf32(0x803be610u) * px_dq(0u, px_qsize(0u) - 0x7e802030u));
        t68 = (f64)(f32)((f64)rdf32(0x803be614u) * px_dq(0u, 0x817fdfd2u));
        t69 = (f64)(f32)((f64)rdf32(0x803be618u) * px_dq(0u, px_qsize(0u) - 0x7e80202eu));
        px_q(0u, 0x817fdfb0u, (f64)(f32)((f64)rdf32(0x803be60cu) * px_dq(0u, 0x817fdfd0u)));
        px_q(0u, px_qsize(0u) - 0x7e802050u, t67);
        px_q(0u, 0x817fdfb2u, t68);
        px_q(0u, px_qsize(0u) - 0x7e80204eu, t69);
        wr32(0x817fdfb4u, rd32(0x817fdfb0u));
        a.r[0] = 5u;
        a.r[1] = 0x817fdfb4u;
        (void)tc_call(0x80251ce0u, &a);
        if ((u32)param_4 == 0u) {
            r25 = 1u;
        } else {
            t81 = (u32)param_4 + 2u;
            t85 = (f64)(f32)((f64)rdf32(0x803be620u) * px_dq(0u, (u32)param_4 + px_qsize(0u)));
            t86 = (f64)(f32)((f64)rdf32(0x803be624u) * px_dq(0u, t81));
            t87 = (f64)(f32)((f64)rdf32(0x803be628u) * px_dq(0u, t81 + px_qsize(0u)));
            px_q(0u, 0x817fdfa8u, (f64)(f32)((f64)rdf32(0x803be61cu) * px_dq(0u, (u32)param_4)));
            px_q(0u, px_qsize(0u) - 0x7e802058u, t85);
            px_q(0u, 0x817fdfaau, t86);
            px_q(0u, px_qsize(0u) - 0x7e802056u, t87);
            wr32(0x817fdfacu, rd32(0x817fdfa8u));
            a.r[0] = 5u;
            a.r[1] = 0x817fdfacu;
            (void)tc_call(0x80251db8u, &a);
            r25 = 0u;
        }
        a.r[0] = 1u;
        a.r[1] = r27;
        a.r[2] = 0u;
        a.r[3] = r25;
        a.r[4] = rd32(0x803be604u);
        a.r[5] = 2u;
        a.r[6] = 0u;
        (void)tc_call(0x80251eb4u, &a);
        a.r[0] = 3u;
        a.r[1] = r31;
        a.r[2] = 0u;
        a.r[3] = r25;
        a.r[4] = rd32(0x803be604u);
        a.r[5] = 2u;
        a.r[6] = 0u;
        (void)tc_call(0x80251eb4u, &a);
    } else {
        a.r[0] = 5u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 2u;
        (void)tc_call(0x80251eb4u, &a);
    }
    return;
}
