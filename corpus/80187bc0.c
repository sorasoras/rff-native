#include "tc_rt.h"

void fn_80187bc0(s32 param_1)
{
    u32 c0eq = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    c0eq = rd32((u32)param_1 + 0xabcu) == 0u;
    if (c0eq) {
        r4 = 0u;
        if (rd32((u32)param_1 + 0x1018u) != 0u || rd32((u32)param_1 + 0xf70u) != 0u) {
            r4 = 1u;
        }
        if (r4 == 0u) {
            f2 = (f64)rdf32(0x805751f0u);
            a.f[0] = (f64)rdf32(0x805751e8u);
            a.f[1] = f2;
            a.f[2] = f2;
            a.f[3] = (f64)rdf32((u32)param_1 + 0xad0u);
            a.r[0] = (u32)param_1 + 0xf28u;
            a.r[1] = (u32)param_1 + 0xac4u;
            a.r[2] = 0x10808au;
            a.r[3] = 0u;
            a.r[4] = (u32)param_1;
            (void)tc_call(0x800cdc78u, &a);
            wr32((u32)param_1 + 0xab8u, rd32((u32)param_1 + 0xab8u) - 1u);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x8018677cu, &a);
    } else {
        if (!c0eq) {
            if ((s32)rd32((u32)param_1 + 0xab8u) > 0) {
                r4 = 0u;
                if (rd32((u32)param_1 + 0x1018u) != 0u || rd32((u32)param_1 + 0xf70u) != 0u) {
                    r4 = 1u;
                }
                if (r4 != 0u) {
                    return;
                }
                f2 = (f64)rdf32(0x805751f0u);
                a.f[0] = (f64)rdf32(0x805751e8u);
                a.f[1] = f2;
                a.f[2] = f2;
                a.f[3] = (f64)rdf32((u32)param_1 + 0xad0u);
                a.r[0] = (u32)param_1 + 0xf28u;
                a.r[1] = (u32)param_1 + 0xac4u;
                a.r[2] = 0x10808au;
                a.r[3] = 0u;
                a.r[4] = (u32)param_1;
                (void)tc_call(0x800cdc78u, &a);
                wr32((u32)param_1 + 0xab8u, rd32((u32)param_1 + 0xab8u) - 1u);
            } else {
                r4 = 0u;
                if (rd32((u32)param_1 + 0x1018u) != 0u || rd32((u32)param_1 + 0xf70u) != 0u) {
                    r4 = 1u;
                }
                if (r4 == 0u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0xbu;
                    (void)tc_call(0x801867a0u, &a);
                } else {
                    f1 = (f64)rdf32((u32)param_1 + 0xac8u);
                    f0 = (f64)rdf32((u32)param_1 + 0xaccu);
                    wrf32d((u32)param_1 + 0xf30u, (f64)rdf32((u32)param_1 + 0xac4u));
                    wrf32d((u32)param_1 + 0xf34u, f1);
                    wrf32d((u32)param_1 + 0xf38u, f0);
                }
            }
        }
    }
    return;
}
