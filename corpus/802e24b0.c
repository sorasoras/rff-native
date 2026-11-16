#include "tc_rt.h"

void fn_802e24b0(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r21 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde90u, 0x817fe000u);
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
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    f1 = (f64)rdf32(param_1 + 0x4cu);
    r31 = ((u32)param_4 << 1u) & 0xfffffffeu;
    f0 = (f64)rdf32(0x80577440u);
    r21 = rd32(param_3);
    r30 = r21 + r31;
    f31 = (f64)rdf32(0x80577444u);
    wr32(0x817fdeecu, param_1);
    r29 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
    wr32(0x817fdef4u, 0u);
    r28 = 0u;
    wr32(0x817fdef8u, 0u);
    wr32(0x817fdefcu, 0u);
    wr32(0x817fdef0u, r21);
    wrf32d(0x817fdec8u, f31);
    r4 = rd32(param_1 + 0x48u);
    wrf32d(0x817fdeccu, f31);
    wrf32d(0x817fded0u, f31);
    wrf32d(0x817fded4u, f31);
    a.r[0] = 0x817fdeb8u;
    a.r[1] = r4;
    f1 = tc_callf(0x802e2340u, &a);
    r4 = tc_lastr4();
    f0 = (f64)rdf32(0x80577444u);
    wrf32d(param_2, f0);
    wrf32d(param_2 + 8u, f0);
    r3 = rd32(param_1 + 0x48u);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x34u), &a);
        r4 = tc_lastr4();
    }
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdf6cu, r3);
    f2 = rdf64(0x80577448u);
    wr32(0x817fdf68u, 0x43300000u);
    f3 = (f64)rdf32(param_1 + 0x28u);
    f2 = (f64)(f32)(rdf64(0x817fdf68u) - f2);
    f0 = (f64)rdf32(0x80577444u);
    f2 = (f64)(f32)(f2 * f3);
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0x54u) + f2);
    if (!(f0 > f1)) {
        f1 = f0;
    }
    wrf32d(param_2 + 4u, f1);
    r3 = rd32(param_1 + 0x48u);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x34u), &a);
    }
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdf74u, r3);
    f2 = rdf64(0x80577448u);
    wr32(0x817fdf70u, 0x43300000u);
    f2 = (f64)(f32)(rdf64(0x817fdf70u) - f2);
    f0 = (f64)rdf32(0x80577444u);
    f2 = (f64)(f32)(f2 * (f64)rdf32(param_1 + 0x28u));
    f4 = (f64)(f32)((f64)rdf32(param_1 + 0x54u) + f2);
    if (!(f0 < f4)) {
        f4 = f0;
    }
    f3 = (f64)rdf32(param_2);
    f2 = (f64)rdf32(param_2 + 4u);
    f1 = (f64)rdf32(param_2 + 8u);
    wrf32d(param_2 + 0xcu, f4);
    r26 = 0u;
    wrf32d(0x817fdec8u, f3);
    wrf32d(0x817fdeccu, f2);
    wrf32d(0x817fded0u, f1);
    wrf32d(0x817fded4u, (f64)(f32)f4);
    wr32(0x817fdeb8u, r21);
    a.r[0] = 0x817fdeb8u;
    r3 = tc_call(0x802558bcu, &a);
    f1 = tc_lastf();
    f29 = (f64)rdf32(0x80577444u);
    r25 = r3;
    f30 = rdf64(0x80577448u);
    for (;;) {
        r3 = rd32(0x817fdeb8u);
        if (r3 > r30) break;
        r5 = r25 & 0xffffu;
        if ((s32)r5 >= 32) {
            f27 = (f64)rdf32(0x80577444u);
            if (r28 != 0u) {
                f27 = (f64)(f32)(f27 + (f64)rdf32(param_1 + 0x50u));
            }
            if ((u32)rd8(param_1 + 0x43u) == 0u) {
                r3 = rd32(param_1 + 0x48u);
                f28 = (f64)rdf32(param_1 + 0x24u);
                a.r[0] = r3;
                a.r[1] = r25 & 0xffffu;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x48u), &a);
                wr32(0x817fdf70u, 0x43300000u);
                wr32(0x817fdf74u, r3 ^ 0x80000000u);
                f27 = (f64)(f32)(f27 + (f64)(f32)((f64)(f32)(rdf64(0x817fdf70u) - f30) * f28));
            } else {
                f27 = (f64)(f32)(f27 + (f64)rdf32(param_1 + 0x44u));
            }
            if (r29 != 0u && r26 != 0u) {
                f1 = (f64)(f32)(f31 + f27);
                if (f1 > (f64)rdf32(param_1 + 0x4cu)) {
                    wr32(0x817fdeb8u, r26);
                    r25 = 0xau;
                    continue;
                }
            }
            f31 = (f64)(f32)(f31 + f27);
            f0 = (f64)rdf32(param_2);
            if (f0 > f31) {
                f0 = f31;
            }
            f1 = (f64)rdf32(param_2 + 8u);
            wrf32d(param_2, f0);
            if (f1 < f31) {
                f1 = f31;
            }
            wrf32d(param_2 + 8u, f1);
            r28 = 1u;
        } else {
            wrf32d(0x817fdea8u, f31);
            wrf32d(0x817fdeacu, f29);
            wrf32d(0x817fdeb0u, f29);
            wrf32d(0x817fdeb4u, f29);
            wr32(0x817fdef0u, r3);
            wr32(0x817fdefcu, (ppc_cntlzw(r28) >> 5u) & 0x7ffffffu);
            wrf32d(param_1 + 0x2cu, f31);
            if (r29 != 0u && r5 != 0xau && r26 != 0u) {
                r7 = rd32(0x817fdeecu);
                r6 = rd32(0x817fdef0u);
                r4 = rd32(0x817fdef4u);
                r3 = rd32(0x817fdef8u);
                r0 = rd32(0x817fdefcu);
                wr32(0x817fded8u, r7);
                wr32(0x817fdedcu, r6);
                wr32(0x817fdee0u, r4);
                wr32(0x817fdee4u, r3);
                wr32(0x817fdee8u, r0);
                wr8(0x817fdf00u, rd8(param_1));
                wr8(0x817fdf01u, rd8(param_1 + 1u));
                wr8(0x817fdf02u, rd8(param_1 + 2u));
                wr8(0x817fdf03u, rd8(param_1 + 3u));
                wr8(0x817fdf04u, rd8(param_1 + 4u));
                wr8(0x817fdf05u, rd8(param_1 + 5u));
                wr8(0x817fdf06u, rd8(param_1 + 6u));
                wr8(0x817fdf07u, rd8(param_1 + 7u));
                wr8(0x817fdf08u, rd8(param_1 + 8u));
                wr8(0x817fdf09u, rd8(param_1 + 9u));
                wr8(0x817fdf0au, rd8(param_1 + 0xau));
                wr8(0x817fdf0bu, rd8(param_1 + 0xbu));
                wr8(0x817fdf0cu, rd8(param_1 + 0xcu));
                wr8(0x817fdf0du, rd8(param_1 + 0xdu));
                wr8(0x817fdf0eu, rd8(param_1 + 0xeu));
                wr8(0x817fdf0fu, rd8(param_1 + 0xfu));
                wr8(0x817fdf10u, rd8(param_1 + 0x10u));
                wr8(0x817fdf11u, rd8(param_1 + 0x11u));
                wr8(0x817fdf12u, rd8(param_1 + 0x12u));
                wr8(0x817fdf13u, rd8(param_1 + 0x13u));
                wr8(0x817fdf14u, rd8(param_1 + 0x14u));
                wr8(0x817fdf15u, rd8(param_1 + 0x15u));
                wr8(0x817fdf16u, rd8(param_1 + 0x16u));
                wr8(0x817fdf17u, rd8(param_1 + 0x17u));
                wr8(0x817fdf18u, rd8(param_1 + 0x18u));
                wr8(0x817fdf19u, rd8(param_1 + 0x19u));
                wr8(0x817fdf1au, rd8(param_1 + 0x1au));
                wr8(0x817fdf1bu, rd8(param_1 + 0x1bu));
                wr8(0x817fdf1cu, rd8(param_1 + 0x1cu));
                wr8(0x817fdf1du, rd8(param_1 + 0x1du));
                wr8(0x817fdf1eu, rd8(param_1 + 0x1eu));
                wr8(0x817fdf1fu, rd8(param_1 + 0x1fu));
                wr32(0x817fdf20u, rd32(param_1 + 0x20u));
                r0 = rd32(param_1 + 0x28u);
                wr32(0x817fdf24u, rd32(param_1 + 0x24u));
                wr32(0x817fdf28u, r0);
                r0 = rd32(param_1 + 0x30u);
                wr32(0x817fdf2cu, rd32(param_1 + 0x2cu));
                wr32(0x817fdf30u, r0);
                wr32(0x817fdf34u, rd32(param_1 + 0x34u));
                r0 = rd32(param_1 + 0x3cu);
                wr32(0x817fdf38u, rd32(param_1 + 0x38u));
                wr32(0x817fdf3cu, r0);
                wr8(0x817fdf40u, rd8(param_1 + 0x40u));
                wr8(0x817fdf41u, rd8(param_1 + 0x41u));
                wr8(0x817fdf42u, rd8(param_1 + 0x42u));
                wr8(0x817fdf43u, rd8(param_1 + 0x43u));
                wrf32d(0x817fdf44u, (f64)rdf32(param_1 + 0x44u));
                wr32(0x817fdf48u, rd32(param_1 + 0x48u));
                wrf32d(0x817fdf4cu, (f64)rdf32(param_1 + 0x4cu));
                wrf32d(0x817fdf50u, (f64)rdf32(param_1 + 0x50u));
                wrf32d(0x817fdf54u, (f64)rdf32(param_1 + 0x54u));
                wr32(0x817fdf58u, rd32(param_1 + 0x58u));
                wr32(0x817fdf5cu, rd32(param_1 + 0x5cu));
                wr32(0x817fdf60u, rd32(param_1 + 0x60u));
                wrf32d(0x817fde98u, f29);
                wrf32d(0x817fde9cu, f29);
                wrf32d(0x817fdea0u, f29);
                wrf32d(0x817fdea4u, f29);
                wr32(0x817fded8u, 0x817fdf00u);
                r3 = rd32(param_1 + 0x60u);
                a.r[0] = r3;
                a.r[1] = 0x817fde98u;
                a.r[2] = r5;
                a.r[3] = 0x817fded8u;
                a.r[4] = r7;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
                if ((f64)(f32)((f64)rdf32(0x817fdea0u) - (f64)rdf32(0x817fde98u)) > f29 && (f64)(f32)((f64)rdf32(0x817fdf2cu) - (f64)rdf32(0x817fdef4u)) > (f64)rdf32(param_1 + 0x4cu)) {
                    wr32(0x817fdeb8u, r26);
                    r25 = 0xau;
                    a.r[0] = 0x817fdf00u;
                    a.r[1] = 0u;
                    f1 = tc_callf(0x802e0e00u, &a);
                    continue;
                }
                a.r[0] = 0x817fdf00u;
                a.r[1] = 0u;
                f1 = tc_callf(0x802e0e00u, &a);
            }
            r3 = rd32(param_1 + 0x60u);
            a.r[0] = r3;
            a.r[1] = 0x817fdea8u;
            a.r[2] = r25 & 0xffffu;
            a.r[3] = 0x817fdeecu;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x10u), &a);
            f1 = (f64)rdf32(0x817fdea8u);
            wr32(0x817fdeb8u, rd32(0x817fdef0u));
            f0 = (f64)rdf32(param_2);
            if (!(f0 > f1)) {
                f1 = f0;
            }
            wrf32d(param_2, f1);
            f0 = (f64)rdf32(param_2 + 4u);
            f1 = (f64)rdf32(0x817fdeacu);
            if (!(f0 > f1)) {
                f1 = f0;
            }
            wrf32d(param_2 + 4u, f1);
            f0 = (f64)rdf32(param_2 + 8u);
            f1 = (f64)rdf32(0x817fdeb0u);
            if (!(f0 < f1)) {
                f1 = f0;
            }
            wrf32d(param_2 + 8u, f1);
            f0 = (f64)rdf32(param_2 + 0xcu);
            f1 = (f64)rdf32(0x817fdeb4u);
            if (!(f0 < f1)) {
                f1 = f0;
            }
            wrf32d(param_2 + 0xcu, f1);
            f31 = (f64)rdf32(param_1 + 0x2cu);
            if (r3 == 4u) {
                wr32(param_3, rd32(param_3) + r31);
                return;
            }
            if (r3 != 1u) {
                if (r3 != 2u) {
                    if (r3 == 3u) break;
                } else {
                    r28 = 1u;
                }
            } else {
                r28 = 0u;
            }
        }
        if (r29 != 0u) {
            r26 = rd32(0x817fdeb8u);
        }
        a.r[0] = 0x817fdeb8u;
        r3 = tc_call(0x802558bcu, &a);
        f1 = tc_lastf();
        r25 = r3;
    }
    wr32(param_3, rd32(0x817fdeb8u));
    return;
}
