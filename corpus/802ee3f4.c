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

void fn_802ee3f4(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r19 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r6 = rd32(param_1 + 0xcu);
    f30 = (f64)rdf32(0x8057750cu);
    r22 = 0u;
    r28 = r6 + rd32(((param_2 << 2u) & 0xfffffffcu) + (r6 + rd32(r6 + 0x10u)));
    r25 = r28 + 0x18u;
    while ((s32)r22 < (s32)rd8(r28 + 0x14u)) {
        r0 = rd32(r25);
        r3 = rd32(r28 + r0);
        r27 = r28 + r0;
        r24 = r27 + 8u;
        c0lt = (s32)r3 < 1380734032;
        if (r3 == 0x524c5450u) {
            r23 = rd32(param_1 + 0x14u);
            if (r23 != 0u) {
                f29 = (f64)rdf32(param_1 + 0x10u);
                r29 = 0u;
                while ((s32)r29 < (s32)rd8(r27 + 4u)) {
                    r3 = rd32(r24);
                    r26 = r27 + r3;
                    r3 = (u32)rd8(r27 + r3);
                    if (r3 < ((rd32((u32)param_3 + 0x3cu) >> 0x1cu) & 0xfu)) {
                        a.f[0] = f29;
                        a.r[0] = r26 + rd32(r26 + 8u);
                        a.r[1] = (u32)rd16(r26 + 4u);
                        r3 = tc_call(0x802eda34u, &a);
                        r19 = (r3 << 2u) & 0x3fffcu;
                        if (rd32(r23 + r19) != 0u) {
                            r26 = (u32)rd8(r26);
                            a.r[0] = (u32)param_3;
                            r3 = tc_call(0x802ebf6cu, &a);
                            f1 = tc_lastf();
                            r3 = r3 + (r26 * 0x1cu);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = r3;
                            a.r[1] = rd32(r23 + r19);
                            a.r[2] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x802ed8b0u, &a);
                        }
                    }
                    r24 = r24 + 4u;
                    r29 = r29 + 1u;
                }
            }
        } else if (!c0lt) {
            if (r3 == 0x524c5453u) {
                f29 = (f64)rdf32(param_1 + 0x10u);
                r29 = 0u;
                while ((s32)r29 < (s32)rd8(r27 + 4u)) {
                    r3 = rd32(r24);
                    r23 = r27 + r3;
                    r3 = (u32)rd8(r27 + r3);
                    if (r3 < ((rd32((u32)param_3 + 0x38u) >> 0x18u) & 0xfu)) {
                        a.f[0] = f29;
                        a.r[0] = r23 + rd32(r23 + 8u);
                        a.r[1] = (u32)rd16(r23 + 4u);
                        f1 = tc_callf(0x802edb1cu, &a);
                        r19 = (u32)rd8(r23 + 1u);
                        r23 = (u32)rd8(r23);
                        a.r[0] = (u32)param_3;
                        r3 = tc_call(0x802ebf74u, &a);
                        r3 = r3 + (r23 * 0x14u);
                        wrf32d(r3 + ((r19 << 2u) & 0xfffffffcu), f1);
                    }
                    r24 = r24 + 4u;
                    r29 = r29 + 1u;
                }
            }
        } else {
            c0lt = (s32)r3 < 1380732227;
            if (r3 == 0x524c4d43u) {
                r19 = 0u;
                f31 = (f64)rdf32(param_1 + 0x10u);
                if ((s32)rd8(r27 + 4u) > 0) {
                    while ((s32)r19 < (s32)rd8(r27 + 4u)) {
                        r23 = r27 + rd32(r24);
                        a.f[0] = f31;
                        a.r[0] = r23 + rd32(r23 + 8u);
                        a.r[1] = (u32)rd16(r23 + 4u);
                        f1 = tc_callf(0x802edb1cu, &a);
                        px_q(0u, 0x817fdf88u, (f64)(f32)(f1 + f30));
                        r6 = 0xfffffc00u;
                        r0 = (u32)(s16)rd16(0x817fdf88u);
                        if ((s32)r0 >= -1024) {
                            r6 = r0;
                        }
                        r4 = (u32)rd8(r23 + 1u);
                        r5 = 0x3ffu;
                        if ((s32)(s16)r6 <= 1023) {
                            r5 = r6;
                        }
                        r5 = (u32)(s16)r5;
                        a.r[0] = (u32)param_3;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        (void)tc_call(0x802ec528u, &a);
                        r24 = r24 + 4u;
                        r19 = r19 + 1u;
                    }
                }
            } else if (c0lt && r3 == 0x524c494du) {
                f29 = (f64)rdf32(param_1 + 0x10u);
                r29 = 0u;
                while ((s32)r29 < (s32)rd8(r27 + 4u)) {
                    r3 = rd32(r24);
                    r23 = r27 + r3;
                    r3 = (u32)rd8(r27 + r3);
                    if (r3 < ((rd32((u32)param_3 + 0x38u) >> 0x12u) & 3u)) {
                        a.f[0] = f29;
                        a.r[0] = r23 + rd32(r23 + 8u);
                        a.r[1] = (u32)rd16(r23 + 4u);
                        f1 = tc_callf(0x802edb1cu, &a);
                        r19 = (u32)rd8(r23 + 1u);
                        r23 = (u32)rd8(r23);
                        a.r[0] = (u32)param_3;
                        r3 = tc_call(0x802ec130u, &a);
                        r3 = r3 + (r23 * 0x14u);
                        wrf32d(r3 + ((r19 << 2u) & 0xfffffffcu), f1);
                    }
                    r24 = r24 + 4u;
                    r29 = r29 + 1u;
                }
            }
        }
        r25 = r25 + 4u;
        r22 = r22 + 1u;
    }
    return;
}
