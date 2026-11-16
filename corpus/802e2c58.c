#include "tc_rt.h"

void fn_802e2c58(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdd70u, 0x817fe000u);
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
    wr32(0x817fdf34u, 0u);
    wr32(0x817fdf38u, 0u);
    wr32(0x817fdf3cu, 0u);
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    f0 = (f64)rdf32(0x80577440u);
    wrf32d(0x817fdd84u, (f64)rdf32(param_1 + 0x2cu));
    f28 = (f64)rdf32(param_1 + 0x30u);
    wrf32d(0x817fdd80u, f28);
    f1 = (f64)rdf32(param_1 + 0x4cu);
    r27 = param_2;
    r29 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
    r26 = param_2;
    r28 = 0u;
    a.r[0] = param_1;
    a.r[1] = 0x817fdd84u;
    a.r[2] = 0x817fdd80u;
    a.r[3] = param_2;
    a.r[4] = (u32)param_3;
    f1 = tc_callf(0x802e36e4u, &a);
    f0 = (f64)rdf32(param_1 + 0x30u);
    f2 = (f64)rdf32(0x817fdd84u);
    f25 = f1;
    wr32(0x817fdde4u, 0u);
    f26 = (f64)(f32)(f28 - f0);
    f0 = (f64)rdf32(0x817fdd80u);
    wr32(0x817fdde8u, 0u);
    wr32(0x817fddecu, 0u);
    wr32(0x817fdddcu, param_1);
    wr32(0x817fdde0u, param_2);
    wrf32d(0x817fdde4u, f2);
    wrf32d(0x817fdde8u, f0);
    a.r[0] = 0x817fddb8u;
    a.r[1] = rd32(param_1 + 0x48u);
    (void)tc_call(0x802e2340u, &a);
    wr32(0x817fddb8u, param_2);
    a.r[0] = 0x817fddb8u;
    r3 = tc_call(0x802558bcu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    f2 = 0.0;
    f29 = (f64)rdf32(0x80577444u);
    r25 = r3;
    f30 = (f64)rdf32(0x80577450u);
    f31 = rdf64(0x80577448u);
    for (;;) {
        r7 = rd32(0x817fddb8u);
        r3 = r7 - param_2;
        if (((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1) > param_3) break;
        r5 = r25 & 0xffffu;
        if ((s32)r5 >= 32) {
            f27 = (f64)rdf32(param_1 + 0x30u);
            if (r29 != 0u && r27 != r26) {
                f24 = (f64)rdf32(param_1 + 0x2cu);
                if (r28 == 0u) {
                    f23 = (f64)rdf32(0x80577444u);
                } else {
                    f23 = (f64)rdf32(param_1 + 0x50u);
                }
                if ((u32)rd8(param_1 + 0x43u) == 0u) {
                    r3 = rd32(param_1 + 0x48u);
                    f22 = (f64)rdf32(param_1 + 0x24u);
                    a.r[0] = r3;
                    a.r[1] = r25 & 0xffffu;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.r[4] = r7;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    r3 = tc_call(rd32(rd32(r3) + 0x48u), &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r7 = 0u;
                    wr32(0x817fdf20u, 0x43300000u);
                    wr32(0x817fdf24u, r3 ^ 0x80000000u);
                    f2 = (f64)(f32)((f64)(f32)(rdf64(0x817fdf20u) - f31) * f22);
                } else {
                    f2 = (f64)rdf32(param_1 + 0x44u);
                }
                f1 = (f64)(f32)(f2 + (f64)(f32)(f23 + (f64)(f32)(f24 - (f64)rdf32(0x817fdd84u))));
                if (f1 > (f64)rdf32(param_1 + 0x4cu)) {
                    wr32(0x817fddb8u, r27);
                    r25 = 0xau;
                    continue;
                }
            }
            if (r28 != 0u) {
                f1 = (f64)rdf32(param_1 + 0x50u);
                wrf32d(param_1 + 0x2cu, (f64)(f32)((f64)rdf32(param_1 + 0x2cu) + f1));
            }
            r3 = rd32(param_1 + 0x48u);
            r28 = 1u;
            f22 = (f64)rdf32(param_1 + 0x28u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = r7;
            a.f[0] = f1;
            a.f[1] = f2;
            r3 = tc_call(rd32(rd32(r3) + 0x1cu), &a);
            wr32(0x817fdf20u, 0x43300000u);
            f0 = (f64)rdf32(param_1 + 0x30u);
            wr32(0x817fdf24u, (0u - r3) ^ 0x80000000u);
            f0 = (f64)(f32)(f0 + (f64)(f32)((f64)(f32)(rdf64(0x817fdf20u) - f31) * f22));
            wrf32d(param_1 + 0x30u, f0);
            a.r[0] = param_1;
            a.r[1] = r25 & 0xffffu;
            (void)tc_call(0x802e1a7cu, &a);
            wrf32d(param_1 + 0x30u, f27);
        } else {
            r6 = (ppc_cntlzw(r28) >> 5u) & 0x7ffffffu;
            wr32(0x817fdde0u, r7);
            wr32(0x817fddecu, r6);
            if (r29 != 0u && r5 != 0xau && r27 != r26) {
                r3 = rd32(0x817fdde4u);
                r0 = rd32(0x817fdde8u);
                wr32(0x817fddc8u, rd32(0x817fdddcu));
                wr32(0x817fddccu, r7);
                wr32(0x817fddd0u, r3);
                wr32(0x817fddd4u, r0);
                wr32(0x817fddd8u, r6);
                wr8(0x817fdeb8u, rd8(param_1));
                wr8(0x817fdeb9u, rd8(param_1 + 1u));
                wr8(0x817fdebau, rd8(param_1 + 2u));
                wr8(0x817fdebbu, rd8(param_1 + 3u));
                wr8(0x817fdebcu, rd8(param_1 + 4u));
                wr8(0x817fdebdu, rd8(param_1 + 5u));
                wr8(0x817fdebeu, rd8(param_1 + 6u));
                wr8(0x817fdebfu, rd8(param_1 + 7u));
                wr8(0x817fdec0u, rd8(param_1 + 8u));
                wr8(0x817fdec1u, rd8(param_1 + 9u));
                wr8(0x817fdec2u, rd8(param_1 + 0xau));
                wr8(0x817fdec3u, rd8(param_1 + 0xbu));
                wr8(0x817fdec4u, rd8(param_1 + 0xcu));
                wr8(0x817fdec5u, rd8(param_1 + 0xdu));
                wr8(0x817fdec6u, rd8(param_1 + 0xeu));
                wr8(0x817fdec7u, rd8(param_1 + 0xfu));
                wr8(0x817fdec8u, rd8(param_1 + 0x10u));
                wr8(0x817fdec9u, rd8(param_1 + 0x11u));
                wr8(0x817fdecau, rd8(param_1 + 0x12u));
                wr8(0x817fdecbu, rd8(param_1 + 0x13u));
                wr8(0x817fdeccu, rd8(param_1 + 0x14u));
                wr8(0x817fdecdu, rd8(param_1 + 0x15u));
                wr8(0x817fdeceu, rd8(param_1 + 0x16u));
                wr8(0x817fdecfu, rd8(param_1 + 0x17u));
                wr8(0x817fded0u, rd8(param_1 + 0x18u));
                wr8(0x817fded1u, rd8(param_1 + 0x19u));
                wr8(0x817fded2u, rd8(param_1 + 0x1au));
                wr8(0x817fded3u, rd8(param_1 + 0x1bu));
                wr8(0x817fded4u, rd8(param_1 + 0x1cu));
                wr8(0x817fded5u, rd8(param_1 + 0x1du));
                wr8(0x817fded6u, rd8(param_1 + 0x1eu));
                wr8(0x817fded7u, rd8(param_1 + 0x1fu));
                wr32(0x817fded8u, rd32(param_1 + 0x20u));
                r0 = rd32(param_1 + 0x28u);
                wr32(0x817fdedcu, rd32(param_1 + 0x24u));
                wr32(0x817fdee0u, r0);
                r0 = rd32(param_1 + 0x30u);
                wr32(0x817fdee4u, rd32(param_1 + 0x2cu));
                wr32(0x817fdee8u, r0);
                wr32(0x817fdeecu, rd32(param_1 + 0x34u));
                r0 = rd32(param_1 + 0x3cu);
                wr32(0x817fdef0u, rd32(param_1 + 0x38u));
                wr32(0x817fdef4u, r0);
                wr8(0x817fdef8u, rd8(param_1 + 0x40u));
                wr8(0x817fdef9u, rd8(param_1 + 0x41u));
                wr8(0x817fdefau, rd8(param_1 + 0x42u));
                wr8(0x817fdefbu, rd8(param_1 + 0x43u));
                wrf32d(0x817fdefcu, (f64)rdf32(param_1 + 0x44u));
                wr32(0x817fdf00u, rd32(param_1 + 0x48u));
                wrf32d(0x817fdf04u, (f64)rdf32(param_1 + 0x4cu));
                wrf32d(0x817fdf08u, (f64)rdf32(param_1 + 0x50u));
                wrf32d(0x817fdf0cu, (f64)rdf32(param_1 + 0x54u));
                wr32(0x817fdf10u, rd32(param_1 + 0x58u));
                wr32(0x817fdf14u, rd32(param_1 + 0x5cu));
                wr32(0x817fdf18u, rd32(param_1 + 0x60u));
                wrf32d(0x817fdda8u, f29);
                wrf32d(0x817fddacu, f29);
                wrf32d(0x817fddb0u, f29);
                wrf32d(0x817fddb4u, f29);
                wr32(0x817fddc8u, 0x817fdeb8u);
                r3 = rd32(param_1 + 0x60u);
                a.r[0] = r3;
                a.r[1] = 0x817fdda8u;
                a.r[2] = r5;
                a.r[3] = 0x817fddc8u;
                a.r[4] = r7;
                a.f[0] = f1;
                a.f[1] = f2;
                (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
                if ((f64)(f32)((f64)rdf32(0x817fddb0u) - (f64)rdf32(0x817fdda8u)) > f29 && (f64)(f32)((f64)rdf32(0x817fdee4u) - (f64)rdf32(0x817fdde4u)) > (f64)rdf32(param_1 + 0x4cu)) {
                    wr32(0x817fddb8u, r27);
                    r25 = 0xau;
                    a.r[0] = 0x817fdeb8u;
                    a.r[1] = 0u;
                    f1 = tc_callf(0x802e0e00u, &a);
                    r4 = tc_lastr4();
                    f2 = 0.0;
                    continue;
                }
                a.r[0] = 0x817fdeb8u;
                a.r[1] = 0u;
                f1 = tc_callf(0x802e0e00u, &a);
                r6 = 0u;
                r7 = 0u;
                f2 = 0.0;
            }
            r3 = rd32(param_1 + 0x60u);
            a.r[0] = r3;
            a.r[1] = r25 & 0xffffu;
            a.r[2] = 0x817fdddcu;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = f1;
            a.f[1] = f2;
            r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
            if (r3 != 3u) {
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        if (r3 == 4u) break;
                    } else {
                        r28 = 1u;
                    }
                } else {
                    r28 = 0u;
                }
            } else {
                r0 = rd32(param_1 + 0x5cu) & 3u;
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        f1 = (f64)(f32)((f64)rdf32(param_1 + 0x2cu) - (f64)rdf32(0x817fdde4u));
                        if (!(f25 < f1)) {
                            f1 = f25;
                        }
                        f25 = f1;
                        wrf32d(param_1 + 0x2cu, (f64)rdf32(0x817fdde4u));
                    } else {
                        r0 = rd32(0x817fdde0u);
                        wrf32d(0x817fdd88u, f29);
                        wr32(0x817fdd78u, r0);
                        wrf32d(0x817fdd8cu, f29);
                        wrf32d(0x817fdd90u, f29);
                        wrf32d(0x817fdd94u, f29);
                        wr8(0x817fddf0u, rd8(param_1));
                        wr8(0x817fddf1u, rd8(param_1 + 1u));
                        wr8(0x817fddf2u, rd8(param_1 + 2u));
                        wr8(0x817fddf3u, rd8(param_1 + 3u));
                        wr8(0x817fddf4u, rd8(param_1 + 4u));
                        wr8(0x817fddf5u, rd8(param_1 + 5u));
                        wr8(0x817fddf6u, rd8(param_1 + 6u));
                        wr8(0x817fddf7u, rd8(param_1 + 7u));
                        wr8(0x817fddf8u, rd8(param_1 + 8u));
                        wr8(0x817fddf9u, rd8(param_1 + 9u));
                        wr8(0x817fddfau, rd8(param_1 + 0xau));
                        wr8(0x817fddfbu, rd8(param_1 + 0xbu));
                        wr8(0x817fddfcu, rd8(param_1 + 0xcu));
                        wr8(0x817fddfdu, rd8(param_1 + 0xdu));
                        wr8(0x817fddfeu, rd8(param_1 + 0xeu));
                        wr8(0x817fddffu, rd8(param_1 + 0xfu));
                        wr8(0x817fde00u, rd8(param_1 + 0x10u));
                        wr8(0x817fde01u, rd8(param_1 + 0x11u));
                        wr8(0x817fde02u, rd8(param_1 + 0x12u));
                        wr8(0x817fde03u, rd8(param_1 + 0x13u));
                        wr8(0x817fde04u, rd8(param_1 + 0x14u));
                        wr8(0x817fde05u, rd8(param_1 + 0x15u));
                        wr8(0x817fde06u, rd8(param_1 + 0x16u));
                        wr8(0x817fde07u, rd8(param_1 + 0x17u));
                        wr8(0x817fde08u, rd8(param_1 + 0x18u));
                        wr8(0x817fde09u, rd8(param_1 + 0x19u));
                        wr8(0x817fde0au, rd8(param_1 + 0x1au));
                        wr8(0x817fde0bu, rd8(param_1 + 0x1bu));
                        wr8(0x817fde0cu, rd8(param_1 + 0x1cu));
                        wr8(0x817fde0du, rd8(param_1 + 0x1du));
                        wr8(0x817fde0eu, rd8(param_1 + 0x1eu));
                        wr8(0x817fde0fu, rd8(param_1 + 0x1fu));
                        wr32(0x817fde10u, rd32(param_1 + 0x20u));
                        r3 = rd32(param_1 + 0x28u);
                        wr32(0x817fde14u, rd32(param_1 + 0x24u));
                        wr32(0x817fde18u, r3);
                        r3 = rd32(param_1 + 0x30u);
                        wr32(0x817fde1cu, rd32(param_1 + 0x2cu));
                        wr32(0x817fde20u, r3);
                        wr32(0x817fde24u, rd32(param_1 + 0x34u));
                        r3 = rd32(param_1 + 0x3cu);
                        wr32(0x817fde28u, rd32(param_1 + 0x38u));
                        wr32(0x817fde2cu, r3);
                        wr8(0x817fde30u, rd8(param_1 + 0x40u));
                        wr8(0x817fde31u, rd8(param_1 + 0x41u));
                        wr8(0x817fde32u, rd8(param_1 + 0x42u));
                        wr8(0x817fde33u, rd8(param_1 + 0x43u));
                        wrf32d(0x817fde34u, (f64)rdf32(param_1 + 0x44u));
                        r4 = r0 - param_2;
                        wr32(0x817fde38u, rd32(param_1 + 0x48u));
                        wrf32d(0x817fde3cu, (f64)rdf32(param_1 + 0x4cu));
                        wrf32d(0x817fde40u, (f64)rdf32(param_1 + 0x50u));
                        wrf32d(0x817fde44u, (f64)rdf32(param_1 + 0x54u));
                        wr32(0x817fde48u, rd32(param_1 + 0x58u));
                        wr32(0x817fde4cu, rd32(param_1 + 0x5cu));
                        wr32(0x817fde50u, rd32(param_1 + 0x60u));
                        wrf32d(0x817fde1cu, f29);
                        wrf32d(0x817fde20u, f29);
                        a.r[0] = 0x817fddf0u;
                        a.r[1] = 0x817fdd88u;
                        a.r[2] = 0x817fdd78u;
                        a.r[3] = (u32)param_3 - (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
                        (void)tc_call(0x802e24b0u, &a);
                        f27 = (f64)(f32)((f64)rdf32(0x817fdd90u) - (f64)rdf32(0x817fdd88u));
                        a.r[0] = 0x817fddf0u;
                        a.r[1] = 0u;
                        (void)tc_call(0x802e0e00u, &a);
                        wrf32d(param_1 + 0x2cu, (f64)(f32)((f64)rdf32(0x817fdde4u) + (f64)(f32)(f25 - f27)));
                    }
                } else {
                    r0 = rd32(0x817fdde0u);
                    wrf32d(0x817fdd98u, f29);
                    wr32(0x817fdd7cu, r0);
                    wrf32d(0x817fdd9cu, f29);
                    wrf32d(0x817fdda0u, f29);
                    wrf32d(0x817fdda4u, f29);
                    wr8(0x817fde54u, rd8(param_1));
                    wr8(0x817fde55u, rd8(param_1 + 1u));
                    wr8(0x817fde56u, rd8(param_1 + 2u));
                    wr8(0x817fde57u, rd8(param_1 + 3u));
                    wr8(0x817fde58u, rd8(param_1 + 4u));
                    wr8(0x817fde59u, rd8(param_1 + 5u));
                    wr8(0x817fde5au, rd8(param_1 + 6u));
                    wr8(0x817fde5bu, rd8(param_1 + 7u));
                    wr8(0x817fde5cu, rd8(param_1 + 8u));
                    wr8(0x817fde5du, rd8(param_1 + 9u));
                    wr8(0x817fde5eu, rd8(param_1 + 0xau));
                    wr8(0x817fde5fu, rd8(param_1 + 0xbu));
                    wr8(0x817fde60u, rd8(param_1 + 0xcu));
                    wr8(0x817fde61u, rd8(param_1 + 0xdu));
                    wr8(0x817fde62u, rd8(param_1 + 0xeu));
                    wr8(0x817fde63u, rd8(param_1 + 0xfu));
                    wr8(0x817fde64u, rd8(param_1 + 0x10u));
                    wr8(0x817fde65u, rd8(param_1 + 0x11u));
                    wr8(0x817fde66u, rd8(param_1 + 0x12u));
                    wr8(0x817fde67u, rd8(param_1 + 0x13u));
                    wr8(0x817fde68u, rd8(param_1 + 0x14u));
                    wr8(0x817fde69u, rd8(param_1 + 0x15u));
                    wr8(0x817fde6au, rd8(param_1 + 0x16u));
                    wr8(0x817fde6bu, rd8(param_1 + 0x17u));
                    wr8(0x817fde6cu, rd8(param_1 + 0x18u));
                    wr8(0x817fde6du, rd8(param_1 + 0x19u));
                    wr8(0x817fde6eu, rd8(param_1 + 0x1au));
                    wr8(0x817fde6fu, rd8(param_1 + 0x1bu));
                    wr8(0x817fde70u, rd8(param_1 + 0x1cu));
                    wr8(0x817fde71u, rd8(param_1 + 0x1du));
                    wr8(0x817fde72u, rd8(param_1 + 0x1eu));
                    wr8(0x817fde73u, rd8(param_1 + 0x1fu));
                    wr32(0x817fde74u, rd32(param_1 + 0x20u));
                    r3 = rd32(param_1 + 0x28u);
                    wr32(0x817fde78u, rd32(param_1 + 0x24u));
                    wr32(0x817fde7cu, r3);
                    r3 = rd32(param_1 + 0x30u);
                    wr32(0x817fde80u, rd32(param_1 + 0x2cu));
                    wr32(0x817fde84u, r3);
                    wr32(0x817fde88u, rd32(param_1 + 0x34u));
                    r3 = rd32(param_1 + 0x3cu);
                    wr32(0x817fde8cu, rd32(param_1 + 0x38u));
                    wr32(0x817fde90u, r3);
                    wr8(0x817fde94u, rd8(param_1 + 0x40u));
                    wr8(0x817fde95u, rd8(param_1 + 0x41u));
                    wr8(0x817fde96u, rd8(param_1 + 0x42u));
                    wr8(0x817fde97u, rd8(param_1 + 0x43u));
                    wrf32d(0x817fde98u, (f64)rdf32(param_1 + 0x44u));
                    r4 = r0 - param_2;
                    wr32(0x817fde9cu, rd32(param_1 + 0x48u));
                    wrf32d(0x817fdea0u, (f64)rdf32(param_1 + 0x4cu));
                    wrf32d(0x817fdea4u, (f64)rdf32(param_1 + 0x50u));
                    wrf32d(0x817fdea8u, (f64)rdf32(param_1 + 0x54u));
                    wr32(0x817fdeacu, rd32(param_1 + 0x58u));
                    wr32(0x817fdeb0u, rd32(param_1 + 0x5cu));
                    wr32(0x817fdeb4u, rd32(param_1 + 0x60u));
                    wrf32d(0x817fde80u, f29);
                    wrf32d(0x817fde84u, f29);
                    a.r[0] = 0x817fde54u;
                    a.r[1] = 0x817fdd98u;
                    a.r[2] = 0x817fdd7cu;
                    a.r[3] = (u32)param_3 - (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
                    (void)tc_call(0x802e24b0u, &a);
                    f27 = (f64)(f32)((f64)rdf32(0x817fdda0u) - (f64)rdf32(0x817fdd98u));
                    a.r[0] = 0x817fde54u;
                    a.r[1] = 0u;
                    (void)tc_call(0x802e0e00u, &a);
                    wrf32d(param_1 + 0x2cu, (f64)(f32)((f64)rdf32(0x817fdde4u) + (f64)(f32)((f64)(f32)(f25 - f27) * f30)));
                }
                if (r29 != 0u) {
                    r26 = rd32(0x817fddb8u);
                }
                r28 = 0u;
            }
            wr32(0x817fddb8u, rd32(0x817fdde0u));
        }
        if (r29 != 0u) {
            r27 = rd32(0x817fddb8u);
        }
        a.r[0] = 0x817fddb8u;
        r3 = tc_call(0x802558bcu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        f2 = 0.0;
        r25 = r3;
    }
    (void)(!(f25 < (f64)(f32)((f64)rdf32(param_1 + 0x2cu) - (f64)rdf32(0x817fdde4u))));
    r0 = rd32(param_1 + 0x5cu) & 0x300u;
    if (r0 == 0x100u || r0 == 0x200u) {
        wrf32d(param_1 + 0x30u, f28);
    } else if ((u32)param_4 == 0u) {
        wrf32d(param_1 + 0x30u, (f64)(f32)((f64)rdf32(param_1 + 0x30u) + f26));
    } else if (r0 == 0u) {
        f22 = (f64)rdf32(param_1 + 0x30u);
        a.r[0] = param_1;
        f1 = tc_callf(0x802e1a1cu, &a);
        wrf32d(param_1 + 0x30u, (f64)(f32)(f22 - f1));
    }
    return;
}
