#include "tc_rt.h"

void fn_801551cc(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r23 = 0, r24 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r24 = rd32(param_r3 + 4u) + 0xcf4u;
    r3 = tc_call(0x80155448u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdf40u, rd32(r3));
    wr32(0x817fdf44u, r0);
    wr32(0x817fdf48u, rd32(r3 + 8u));
    a.r[0] = 0x817fdf40u;
    a.r[1] = r24;
    a.r[2] = 0x817fdf40u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdf40u;
    f1 = tc_callf(0x80234440u, &a);
    r4 = tc_lastr4();
    if (!(f1 > (f64)rdf32(0x805748d8u))) {
        r31 = rd32(0x8046ad74u);
        f30 = (f64)rdf32(0x805748dcu);
        f31 = (f64)rdf32(0x805748e0u);
        for (;;) {
            if (r31 == 0u) {
                return;
            }
            r3 = r31;
            r31 = rd32(r31);
            r30 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r30 + 0x9cu) >> 31) != 0u && rd32(r30 + 0xb8u) == 2u) {
                a.r[0] = r30;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r30) + 0x140u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u) {
                    a.r[0] = r30;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r30) + 0x70u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 == 0u && rd32(r30 + 0x1b0u) == 0u) {
                        r23 = rd32(param_r3 + 4u);
                        a.r[0] = r30;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
                        a.f[0] = (f64)rdf32(0x805748d8u);
                        a.r[0] = r23;
                        a.r[1] = r3;
                        r3 = tc_call(0x800b2ddcu, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 != 0u) {
                            f2 = (f64)rdf32(0x804890c8u);
                            wrf32d(0x817fdf84u, f30);
                            f1 = (f64)rdf32(0x804890ccu);
                            wrf32d(0x817fdf68u, f30);
                            f0 = (f64)rdf32(0x804890d0u);
                            wrf32d(0x817fdf6cu, f30);
                            wrf32d(0x817fdf60u, f30);
                            wrf32d(0x817fdf5cu, f30);
                            wrf32d(0x817fdf58u, f30);
                            wrf32d(0x817fdf98u, f30);
                            wrf32d(0x817fdf94u, f30);
                            wrf32d(0x817fdf90u, f30);
                            wr32(0x817fdf50u, 0u);
                            wrf32d(0x817fdf64u, f2);
                            wrf32d(0x817fdf68u, f1);
                            wrf32d(0x817fdf6cu, f0);
                            wrf32d(0x817fdf84u, f2);
                            wrf32d(0x817fdf88u, f1);
                            wrf32d(0x817fdf8cu, f0);
                            wr32(0x817fdfb4u, 0u);
                            wr32(0x817fdfacu, 0u);
                            wr32(0x817fdfb0u, 0u);
                            wrf32d(0x817fdf54u, f31);
                            wrf32d(0x817fdfa8u, f30);
                            wrf32d(0x817fdfa4u, f30);
                            wrf32d(0x817fdfa0u, f30);
                            wrf32d(0x817fdf9cu, f30);
                            wrf32d(0x817fdf7cu, f30);
                            wrf32d(0x817fdf78u, f30);
                            wrf32d(0x817fdf74u, f30);
                            wrf32d(0x817fdf70u, f30);
                            r4 = rd32(r23 + 0xcf4u);
                            r0 = rd32(r23 + 0xcf8u);
                            wr32(0x817fdf34u, r4);
                            wr32(0x817fdf38u, r0);
                            wr32(0x817fdf3cu, rd32(r23 + 0xcfcu));
                            a.r[0] = r30;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
                            r0 = rd32(r3 + 4u);
                            wr32(0x817fdf28u, rd32(r3));
                            wr32(0x817fdf2cu, r0);
                            wr32(0x817fdf30u, rd32(r3 + 8u));
                            if (rd32(r30 + 0x1b8u) != 0u) break;
                            a.f[0] = (f64)rdf32(r23 + 0xb0u);
                            a.r[0] = 0x8046d8c8u;
                            a.r[1] = 0x817fdf50u;
                            a.r[2] = 0x817fdf34u;
                            a.r[3] = 0x817fdf28u;
                            a.r[4] = rd32(r23 + 0xbcu);
                            a.r[5] = 0xffffu;
                            r3 = tc_call(0x8008c458u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if (r3 == 0u) break;
                        }
                    }
                }
            }
        }
    }
    return;
}
