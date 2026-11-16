#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802ff570(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0;
    f64 f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdef0u, 0x817fe000u);
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
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, 0.0);
    wrf32d(0x817fdf8cu, 0.0);
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, 0.0);
    wrf32d(0x817fdf7cu, 0.0);
    wrf64(0x817fdf60u, 0.0);
    wrf32d(0x817fdf68u, 0.0);
    wrf32d(0x817fdf6cu, 0.0);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf28u, 0x43300000u);
    wr32(0x817fdf30u, 0x43300000u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if ((u32)rd8(param_r3 + 5u) != 0u) {
        if (rd32(param_r3 + 0xf0u) != 0u) {
            r4 = (u32)(s16)rd16(param_r3 + 0xa6u);
            r3 = (u32)(s16)rd16(param_r3 + 0xa8u);
            f28 = (f64)rdf32(0x805776c8u);
            if ((s32)r3 < (s32)r4) {
                r5 = (u32)rd8(param_r3 + 0xa4u);
                r0 = (r5 + (u32)ppc_divw((s32)(r3 * ((u32)rd8(param_r3 + 0xa5u) - r5)), (s32)r4)) & 0xffu;
            } else {
                r0 = (u32)rd8(param_r3 + 0xa5u);
            }
            wr32(0x817fdf2cu, r0);
            r3 = rd32(param_r3 + 0xecu);
            wr32(0x817fdf34u, (u32)rd8(param_r3 + 0xb6u));
            f8 = rdf64(0x805776e8u);
            f0 = rdf64(0x817fdf30u);
            f1 = (f64)(f32)(rdf64(0x817fdf28u) - f8);
            f7 = (f64)rdf32(0x805776d0u);
            wr32(0x817fdf2cu, (u32)rd8(r3 + 0x104u));
            f0 = (f64)(f32)(f0 - f8);
            f2 = (f64)(f32)px_fdiv(f1, f7);
            r0 = (u32)rd8(param_r3 + 0xb9u);
            f26 = (f64)rdf32(0x805776c8u);
            f6 = (f64)(f32)(rdf64(0x817fdf28u) - f8);
            wr32(0x817fdf34u, (u32)(s8)rd8(param_r3 + 0xb8u) ^ 0x80000000u);
            f9 = (f64)(f32)px_fdiv(f0, f7);
            f3 = rdf64(0x805776f0u);
            f0 = rdf64(0x817fdf30u);
            wr32(0x817fdf2cu, r0);
            f10 = (f64)(f32)px_fdiv(f6, f7);
            r6 = (u32)(s16)rd16(param_r3 + 0xacu);
            r5 = (u32)(s16)rd16(param_r3 + 0xaeu);
            f3 = (f64)(f32)(f0 - f3);
            f26 = (f64)(f32)(f26 * (f64)rdf32(r3 + 8u));
            f28 = (f64)(f32)(f28 * (f64)(f32)(f2 * f2));
            f25 = (f64)rdf32(0x805776ccu);
            f28 = (f64)(f32)(f28 * (f64)(f32)(f9 * f9));
            f26 = (f64)(f32)(f26 * (f64)rdf32(param_r3 + 0xcu));
            f28 = (f64)(f32)(f28 * (f64)(f32)(f10 * f10));
            f27 = (f64)(f32)((f64)(f32)(f3 * (f64)rdf32(0x805776d4u)) * (f64)(f32)(rdf64(0x817fdf28u) - f8));
            f28 = (f64)(f32)(f28 * (f64)rdf32(param_r3 + 8u));
            f28 = (f64)(f32)(f28 * (f64)rdf32(r3 + 4u));
            if ((s32)r5 < (s32)r6) {
                r7 = (u32)rd8(param_r3 + 0xaau);
                r0 = (u32)(s8)(r7 + (u32)ppc_divw((s32)(r5 * ((u32)(s8)rd8(param_r3 + 0xabu) - (u32)(s8)r7)), (s32)r6));
            } else {
                r0 = (u32)(s8)rd8(param_r3 + 0xabu);
            }
            r0 = r0 ^ 0x80000000u;
            f2 = rdf64(0x805776f0u);
            wr32(0x817fdf34u, r0);
            f3 = (f64)rdf32(0x805776c8u);
            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf30u) - f2), (f64)rdf32(0x805776d8u));
            if (!(f0 > f3)) {
                f3 = (f64)rdf32(0x805776dcu);
                if (!(f0 < f3)) {
                    f3 = f0;
                }
            }
            f25 = (f64)(f32)(f25 + f3);
            f25 = (f64)(f32)(f25 * (f64)rdf32(param_r3 + 0x18u));
            r6 = (u32)(s16)rd16(param_r3 + 0xb2u);
            r5 = (u32)(s16)rd16(param_r3 + 0xb4u);
            f25 = (f64)(f32)(f25 * (f64)rdf32(r3 + 0xecu));
            f24 = (f64)rdf32(0x805776ccu);
            f25 = (f64)(f32)(f25 + (f64)rdf32(param_r3 + 0x10u));
            f25 = (f64)(f32)(f25 + (f64)rdf32(r3 + 0xcu));
            if ((s32)r5 < (s32)r6) {
                r7 = (u32)rd8(param_r3 + 0xb0u);
                r0 = (u32)(s8)(r7 + (u32)ppc_divw((s32)(r5 * ((u32)(s8)rd8(param_r3 + 0xb1u) - (u32)(s8)r7)), (s32)r6));
            } else {
                r0 = (u32)(s8)rd8(param_r3 + 0xb1u);
            }
            r0 = r0 ^ 0x80000000u;
            f2 = rdf64(0x805776f0u);
            wr32(0x817fdf2cu, r0);
            f3 = (f64)rdf32(0x805776e0u);
            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf28u) - f2), (f64)rdf32(0x805776d8u));
            if (!(f0 > f3)) {
                f3 = (f64)rdf32(0x805776ccu);
                if (!(f0 < f3)) {
                    f3 = f0;
                }
            }
            f24 = (f64)(f32)(f24 + f3);
            f23 = (f64)rdf32(0x805776ccu);
            r27 = param_r3;
            wr32(0x817fdf2cu, (u32)rd8(param_r3 + 0xc6u));
            r26 = 0x817fdf18u;
            f29 = rdf64(0x805776e8u);
            f0 = (f64)(f32)(rdf64(0x817fdf28u) - f29);
            f30 = (f64)rdf32(0x805776d0u);
            f24 = (f64)(f32)(f24 + (f64)rdf32(param_r3 + 0x14u));
            wr32(0x817fdf34u, ((u32)rd8(param_r3 + 0xcau) - 0x40u) ^ 0x80000000u);
            r28 = 0u;
            f24 = (f64)(f32)(f24 + (f64)rdf32(r3 + 0x10u));
            r29 = rd32(r3 + 0x18u);
            f22 = (f64)(f32)(f23 + (f64)(f32)((f64)(f32)px_fdiv(f0, f30) - (f64)rdf32(0x805776c8u)));
            f31 = (f64)rdf32(0x805776ccu);
            f23 = (f64)(f32)(f23 + (f64)(f32)((f64)(f32)(rdf64(0x817fdf30u) - rdf64(0x805776f0u)) * (f64)rdf32(0x805776e4u)));
            f22 = (f64)(f32)(f22 + (f64)rdf32(param_r3 + 0x20u));
            f23 = (f64)(f32)(f23 + (f64)rdf32(param_r3 + 0x1cu));
            f22 = (f64)(f32)(f22 + (f64)rdf32(r3 + 0x24u));
            f23 = (f64)(f32)(f23 + (f64)rdf32(r3 + 0x14u));
            do {
                f0 = (f64)rdf32(r27 + 0x24u);
                wr32(0x817fdf34u, (u32)rd8(param_r3 + r28 + 0xc7u));
                r3 = rd32(param_r3 + 0xecu);
                f2 = rdf64(0x817fdf30u);
                wrf32d(r26, f31);
                f2 = (f64)(f32)(f2 - f29);
                f2 = (f64)(f32)px_fdiv(f2, f30);
                f0 = (f64)(f32)((f64)(f32)((f64)(f32)f31 + f2) + f0);
                wrf32d(r26, f0);
                a.r[0] = r3;
                a.r[1] = r28;
                f1 = tc_callf(0x802f5d18u, &a);
                r28 = r28 + 1u;
                r27 = r27 + 4u;
                wrf32d(r26, (f64)(f32)((f64)rdf32(r26) + f1));
                r26 = r26 + 4u;
            } while ((s32)r28 < 3);
            f29 = (f64)rdf32(0x805776ccu);
            r26 = 0x817fdf08u;
            r27 = 0x817fdef8u;
            r28 = 0u;
            do {
                wrf32d(r26, f29);
                a.r[0] = rd32(param_r3 + 0xecu);
                a.r[1] = r28;
                f1 = tc_callf(0x802f5d48u, &a);
                f0 = (f64)rdf32(r26);
                wrf32d(r27, f29);
                f0 = (f64)(f32)(f0 + f1);
                r3 = rd32(param_r3 + 0xecu);
                wrf32d(r26, f0);
                a.r[0] = r3;
                a.r[1] = r28;
                f1 = tc_callf(0x802f5d58u, &a);
                r28 = r28 + 1u;
                r26 = r26 + 4u;
                wrf32d(r27, (f64)(f32)((f64)rdf32(r27) + f1));
                r27 = r27 + 4u;
            } while ((s32)r28 < 4);
            r31 = rd32(param_r3 + 0xf0u);
            f29 = (f64)rdf32(0x817fdf18u);
            f31 = (f64)rdf32(0x817fdf1cu);
            f30 = (f64)rdf32(0x817fdf20u);
            while (r31 != 0u) {
                wrf32d(r31 + 0x3cu, f28);
                r28 = r31;
                r27 = 0x817fdf08u;
                r26 = 0x817fdef8u;
                wrf32d(r31 + 0x9cu, f27);
                r25 = 0u;
                wrf32d(r31 + 0x40u, f26);
                wrf32d(r31 + 0x44u, f25);
                wrf32d(r31 + 0x48u, f24);
                wrf32d(r31 + 0x4cu, f23);
                wr32(r31 + 0x50u, r29);
                wr32(r31 + 0x54u, rd32(rd32(param_r3 + 0xecu) + 0x1cu));
                wrf32d(r31 + 0x58u, (f64)rdf32(rd32(param_r3 + 0xecu) + 0x20u));
                wrf32d(r31 + 0x5cu, f22);
                wrf32d(r31 + 0x60u, f29);
                wrf32d(r31 + 0x64u, f31);
                wrf32d(r31 + 0x68u, f30);
                do {
                    a.r[0] = rd32(param_r3 + 0xecu);
                    a.r[1] = r25;
                    f1 = tc_callf(0x802f5d38u, &a);
                    f0 = (f64)rdf32(r27);
                    r25 = r25 + 1u;
                    wrf32d(r28 + 0x6cu, f1);
                    f1 = (f64)rdf32(r26);
                    r27 = r27 + 4u;
                    wrf32d(r28 + 0x7cu, f0);
                    r26 = r26 + 4u;
                    wrf32d(r28 + 0x8cu, f1);
                    r28 = r28 + 4u;
                } while ((s32)r25 < 4);
                r25 = 0u;
                r28 = 0u;
                for (;;) {
                    r3 = rd32(param_r3 + 0xecu);
                    if ((s32)r25 >= (s32)rd32(r3 + 0x100u)) break;
                    a.r[0] = rd32(r31 + 0xecu);
                    a.r[1] = r25;
                    a.r[2] = r3 + r28 + 0x6cu;
                    (void)tc_call(0x8030c7d4u, &a);
                    r28 = r28 + 0x18u;
                    r25 = r25 + 1u;
                }
                wrf32d(r31 + 0x1cu, (f64)rdf32(param_r3 + 0x8cu));
                wrf32d(r31 + 0x20u, (f64)rdf32(param_r3 + 0x90u));
                wr32(r31 + 0x24u, rd32(param_r3 + 0x94u));
                wr8(r31 + 0x28u, rd8(param_r3 + 0x98u));
                wr8(r31 + 0x29u, rd8(param_r3 + 0x99u));
                wr8(r31 + 0x2au, rd8(param_r3 + 0x9au));
                wr8(r31 + 0x2bu, rd8(param_r3 + 0x9bu));
                wr8(r31 + 0x34u, rd8(param_r3 + 0x9cu));
                r31 = rd32(r31 + 0xf0u);
            }
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        } else {
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
        }
    } else {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
