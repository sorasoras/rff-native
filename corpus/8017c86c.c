#include "tc_rt.h"

void fn_8017c86c(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6, u32 param_7)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r31 = 0;
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r6 = (u32)param_6;
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    if (param_4 <= 8u) {
        f29 = (f64)(f32)(param_2 - param_1);
        r28 = 0x3cu - ((u32)param_6 + (u32)rd8(((param_4 << 2u) & 0xfffffffcu) - 0x7fb6d800u + (param_7 & 0xffu) + 0x39cu));
        if ((s32)r28 >= 0) {
            if (param_6 > 60) {
                r6 = 0x3cu;
            }
            r28 = r6;
        } else {
            r28 = (u32)param_6 + r28;
            if ((s32)r28 < 0) {
                r28 = 0u;
            }
        }
        f30 = (f64)rdf32(0x80575030u);
        f31 = (f64)rdf32(0x8057502cu);
        r31 = param_3 + 0x10000u;
        r27 = 0u;
        while ((s32)r27 < (s32)r28) {
            r26 = 0u;
            r25 = 1u;
            r3 = tc_call(0x80040b64u, &a);
            r24 = r3 - (((ppc_mulhwu(0x8d3dcb09u, r3) >> 4u) & 0xfffffffu) * 0x1du);
            while (r26 == 0u) {
                r23 = r24;
                r3 = r24 * 0x14u;
                ctr = 0x1eu - r24;
                do {
                    if (r24 < 0x1eu) {
                        for (;;) {
                            r5 = r31 + r3;
                            if ((s32)(s16)rd16(r5 + 0x36au) < (s32)(s16)rd16(r5 + 0x368u)) {
                                fl_ = 2u;
                                break;
                            }
                            r23 = r23 + 1u;
                            r3 = r3 + 0x14u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 1u;
                                break;
                            }
                        }
                        if (fl_ == 2u) {
                            fl_ = 0u;
                        } else if (fl_ == 1u) {
                            fl_ = 0u;
                            break;
                        }
                        r0 = rd32(r5 + 0x35cu);
                        wr32(0x817fdf78u, rd32(r5 + 0x358u));
                        wr32(0x817fdf7cu, r0);
                        wr32(0x817fdf80u, rd32(r5 + 0x360u));
                        f1 = tc_callf(0x80040a00u, &a);
                        f1 = (f64)(f32)(f1 - f30);
                        wrf32d(0x817fdf78u, ppc_fmadds((f64)rdf32(param_3 + 0x10000u + (r23 * 0x14u) + 0x364u), (f64)(f32)(f31 * f1), (f64)rdf32(0x817fdf78u)));
                        f1 = tc_callf(0x80040a00u, &a);
                        f1 = (f64)(f32)(f1 - f30);
                        wrf32d(0x817fdf80u, ppc_fmadds((f64)rdf32(param_3 + 0x10000u + (r23 * 0x14u) + 0x364u), (f64)(f32)(f31 * f1), (f64)rdf32(0x817fdf80u)));
                        a.r[0] = param_3;
                        a.r[1] = param_7;
                        r3 = tc_call(0x8017c6d4u, &a);
                        r26 = r3;
                        if (r3 == 0u) {
                            r3 = ((param_4 << 2u) & 0xfffffffcu) - 0x7fb6d800u + (param_7 & 0xffu);
                            r0 = (u32)rd8(r3 + 0x39cu) + r27;
                            if (r0 > 0x3cu) {
                                wr8(r3 + 0x39cu, 0x3cu);
                            } else {
                                wr8(r3 + 0x39cu, (u8)r0);
                            }
                            return;
                        }
                        a.r[0] = r3;
                        a.r[1] = 0x817fdf78u;
                        a.r[2] = param_7;
                        (void)tc_call(0x8017e7ccu, &a);
                        a.r[0] = param_3;
                        a.r[1] = r26;
                        (void)tc_call(0x8017d20cu, &a);
                        wr32(r26 + 0x8cu, r23);
                        wr32(param_3 + 0x8cu, rd32(param_3 + 0x8cu) + 1u);
                        f1 = tc_callf(0x80040a00u, &a);
                        f1 = (f64)(f32)(param_1 + (f64)(f32)(f29 * f1));
                        a.f[0] = f1;
                        a.r[0] = r26;
                        a.r[1] = param_5;
                        (void)tc_call(0x8017fc78u, &a);
                        r26 = 1u;
                    }
                } while (0);
                if (r26 == 0u) {
                    r25 = r25 - 1u;
                    r24 = 0u;
                    if ((s32)r25 < 0) {
                        r3 = ((param_4 << 2u) & 0xfffffffcu) - 0x7fb6d800u + (param_7 & 0xffu);
                        r0 = (u32)rd8(r3 + 0x39cu) + r27;
                        if (r0 > 0x3cu) {
                            wr8(r3 + 0x39cu, 0x3cu);
                        } else {
                            wr8(r3 + 0x39cu, (u8)r0);
                        }
                        return;
                    }
                }
            }
            r27 = r27 + 1u;
        }
        r3 = ((param_4 << 2u) & 0xfffffffcu) - 0x7fb6d800u + (param_7 & 0xffu);
        r0 = (u32)rd8(r3 + 0x39cu) + r28;
        if (r0 > 0x3cu) {
            wr8(r3 + 0x39cu, 0x3cu);
            return;
        }
        wr8(r3 + 0x39cu, (u8)r0);
        return;
    }
    return;
}
