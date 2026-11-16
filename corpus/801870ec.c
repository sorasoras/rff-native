#include "tc_rt.h"

void fn_801870ec(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
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
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfc4u, 0u);
    if ((s32)rd32((u32)param_1 + 0xab8u) >= 0) {
        f29 = (f64)rdf32(0x805751f4u);
        r30 = rd32(0x8046ad74u);
        f31 = (f64)rdf32(0x805751fcu);
        f30 = (f64)rdf32(0x805751f8u);
        while (r30 != 0u) {
            r3 = r30;
            r30 = rd32(r30);
            r29 = rd32(r3 + 8u);
            if ((u32)((s32)rd32(r29 + 0x9cu) >> 31) != 0u && (u32)((s32)rd32(r29 + 0x148u) >> 31) == 0u) {
                a.r[0] = r29;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(r29) + 0x140u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u && rd32(r29 + 0x1b0u) == 0u) {
                    a.r[0] = r29;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    r3 = tc_call(rd32(rd32(r29) + 0x28u), &a);
                    r0 = rd32((u32)param_1 + 0xac8u);
                    wr32(0x817fdfa8u, rd32((u32)param_1 + 0xac4u));
                    wr32(0x817fdfacu, r0);
                    wr32(0x817fdfb0u, rd32((u32)param_1 + 0xaccu));
                    a.r[0] = 0x817fdfa8u;
                    a.r[1] = r3;
                    a.r[2] = 0x817fdfa8u;
                    (void)tc_call(0x802343a4u, &a);
                    wrf32d(0x817fdfacu, f29);
                    a.r[0] = 0x817fdfa8u;
                    f1 = tc_callf(0x80234428u, &a);
                    r4 = tc_lastr4();
                    if (((f1 < f30) || (f1 == f30)) && ((f1 > f31) || (f1 == f31))) {
                        r0 = 0u;
                        if ((f29 == (f64)rdf32(0x817fdfa8u) && f29 == (f64)rdf32(0x817fdfacu)) && f29 == (f64)rdf32(0x817fdfb0u)) {
                            r0 = 1u;
                        }
                        if (r0 == 0u) {
                            a.r[0] = 0x817fdfa8u;
                            a.r[1] = 0x817fdfa8u;
                            (void)tc_call(0x802343e4u, &a);
                        }
                        a.f[0] = (f64)rdf32(0x805751d0u);
                        a.r[0] = 0x817fdfa8u;
                        a.r[1] = 0x817fdfa8u;
                        f1 = tc_callf(0x802343c8u, &a);
                        r4 = tc_lastr4();
                        wrf32d(r29 + 0x90u, (f64)rdf32(0x817fdfa8u));
                        wrf32d(r29 + 0x94u, (f64)rdf32(0x817fdfacu));
                        wrf32d(r29 + 0x98u, (f64)rdf32(0x817fdfb0u));
                    }
                }
            }
        }
        r4 = rd32((u32)param_1 + 0xab8u);
        r0 = (u32)((s32)(ppc_mulhw(-2004318071, (s32)r4) + r4) >> 4);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0x1eu;
        r0 = r4 - r0;
        if (r0 == 0u) {
            r3 = 0u;
            if (rd32((u32)param_1 + 0x1018u) != 0u || rd32((u32)param_1 + 0xf70u) != 0u) {
                r3 = 1u;
            }
            if (r3 == 0u) {
                a.f[0] = (f64)rdf32(0x805751e8u);
                a.f[1] = (f64)rdf32(0x80575200u);
                a.f[2] = (f64)rdf32(0x80575204u);
                a.f[3] = (f64)rdf32((u32)param_1 + 0xad0u);
                a.r[0] = (u32)param_1 + 0xf28u;
                a.r[1] = (u32)param_1 + 0xac4u;
                a.r[2] = 0x80808au;
                a.r[3] = 0u;
                a.r[4] = (u32)param_1;
                (void)tc_call(0x800cdc78u, &a);
            }
        }
        wr32((u32)param_1 + 0xab8u, rd32((u32)param_1 + 0xab8u) - 1u);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xbu;
        (void)tc_call(0x801867a0u, &a);
    }
    return;
}
