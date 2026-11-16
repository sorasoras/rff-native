#include "tc_rt.h"

void fn_8006b5cc(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r22 = 0, r23 = 0, r24 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
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
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x80065070u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        return;
    }
    if (rd32(param_r3 + 0x1f4u) != 0u) {
        wrf32d(param_r4, (f64)rdf32(param_r3 + 0x1f8u));
        wrf32d(param_r4 + 4u, (f64)rdf32(param_r3 + 0x1fcu));
        wrf32d(param_r4 + 8u, (f64)rdf32(param_r3 + 0x200u));
    } else {
        r0 = rd32(param_r3 + 0x290u);
        if ((r0 == 0u || r0 == 1u) || r0 == 0x19u) {
            f29 = (f64)rdf32(0x805726b8u);
            r31 = 0u;
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            f1 = tc_lastf();
            r5 = rd32(r3);
            r4 = 0x80470000u;
            r0 = rd32(r3 + 4u);
            f30 = (f64)rdf32(0x805725d8u);
            wr32(0x817fdf20u, r5);
            r23 = rd32(0x8046b7e4u);
            wr32(0x817fdf24u, r0);
            f31 = (f64)rdf32(0x805726bcu);
            wr32(0x817fdf28u, rd32(r3 + 8u));
            wrf32d(0x817fdf1cu, f30);
            wrf32d(0x817fdf18u, f30);
            wrf32d(0x817fdf14u, f30);
            while (r23 != 0u) {
                r3 = r23;
                r23 = rd32(r23);
                r22 = rd32(r3 + 8u);
                if ((u32)((s32)rd32(r22 + 0x9cu) >> 31) != 0u) {
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                    f1 = tc_lastf();
                    r24 = r3;
                    a.r[0] = r22;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r22) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdf08u, rd32(r3));
                    wr32(0x817fdf0cu, r0);
                    wr32(0x817fdf10u, rd32(r3 + 8u));
                    a.r[0] = 0x817fdf08u;
                    a.r[1] = r24;
                    a.r[2] = 0x817fdf08u;
                    (void)tc_call(0x802343a4u, &a);
                    wrf32d(0x817fdf0cu, f30);
                    a.r[0] = 0x817fdf08u;
                    f1 = tc_callf(0x80234428u, &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
                    f28 = f1;
                    if (f1 < f29) {
                        f0 = (f64)rdf32(0x804890d0u);
                        f2 = (f64)rdf32(0x804890c8u);
                        wrf32d(0x817fdf64u, f30);
                        f1 = (f64)rdf32(0x804890ccu);
                        wrf32d(0x817fdf48u, f30);
                        wrf32d(0x817fdf40u, f30);
                        wrf32d(0x817fdf3cu, f30);
                        wrf32d(0x817fdf38u, f30);
                        wrf32d(0x817fdf78u, f30);
                        wrf32d(0x817fdf74u, f30);
                        wrf32d(0x817fdf70u, f30);
                        wr32(0x817fdf30u, 0u);
                        wrf32d(0x817fdf44u, f2);
                        wrf32d(0x817fdf48u, f1);
                        wrf32d(0x817fdf4cu, f0);
                        wrf32d(0x817fdf64u, f2);
                        wrf32d(0x817fdf68u, f1);
                        wrf32d(0x817fdf6cu, f0);
                        wr32(0x817fdf94u, 0u);
                        wr32(0x817fdf8cu, 0u);
                        wr32(0x817fdf90u, 0u);
                        wrf32d(0x817fdf34u, f31);
                        wrf32d(0x817fdf88u, f30);
                        wrf32d(0x817fdf84u, f30);
                        wrf32d(0x817fdf80u, f30);
                        wrf32d(0x817fdf7cu, f30);
                        wrf32d(0x817fdf5cu, f30);
                        wrf32d(0x817fdf58u, f30);
                        wrf32d(0x817fdf54u, f30);
                        wrf32d(0x817fdf50u, f30);
                        a.r[0] = r22;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        r3 = tc_call(rd32(rd32(r22) + 0x28u), &a);
                        f0 = (f64)rdf32(0x817fdf24u);
                        wrf32d(0x817fdf14u, (f64)rdf32(r3));
                        f1 = (f64)rdf32(0x80572604u);
                        wrf32d(0x817fdf18u, (f64)rdf32(r3 + 4u));
                        wrf32d(0x817fdf1cu, (f64)rdf32(r3 + 8u));
                        wrf32d(0x817fdf18u, f0);
                        a.f[0] = f1;
                        a.r[0] = 0x8046d8c8u;
                        a.r[1] = 0x817fdf30u;
                        a.r[2] = 0x817fdf20u;
                        a.r[3] = 0x817fdf14u;
                        a.r[4] = rd32(param_r3 + 0xbcu);
                        a.r[5] = 2u;
                        r3 = tc_call(0x8008c458u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r5 = 0u;
                        if (r3 == 0u) {
                            r31 = r22;
                            f29 = f28;
                        }
                    }
                }
            }
            if (r31 != 0u) {
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                f0 = (f64)rdf32(0x80572604u);
                wrf32d(param_r4, (f64)rdf32(r3));
                f2 = (f64)rdf32(r3 + 4u);
                wrf32d(param_r4 + 4u, f2);
                wrf32d(param_r4 + 8u, (f64)rdf32(r3 + 8u));
                f0 = (f64)(f32)((f64)rdf32(r31 + 0xb4u) - f0);
                f0 = (f64)(f32)(f2 + f0);
                wrf32d(param_r4 + 4u, f0);
            }
        }
    }
    return;
}
