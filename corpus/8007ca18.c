#include "tc_rt.h"

void fn_8007ca18(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, s32 param_6)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r21 = 0, r22 = 0, r23 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r30 = rd32(param_2 + 0x50u);
    r29 = rd32(param_2 + 0x30u);
    f31 = (f64)rdf32(rd32(param_2 + 0x3cu) + 0x38u);
    r31 = rd32(param_2 + 0x64u);
    wrf32d(0x817fdf8cu, (f64)rdf32(r30 + 0xcu));
    wrf32d(0x817fdf90u, (f64)rdf32(r30 + 0x1cu));
    wrf32d(0x817fdf94u, (f64)rdf32(r30 + 0x2cu));
    a.r[0] = r29;
    a.r[1] = rd32(param_2 + 0x4cu);
    a.r[2] = r30;
    (void)tc_call(0x802337a0u, &a);
    if ((u32)rd8(0x80570700u) != 0u) {
        wrf32d(0x817fdf80u, (f64)rdf32(r29 + 0xcu));
        wrf32d(0x817fdf84u, (f64)rdf32(r29 + 0x1cu));
        wrf32d(0x817fdf88u, (f64)rdf32(r29 + 0x2cu));
        a.r[0] = 0x817fdf8cu;
        a.r[1] = r31 + 0xcu;
        a.r[2] = 0x817fdf98u;
        (void)tc_call(0x80234380u, &a);
        r3 = r31 + 0xcu;
        a.f[0] = (f64)rdf32(param_3 + 0xcu);
        a.r[0] = r3;
        a.r[1] = r3;
        (void)tc_call(0x802343c8u, &a);
        wrf32d(0x817fdf74u, (f64)rdf32(r30 + 0xcu));
        wrf32d(0x817fdf78u, (f64)rdf32(r30 + 0x1cu));
        wrf32d(0x817fdf7cu, (f64)rdf32(r30 + 0x2cu));
        a.r[0] = 0x817fdf74u;
        a.r[1] = 0x817fdf80u;
        a.r[2] = 0x817fdf68u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdf68u;
        a.r[1] = 0x817fdf68u;
        (void)tc_call(0x802343e4u, &a);
        if ((u32)param_6 != 0u) {
            r7 = rd32(rd32(param_1 + 0x4cu) + 0x3cu);
            if (r7 != 0u) {
                a.r[0] = 0x817fdf98u;
                a.r[1] = 0x817fdf80u;
                a.r[2] = r31 + 0xcu;
                a.r[3] = param_1;
                a.r[4] = r7;
                a.r[5] = param_3;
                (void)tc_call(0x8007c7e8u, &a);
            }
        }
        r23 = r31 + 0x18u;
        r22 = 0u;
        while ((s32)r22 < (s32)(s16)rd16(r31 + 6u)) {
            r21 = rd32(r23);
            r6 = rd32(r21 + 0x50u);
            wrf32d(0x817fdf50u, (f64)rdf32(r6 + 0xcu));
            wrf32d(0x817fdf54u, (f64)rdf32(r6 + 0x1cu));
            wrf32d(0x817fdf58u, (f64)rdf32(r6 + 0x2cu));
            a.r[0] = 0x817fdf98u;
            a.r[1] = 0x817fdf50u;
            a.r[2] = 0x817fdf5cu;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdf5cu;
            a.r[1] = 0x817fdf5cu;
            f1 = tc_callf(0x8004c730u, &a);
            f0 = (f64)rdf32(r23 + 4u);
            if (f1 > f0) {
                f1 = (f64)(f32)(f0 - f1);
                r3 = r31 + 0xcu;
                f30 = (f64)(f32)((f64)rdf32(param_3 + 8u) * f1);
                a.f[0] = f30;
                a.r[0] = r3;
                a.r[1] = 0x817fdf5cu;
                a.r[2] = r3;
                (void)tc_call(0x8004c70cu, &a);
                r3 = rd32(r21 + 0x64u);
                if (r3 != 0u) {
                    wrf32d(r3 + 0xcu, ppc_fnmsubs((f64)rdf32(0x817fdf5cu), f30, (f64)rdf32(r3 + 0xcu)));
                    r3 = rd32(r21 + 0x64u);
                    wrf32d(r3 + 0x10u, ppc_fnmsubs((f64)rdf32(0x817fdf60u), f30, (f64)rdf32(r3 + 0x10u)));
                    r3 = rd32(r21 + 0x64u);
                    wrf32d(r3 + 0x14u, ppc_fnmsubs((f64)rdf32(0x817fdf64u), f30, (f64)rdf32(r3 + 0x14u)));
                }
            }
            if ((u32)param_6 != 0u) {
                r7 = rd32(rd32(param_1 + 0x4cu) + 0x3cu);
                if (r7 != 0u) {
                    a.r[0] = 0x817fdf98u;
                    a.r[1] = 0x817fdf50u;
                    a.r[2] = r31 + 0xcu;
                    a.r[3] = param_1;
                    a.r[4] = r7;
                    a.r[5] = param_3;
                    (void)tc_call(0x8007c7e8u, &a);
                }
            }
            r23 = r23 + 8u;
            r22 = r22 + 1u;
        }
        a.r[0] = 0x817fdf98u;
        a.r[1] = 0x817fdf80u;
        a.r[2] = 0x817fdf44u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdf44u;
        a.r[1] = 0x817fdf44u;
        f1 = tc_callf(0x8004c730u, &a);
        f30 = f1;
        a.f[0] = f31;
        a.r[0] = 0x817fdf98u;
        a.r[1] = 0x817fdf44u;
        a.r[2] = 0x817fdf80u;
        (void)tc_call(0x8004c70cu, &a);
        wrf32d(r30 + 0xcu, (f64)rdf32(0x817fdf98u));
        wrf32d(r30 + 0x1cu, (f64)rdf32(0x817fdf9cu));
        wrf32d(r30 + 0x2cu, (f64)rdf32(0x817fdfa0u));
        if (f30 > f31) {
            r3 = r31 + 0xcu;
            a.f[0] = (f64)(f32)((f64)rdf32(param_3 + 8u) * (f64)(f32)(f31 - f30));
            a.r[0] = r3;
            a.r[1] = 0x817fdf44u;
            a.r[2] = r3;
            (void)tc_call(0x8004c70cu, &a);
        } else {
            if ((u32)param_4 != 0u) {
                r3 = r31 + 0xcu;
                a.f[0] = (f64)(f32)((f64)rdf32(param_3 + 8u) * (f64)(f32)(f31 - f30));
                a.r[0] = r3;
                a.r[1] = 0x817fdf44u;
                a.r[2] = r3;
                (void)tc_call(0x8004c70cu, &a);
            }
        }
        if ((u32)param_5 != 0u) {
            a.r[0] = 0x817fdf74u;
            a.r[1] = 0x817fdf98u;
            a.r[2] = 0x817fdf38u;
            (void)tc_call(0x802343a4u, &a);
            r3 = r31 + 0xcu;
            a.f[0] = (f64)rdf32(param_3);
            a.r[0] = r3;
            a.r[1] = 0x817fdf38u;
            a.r[2] = r3;
            (void)tc_call(0x8004c70cu, &a);
        } else {
            r3 = r31 + 0xcu;
            f1 = (f64)rdf32(param_3);
            wrf32d(r31 + 0x10u, ppc_fnmsubs((f64)rdf32(param_3 + 4u), (f64)rdf32(0x805706fcu), (f64)rdf32(r31 + 0x10u)));
            a.f[0] = f1;
            a.r[0] = r3;
            a.r[1] = 0x817fdf68u;
            a.r[2] = r3;
            (void)tc_call(0x8004c70cu, &a);
        }
        a.r[0] = r29;
        a.r[1] = 0x817fdf44u;
        a.r[2] = 0u;
        (void)tc_call(0x8007c290u, &a);
    }
    return;
}
