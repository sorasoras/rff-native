#include "tc_rt.h"

f64 fn_80115b70(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    r5 = rd32((u32)param_1 + 0x58u);
    if (r5 == 0u) {
        f1 = (f64)rdf32(0x805707e4u);
    } else {
        if ((u32)((s32)rd32(r5 + 0x80u) >> 31) == 0u) {
            f1 = (f64)rdf32(0x805707e4u);
        } else {
            a.f[0] = (f64)rdf32((u32)param_1 + 0x40u);
            a.r[0] = param_2;
            a.r[1] = (u32)param_1 + 0x34u;
            r3 = tc_call(0x8010fcdcu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                f1 = (f64)rdf32(0x805707e4u);
            } else {
                if (rd32((u32)param_1 + 0x44u) != 0u) {
                    r0 = rd32((u32)param_1 + 0x50u);
                    wr32(0x817fdfc4u, rd32((u32)param_1 + 0x4cu));
                    wr32(0x817fdfc8u, r0);
                    wr32(0x817fdfccu, rd32((u32)param_1 + 0x54u));
                    r3 = rd32((u32)param_1 + 0x58u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                    f31 = f1;
                    r3 = rd32(0x817fdfc8u);
                    r0 = rd32(0x817fdfccu);
                    wr32(0x817fdfb8u, rd32(0x817fdfc4u));
                    wr32(0x817fdfbcu, r3);
                    wr32(0x817fdfc0u, r0);
                    a.f[0] = f1;
                    f1 = tc_callf(0x80262704u, &a);
                    f30 = (f64)(f32)f1;
                    a.f[0] = f31;
                    f1 = tc_callf(0x80262b10u, &a);
                    f4 = (f64)(f32)f1;
                    f1 = (f64)rdf32(0x817fdfc0u);
                    f3 = (f64)rdf32(0x817fdfb8u);
                    wrf32d(0x817fdfc4u, ppc_fmadds(f3, f30, (f64)(f32)(f1 * f4)));
                    wrf32d(0x817fdfccu, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f30)));
                    a.r[0] = 0x817fdfc4u;
                    a.r[1] = (u32)param_1 + 0x34u;
                    a.r[2] = 0x817fdfc4u;
                    (void)tc_call(0x80234380u, &a);
                    wrf32d(0x817fdfc8u, (f64)rdf32(0x80574124u));
                    a.r[0] = param_2;
                    a.r[1] = 0x817fdfc4u;
                    f1 = tc_callf(0x8010fed8u, &a);
                    f30 = f1;
                    a.f[0] = (f64)rdf32((u32)param_1 + 0x48u);
                    f1 = tc_callf(0x80262704u, &a);
                    if (f30 < (f64)(f32)f1) {
                        f1 = (f64)rdf32(0x805707e4u);
                        return f1;
                    }
                    f1 = f30;
                } else {
                    f1 = (f64)rdf32(0x8057413cu);
                }
            }
        }
    }
    return f1;
}
