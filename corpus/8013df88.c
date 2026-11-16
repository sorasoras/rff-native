#include "tc_rt.h"

void fn_8013df88(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r26 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r26 = rd32(param_1 + 0x25cu);
    if ((u32)rd8(0x8049912au) == r26 && (u32)rd8(0x8049912eu) != 0x21u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0xcu);
        a.r[0] = r3;
        a.r[1] = r26;
        a.r[2] = param_2;
        r3 = tc_call(0x800ed518u, &a);
        if ((r3 & 0xffu) != 0xdu) {
            a.r[0] = (u32)rd8(0x8049912eu);
            r3 = tc_call(0x800a4500u, &a);
            if (r3 != 0u && rd32(r3 + 0xb20u) == param_1) {
                wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xdbffffffu);
                wr32(r3 + 0xb20u, 0u);
            }
        } else {
            a.r[0] = (u32)rd8(0x8049912eu);
            a.r[1] = 0u;
            r3 = tc_call(0x800a4340u, &a);
            r26 = r3;
            if (r3 != 0u) {
                f1 = (f64)rdf32(0x8057442cu);
                wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x24000000u);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
                wr32(r26 + 0xb20u, param_1);
                a.f[0] = param_f1;
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = param_4;
                (void)tc_call(0x800f33f8u, &a);
                return;
            }
        }
    }
    r26 = rd32(param_1 + 0x25cu);
    if (r26 == 0xbu) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0xcu);
        a.r[0] = r3;
        a.r[1] = r26;
        a.r[2] = param_2;
        r3 = tc_call(0x800ed518u, &a);
        r0 = r3 & 0xffu;
        c0lt = (s32)r0 < 231;
        if (r0 == 0xe7u) {
            a.r[0] = 0x18u;
            r3 = tc_call(0x800a4500u, &a);
            r26 = r3;
            if (r3 != 0u) {
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0xcu);
                a.r[0] = r3;
                a.r[1] = 0x18u;
                a.r[2] = 0xa3u;
                r3 = tc_call(0x800ed39cu, &a);
                r4 = r3 & 0xffu;
                if (r4 != rd32(r26 + 0x100u)) {
                    a.r[0] = r26;
                    a.r[1] = r4;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    a.f[0] = param_f1;
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(r26) + 0x54u), &a);
                }
            }
        } else {
            a.r[0] = 0x18u;
            r3 = tc_call(0x800a4500u, &a);
            r26 = r3;
            if (r3 != 0u) {
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0xcu);
                a.r[0] = r3;
                a.r[1] = 0x18u;
                a.r[2] = 0xe7u;
                r3 = tc_call(0x800ed39cu, &a);
                r4 = r3 & 0xffu;
                if (r4 != rd32(r26 + 0x100u)) {
                    a.r[0] = r26;
                    a.r[1] = r4;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    a.f[0] = param_f1;
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(r26) + 0x54u), &a);
                }
            }
        }
    }
    a.f[0] = param_f1;
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    (void)tc_call(0x800f33f8u, &a);
    a.r[0] = rd32(param_1 + 0xacu);
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 0xcu);
    a.r[0] = r3;
    r3 = tc_call(0x800f2a0cu, &a);
    r3 = rd32(r3);
    r3 = r3 + (rd32(param_1 + 0x100u) * 0x24u);
    if (((u32)rd8(r3 + 3u) & 4u) != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x8013e23cu, &a);
    } else if (rd32(param_1 + 0x25cu) == rd32(0x8049b738u)) {
        r0 = rd32(param_1 + 0xb2cu);
        wr32(param_1 + 0xb20u, 1u);
        if (r0 == 0u) {
            wr32(param_1 + 0xb2cu, 1u);
            f1 = tc_callf(0x80040a00u, &a);
            f2 = (f64)rdf32(0x80574430u);
            f1 = ppc_fmadds(f2, f1, f2);
            wrf32d(param_1 + 0xb30u, (f64)(f32)((f64)rdf32(0x80574420u) * f1));
        }
    }
    return;
}
