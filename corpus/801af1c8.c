#include "tc_rt.h"

void fn_801af1c8(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r7 = 0, r22 = 0, r23 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf10u, 0x817fe000u);
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
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    r5 = rd32(param_r3 + 8u);
    if (r5 == 0u) {
        f0 = (f64)rdf32(0x80575b38u);
        f1 = (f64)rdf32(rd32(param_r4 + 0x70u) + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            wr32(param_r3 + 8u, r5 + 1u);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x24bdu;
            (void)tc_call(0x8010a75cu, &a);
            f31 = (f64)rdf32(0x80575af4u);
            f24 = (f64)rdf32(0x80575b4cu);
            f23 = f31;
            f26 = (f64)rdf32(0x80575b38u);
            f25 = f31;
            f27 = (f64)rdf32(0x80575b50u);
            f28 = (f64)rdf32(0x80575af0u);
            f29 = (f64)rdf32(0x80575b54u);
            f30 = (f64)rdf32(0x80575ad8u);
            r23 = 0u;
            do {
                wrf32d(0x817fdf28u, f23);
                wrf32d(0x817fdf2cu, f23);
                wrf32d(0x817fdf30u, f23);
                wrf32d(0x817fdf34u, f23);
                wr32(0x817fdf38u, 0u);
                wr8(0x817fdf3cu, 0u);
                wr8(0x817fdf3du, 0u);
                a.f[0] = f31;
                f1 = tc_callf(0x80262b10u, &a);
                wrf32d(0x817fdf2cu, f25);
                wrf32d(0x817fdf28u, (f64)(f32)(f24 * (f64)(f32)f1));
                a.f[0] = f31;
                f1 = tc_callf(0x80262704u, &a);
                wr32(0x817fdf38u, 0x534d4e44u);
                wrf32d(0x817fdf34u, f31);
                wr8(0x817fdf3cu, 0u);
                wr8(0x817fdf3du, 0u);
                wrf32d(0x817fdf30u, (f64)(f32)(f24 * (f64)(f32)f1));
                a.r[0] = 0x62u;
                a.r[1] = 0u;
                a.r[2] = 0x817fdf28u;
                a.r[3] = 0u;
                r3 = tc_call(0x800eb4f0u, &a);
                r22 = r3;
                if (r3 != 0u) {
                    a.r[0] = 0x8046ad74u;
                    a.r[1] = r3;
                    f1 = tc_callf(0x8007b03cu, &a);
                    r4 = tc_lastr4();
                    wr32(r22 + 0x15cu, rd32(0x8046ad78u));
                    wrf32d(r22 + 0x16cu, (f64)(f32)((f64)rdf32(r22 + 0x16cu) + f26));
                    if ((u32)((s32)rd32(r22 + 0x148u) >> 31) == 0u) {
                        wr32(r22 + 0xccu, 1u);
                        wrf32d(r22 + 0x250u, f27);
                        wrf32d(r22 + 0xd0u, f27);
                    } else {
                        wr32(r22 + 0x258u, 0u);
                    }
                    wr32(r22 + 0x148u, rd32(r22 + 0x148u) | 0x2000000u);
                    if (r22 != 0u) {
                        wr8(r22 + 0x162cu, 0u);
                    }
                    a.r[0] = r22;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(r22) + 0x28u), &a);
                    r7 = rd32(r3);
                    f1 = (f64)rdf32(0x80575b04u);
                    wr32(0x817fdf1cu, rd32(r3 + 4u));
                    wr32(0x817fdf18u, r7);
                    f2 = (f64)rdf32(0x817fdf1cu);
                    wr32(0x817fdf20u, rd32(r3 + 8u));
                    f2 = ppc_fmadds((f64)rdf32(r22 + 0xb4u), f28, f2);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdf20u) + f29);
                    wrf32d(0x817fdf1cu, f2);
                    wrf32d(0x817fdf20u, f0);
                    a.f[0] = f1;
                    a.r[0] = 0x74u;
                    a.r[1] = 0x817fdf18u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                }
                r23 = r23 + 1u;
                f31 = (f64)(f32)(f31 + f30);
            } while ((s32)r23 < 4);
        }
    }
    return;
}
