#include "tc_rt.h"

void fn_80181794(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r27 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_r4 + 4u);
    f4 = (f64)rdf32(0x805750b8u);
    r27 = 0u;
    wr32(0x817fdf70u, rd32(param_r4));
    f3 = (f64)rdf32(0x804890c8u);
    wr32(0x817fdf74u, r0);
    f2 = (f64)rdf32(0x804890ccu);
    r0 = rd32(param_r4 + 8u);
    f1 = (f64)rdf32(0x804890d0u);
    f0 = (f64)rdf32(0x805750f4u);
    wrf32d(0x817fdf98u, f4);
    wr32(0x817fdf78u, r0);
    wrf32d(0x817fdf90u, f4);
    wrf32d(0x817fdf8cu, f4);
    wrf32d(0x817fdf88u, f4);
    wrf32d(0x817fdfc8u, f4);
    wrf32d(0x817fdfc4u, f4);
    wrf32d(0x817fdfc0u, f4);
    wr32(0x817fdf80u, 0u);
    wrf32d(0x817fdf94u, f3);
    wrf32d(0x817fdf98u, f2);
    wrf32d(0x817fdf9cu, f1);
    wrf32d(0x817fdfb4u, f3);
    wrf32d(0x817fdfb8u, f2);
    wrf32d(0x817fdfbcu, f1);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wrf32d(0x817fdf84u, f0);
    wrf32d(0x817fdfd8u, f4);
    wrf32d(0x817fdfd4u, f4);
    wrf32d(0x817fdfd0u, f4);
    wrf32d(0x817fdfccu, f4);
    wrf32d(0x817fdfacu, f4);
    wrf32d(0x817fdfa8u, f4);
    wrf32d(0x817fdfa4u, f4);
    wrf32d(0x817fdfa0u, f4);
    a.r[0] = param_r3;
    a.r[1] = 0x817fdf80u;
    a.r[2] = 0x817fdf70u;
    r3 = tc_call(0x801819fcu, &a);
    r4 = tc_lastr4();
    if (r3 != 0u) {
        f1 = (f64)rdf32(0x817fdfb4u);
        if (f1 != (f64)rdf32(0x804890c8u)) {
            r27 = 1u;
        } else {
            f1 = (f64)rdf32(0x817fdfb8u);
            if (f1 != (f64)rdf32(0x804890ccu)) {
                r27 = 1u;
            } else {
                f1 = (f64)rdf32(0x817fdfbcu);
                if (f1 != (f64)rdf32(0x804890d0u)) {
                    r27 = 1u;
                }
            }
        }
        if (r27 == 0u) {
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            r0 = rd32(param_r4 + 4u);
            wr32(0x817fdf4cu, rd32(param_r4));
            wr32(0x817fdf50u, r0);
            wr32(0x817fdf54u, rd32(param_r4 + 8u));
            a.r[0] = 0x817fdf4cu;
            a.r[1] = r3;
            a.r[2] = 0x817fdf4cu;
            (void)tc_call(0x802343a4u, &a);
            r8 = rd32(0x817fdf50u);
            r0 = rd32(0x817fdf54u);
            wr32(0x817fdf28u, rd32(0x817fdf4cu));
            wr32(0x817fdf2cu, r8);
            wr32(0x817fdf30u, r0);
            a.r[0] = param_r3;
            a.r[1] = param_r4;
            a.r[2] = 0x817fdf28u;
            a.r[3] = 0x817fdf80u;
            a.r[4] = 0x817fdf70u;
            (void)tc_call(0x80181aa8u, &a);
        } else {
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            r0 = rd32(param_r4 + 4u);
            wr32(0x817fdf64u, rd32(param_r4));
            wr32(0x817fdf68u, r0);
            wr32(0x817fdf6cu, rd32(param_r4 + 8u));
            a.r[0] = 0x817fdf64u;
            a.r[1] = r3;
            a.r[2] = 0x817fdf64u;
            (void)tc_call(0x802343a4u, &a);
            r11 = rd32(0x817fdf68u);
            r10 = rd32(0x817fdf6cu);
            r9 = rd32(0x817fdf64u);
            r8 = rd32(0x817fdf68u);
            r0 = rd32(0x817fdf6cu);
            wr32(0x817fdf58u, rd32(0x817fdf64u));
            wr32(0x817fdf5cu, r11);
            wr32(0x817fdf60u, r10);
            wr32(0x817fdf40u, r9);
            wr32(0x817fdf44u, r8);
            wr32(0x817fdf48u, r0);
            a.r[0] = param_r3;
            a.r[1] = param_r4;
            a.r[2] = 0x817fdf40u;
            a.r[3] = 0x817fdf80u;
            a.r[4] = 0x817fdf70u;
            r3 = tc_call(0x80181aa8u, &a);
            if (r3 == 0u) {
                f1 = (f64)rdf32(0x817fdfb8u);
                f0 = (f64)rdf32(0x817fdfbcu);
                r9 = rd32(0x817fdf58u);
                r8 = rd32(0x817fdf5cu);
                r0 = rd32(0x817fdf60u);
                wrf32d(0x817fdf94u, (f64)rdf32(0x817fdfb4u));
                wrf32d(0x817fdf98u, f1);
                wrf32d(0x817fdf9cu, f0);
                wr32(0x817fdf34u, r9);
                wr32(0x817fdf38u, r8);
                wr32(0x817fdf3cu, r0);
                a.r[0] = param_r3;
                a.r[1] = param_r4;
                a.r[2] = 0x817fdf34u;
                a.r[3] = 0x817fdf80u;
                a.r[4] = 0x817fdf70u;
                (void)tc_call(0x80181aa8u, &a);
            }
        }
    }
    return;
}
