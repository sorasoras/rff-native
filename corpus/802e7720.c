#include "tc_rt.h"

void fn_802e7720(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, f64 param_f1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r7 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
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
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdf70u, 0u);
    f31 = (f64)rdf32(0x80577488u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
    r31 = 0u;
    wr32(0x817fdf68u, param_2);
    wr32(0x817fdf6cu, (u32)param_3);
    a.r[0] = 0x817fdf58u;
    a.r[1] = rd32(param_2 + 0x48u);
    (void)tc_call(0x802e2340u, &a);
    r30 = rd32(0x817fdf58u);
    f0 = (f64)rdf32(0x80577488u);
    wrf32d(param_1, f0);
    wrf32d(param_1 + 8u, f0);
    a.r[0] = param_2;
    f1 = tc_callf(0x802e242cu, &a);
    f0 = (f64)rdf32(0x80577488u);
    if (!(f0 > f1)) {
        f1 = f0;
    }
    wrf32d(param_1 + 4u, f1);
    a.r[0] = param_2;
    f1 = tc_callf(0x802e242cu, &a);
    f0 = (f64)rdf32(0x80577488u);
    if (!(f0 < f1)) {
        f1 = f0;
    }
    wrf32d(param_1 + 0xcu, f1);
    wr8(param_5, 0u);
    wr32(0x817fdf58u, (u32)param_3);
    f2 = (f64)rdf32(param_1 + 4u);
    f1 = (f64)rdf32(param_1 + 8u);
    f0 = (f64)rdf32(param_1 + 0xcu);
    wrf32d(0x817fdf48u, (f64)rdf32(param_1));
    wrf32d(0x817fdf4cu, f2);
    wrf32d(0x817fdf50u, f1);
    wrf32d(0x817fdf54u, f0);
    a.r[0] = 0x817fdf58u;
    r3 = tc_call(0x802558bcu, &a);
    f1 = tc_lastf();
    f2 = 0.0;
    f3 = 0.0;
    f28 = (f64)rdf32(0x80577488u);
    r4 = r3;
    f29 = rdf64(0x80577490u);
    for (;;) {
        r7 = rd32(0x817fdf58u);
        r3 = r7 - (u32)param_3;
        if (((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1) > param_4) break;
        r5 = r4 & 0xffffu;
        if ((s32)r5 >= 32) {
            if (r31 != 0u) {
                f31 = (f64)(f32)(f31 + (f64)rdf32(param_2 + 0x50u));
            }
            r31 = 1u;
            if ((u32)rd8(param_2 + 0x43u) == 0u) {
                r3 = rd32(param_2 + 0x48u);
                r4 = r4 & 0xffffu;
                f27 = (f64)rdf32(param_2 + 0x24u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = r7;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                r3 = tc_call(rd32(rd32(r3) + 0x48u), &a);
                wr32(0x817fdf80u, 0x43300000u);
                wr32(0x817fdf84u, r3 ^ 0x80000000u);
                f31 = (f64)(f32)(f31 + (f64)(f32)((f64)(f32)(rdf64(0x817fdf80u) - f29) * f27));
            } else {
                f31 = (f64)(f32)(f31 + (f64)rdf32(param_2 + 0x44u));
            }
            f0 = (f64)rdf32(param_1);
            if (f0 > f31) {
                f0 = f31;
            }
            f2 = (f64)rdf32(param_1 + 8u);
            wrf32d(param_1, f0);
            if (f2 < f31) {
                f2 = f31;
            }
            f0 = (f64)rdf32(param_1);
            wrf32d(param_1 + 8u, f2);
            f0 = (f64)(f32)((f64)(f32)f2 - f0);
            if (f0 > param_f1) {
                wr8(param_5, 1u);
                break;
            }
        } else {
            wrf32d(0x817fdf38u, f31);
            wrf32d(0x817fdf3cu, f28);
            wrf32d(0x817fdf40u, f28);
            wrf32d(0x817fdf44u, f28);
            wr32(0x817fdf6cu, r7);
            wr32(0x817fdf78u, (ppc_cntlzw(r31) >> 5u) & 0x7ffffffu);
            wrf32d(param_2 + 0x2cu, f31);
            r3 = rd32(param_2 + 0x60u);
            a.r[0] = r3;
            a.r[1] = 0x817fdf38u;
            a.r[2] = r5;
            a.r[3] = 0x817fdf68u;
            a.r[4] = r7;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            r3 = tc_call(rd32(rd32(r3) + 0x10u), &a);
            f1 = (f64)rdf32(0x817fdf38u);
            wr32(0x817fdf58u, rd32(0x817fdf6cu));
            f0 = (f64)rdf32(param_1);
            if (!(f0 > f1)) {
                f1 = f0;
            }
            wrf32d(param_1, f1);
            f0 = (f64)rdf32(param_1 + 4u);
            f1 = (f64)rdf32(0x817fdf3cu);
            if (!(f0 > f1)) {
                f1 = f0;
            }
            wrf32d(param_1 + 4u, f1);
            f0 = (f64)rdf32(param_1 + 8u);
            f1 = (f64)rdf32(0x817fdf40u);
            if (!(f0 < f1)) {
                f1 = f0;
            }
            wrf32d(param_1 + 8u, f1);
            f0 = (f64)rdf32(param_1 + 0xcu);
            f2 = (f64)rdf32(0x817fdf44u);
            if (!(f0 < f2)) {
                f2 = f0;
            }
            f1 = (f64)rdf32(param_1 + 8u);
            f0 = (f64)rdf32(param_1);
            wrf32d(param_1 + 0xcu, f2);
            f0 = (f64)(f32)(f1 - f0);
            f31 = (f64)rdf32(param_2 + 0x2cu);
            if (f0 > param_f1) {
                wr8(param_5, 1u);
                break;
            }
            if (r3 == 4u) {
                return;
            }
            if (r3 != 1u) {
                if (r3 != 2u) {
                    if (r3 == 3u) break;
                } else {
                    r31 = 1u;
                }
            } else {
                r31 = 0u;
            }
        }
        r30 = rd32(0x817fdf58u);
        a.r[0] = 0x817fdf58u;
        r3 = tc_call(0x802558bcu, &a);
        f3 = (f64)rdf32(param_1);
        r4 = r3;
        f2 = (f64)rdf32(param_1 + 4u);
        f1 = (f64)rdf32(param_1 + 8u);
        f0 = (f64)rdf32(param_1 + 0xcu);
        wrf32d(0x817fdf48u, f3);
        wrf32d(0x817fdf4cu, f2);
        wrf32d(0x817fdf50u, f1);
        wrf32d(0x817fdf54u, f0);
    }
    if ((u32)rd8(param_5) != 0u && r30 != 0u) {
        f2 = (f64)rdf32(0x817fdf4cu);
        f1 = (f64)rdf32(0x817fdf50u);
        f0 = (f64)rdf32(0x817fdf54u);
        wrf32d(param_1, (f64)rdf32(0x817fdf48u));
        wrf32d(param_1 + 4u, f2);
        wrf32d(param_1 + 8u, f1);
        wrf32d(param_1 + 0xcu, f0);
    }
    return;
}
