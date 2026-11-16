#include "tc_rt.h"

void fn_80187d38(u32 param_r3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r8 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    f0 = (f64)rdf32(0x805751f4u);
    r4 = 0u;
    c0eq = rd32(param_r3 + 0x1018u) == 0u;
    wrf32d(0x817fdfc0u, f0);
    wrf32d(0x817fdf8cu, f0);
    wrf32d(0x817fdf94u, f0);
    if (!c0eq || rd32(param_r3 + 0xf70u) != 0u) {
        r4 = 1u;
    }
    if (r4 == 0u) {
        f30 = (f64)rdf32(0x80575244u);
        r28 = rd32(0x8046ad74u);
        r29 = 0u;
        f31 = (f64)rdf32(0x805751f4u);
        while (r28 != 0u) {
            r3 = r28;
            r28 = rd32(r28);
            r27 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r27 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r27;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                r3 = tc_call(rd32(rd32(r27) + 0x140u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u && rd32(r27 + 0x1b0u) == 0u) {
                    a.r[0] = r27;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    r3 = tc_call(rd32(rd32(r27) + 0x70u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 == 0u) {
                        a.r[0] = r27;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        r3 = tc_call(rd32(rd32(r27) + 0x28u), &a);
                        f1 = tc_lastf();
                        r30 = r3;
                        a.r[0] = param_r3;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                        r0 = rd32(r3 + 4u);
                        wr32(0x817fdfacu, rd32(r3));
                        wr32(0x817fdfb0u, r0);
                        wr32(0x817fdfb4u, rd32(r3 + 8u));
                        a.r[0] = 0x817fdfacu;
                        a.r[1] = r30;
                        a.r[2] = 0x817fdfacu;
                        (void)tc_call(0x802343a4u, &a);
                        wrf32d(0x817fdfb0u, f31);
                        a.r[0] = 0x817fdfacu;
                        f1 = tc_callf(0x80234428u, &a);
                        r4 = tc_lastr4();
                        if (f1 < f30) {
                            r29 = r27;
                            f30 = f1;
                        }
                    }
                }
            }
        }
        if (r29 != 0u) {
            a.r[0] = r29;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(r29) + 0x28u), &a);
            r8 = rd32(r3);
            f4 = (f64)rdf32(0x805751d8u);
            wr32(0x817fdfa4u, rd32(r3 + 4u));
            f1 = (f64)rdf32(0x80575248u);
            wr32(0x817fdfa0u, r8);
            f0 = (f64)rdf32(0x817fdfa4u);
            f2 = (f64)rdf32(0x80575204u);
            wr32(0x817fdfa8u, rd32(r3 + 8u));
            f3 = (f64)rdf32(0x80575234u);
            f0 = ppc_fmadds((f64)rdf32(r29 + 0xb4u), f4, f0);
            wrf32d(0x817fdfa4u, f0);
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = (f64)rdf32(param_r3 + 0xad0u);
            a.r[0] = param_r3 + 0xf28u;
            a.r[1] = 0x817fdfa0u;
            a.r[2] = 0x10808au;
            a.r[3] = 0u;
            a.r[4] = param_r3;
            f1 = tc_callf(0x800cdc78u, &a);
            a.r[0] = r29;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(r29) + 0x28u), &a);
            a.f[0] = (f64)rdf32(0x805751b8u);
            a.r[0] = 0x20u;
            a.r[1] = r3;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
        }
    }
    a.r[0] = param_r3;
    a.r[1] = 0xbu;
    (void)tc_call(0x801867a0u, &a);
    return;
}
