#include "tc_rt.h"

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

void fn_802ee208(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r21 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r6 = rd32(param_1 + 0xcu);
    f31 = (f64)rdf32(0x8057750cu);
    r24 = 0u;
    r28 = r6 + rd32(((param_2 << 2u) & 0xfffffffcu) + (r6 + rd32(r6 + 0x10u)));
    r26 = r28 + 0x18u;
    while ((s32)r24 < (s32)rd8(r28 + 0x14u)) {
        r0 = rd32(r26);
        r3 = rd32(r28 + r0);
        r27 = r28 + r0;
        r25 = r27 + 8u;
        c0lt = (s32)r3 < 1380734531;
        if (r3 == 0x524c5643u) {
            r29 = 0u;
            f30 = (f64)rdf32(param_1 + 0x10u);
            if ((s32)rd8(r27 + 4u) > 0) {
                while ((s32)r29 < (s32)rd8(r27 + 4u)) {
                    r21 = r27 + rd32(r25);
                    a.f[0] = f30;
                    a.r[0] = r21 + rd32(r21 + 8u);
                    a.r[1] = (u32)rd16(r21 + 4u);
                    f1 = tc_callf(0x802edb1cu, &a);
                    px_q(0u, 0x817fdfa8u, (f64)(f32)(f1 + f31));
                    a.r[0] = param_3;
                    a.r[1] = (u32)rd8(r21 + 1u);
                    a.r[2] = (u32)rd8(0x817fdfa8u);
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_3) + 0x30u), &a);
                    r25 = r25 + 4u;
                    r29 = r29 + 1u;
                }
            }
        } else if (!c0lt) {
            if (r3 == 0x524c5649u) {
                f30 = (f64)rdf32(param_1 + 0x10u);
                r29 = 0u;
                while ((s32)r29 < (s32)rd8(r27 + 4u)) {
                    r3 = r27 + rd32(r25);
                    r4 = (u32)rd16(r3 + 4u);
                    r3 = r3 + rd32(r3 + 8u);
                    a.f[0] = f30;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    r3 = tc_call(0x802eda34u, &a);
                    r4 = r3 & 0xffffu;
                    r25 = r25 + 4u;
                    r29 = r29 + 1u;
                    wr8(param_3 + 0xbbu, (u8)(((u32)rd8(param_3 + 0xbbu) & 0xfeu) | ((((0u - r4) | r4) >> 0x1fu) & 1u)));
                }
            }
        } else if (r3 == 0x524c5041u) {
            f30 = (f64)rdf32(param_1 + 0x10u);
            r29 = 0u;
            while ((s32)r29 < (s32)rd8(r27 + 4u)) {
                r21 = r27 + rd32(r25);
                a.f[0] = f30;
                a.r[0] = r21 + rd32(r21 + 8u);
                a.r[1] = (u32)rd16(r21 + 4u);
                f1 = tc_callf(0x802edb1cu, &a);
                r25 = r25 + 4u;
                r29 = r29 + 1u;
                wrf32d(param_3 + (((u32)rd8(r21 + 1u) << 2u) & 0xfffffffcu) + 0x2cu, f1);
            }
        }
        r26 = r26 + 4u;
        r24 = r24 + 1u;
    }
    return;
}
