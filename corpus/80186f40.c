#include "tc_rt.h"

void fn_80186f40(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r5 = rd32(param_1 + 0xab8u);
    if ((s32)r5 < 0) {
        a.r[0] = param_1;
        a.r[1] = 0xbu;
        (void)tc_call(0x801867a0u, &a);
    } else {
        r0 = (u32)((s32)(ppc_mulhw(-2004318071, (s32)r5) + r5) >> 4);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0x1eu;
        r0 = r5 - r0;
        if (r0 != 0u) {
            r4 = 0u;
            if (rd32(param_1 + 0x1018u) != 0u || rd32(param_1 + 0xf70u) != 0u) {
                r4 = 1u;
            }
            if (r4 != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = 0.0;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                r5 = 0u;
                r4 = rd32(r3);
                wr32(0x817fdfe8u, rd32(r3 + 4u));
                r0 = rd32(r3 + 8u);
                f1 = (f64)rdf32(0x817fdfe8u);
                f0 = (f64)rdf32(0x805751d0u);
                wr32(0x817fdfe4u, r4);
                f2 = (f64)(f32)(f1 + f0);
                wr32(0x817fdfecu, r0);
                f1 = (f64)rdf32(0x817fdfe4u);
                f0 = (f64)rdf32(0x817fdfecu);
                wrf32d(0x817fdfe8u, f2);
                wrf32d(param_1 + 0xf30u, f1);
                wrf32d(param_1 + 0xf34u, f2);
                wrf32d(param_1 + 0xf38u, f0);
            }
        } else {
            r4 = 0u;
            if (rd32(param_1 + 0x1018u) != 0u || rd32(param_1 + 0xf70u) != 0u) {
                r4 = 1u;
            }
            if (r4 == 0u) {
                a.f[0] = (f64)rdf32(0x805751e8u);
                a.f[1] = (f64)rdf32(0x805751ecu);
                a.f[2] = (f64)rdf32(0x805751f0u);
                a.f[3] = (f64)rdf32(param_1 + 0xad0u);
                a.r[0] = param_1 + 0xf28u;
                a.r[1] = param_1 + 0xac4u;
                a.r[2] = 0x80808au;
                a.r[3] = 0u;
                a.r[4] = param_1;
                f1 = tc_callf(0x800cdc78u, &a);
                r4 = tc_lastr4();
                r5 = 0u;
                f2 = 0.0;
            }
        }
        c0eq = rd32(param_1 + 0xac0u) == 0u;
        wr32(param_1 + 0xab8u, rd32(param_1 + 0xab8u) - 1u);
        if (!c0eq) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            f0 = (f64)rdf32(0x805751d0u);
            wrf32d(param_1 + 0xac4u, (f64)rdf32(r3));
            f1 = (f64)rdf32(r3 + 4u);
            r5 = rd32(param_1 + 0xac4u);
            wrf32d(param_1 + 0xac8u, f1);
            f0 = (f64)(f32)(f1 + f0);
            f1 = (f64)rdf32(r3 + 8u);
            wrf32d(param_1 + 0xac8u, f0);
            wrf32d(param_1 + 0xaccu, f1);
            r0 = rd32(param_1 + 0xac8u);
            wr32(0x817fdfd8u, r5);
            wr32(0x817fdfdcu, r0);
            wr32(0x817fdfe0u, rd32(param_1 + 0xaccu));
            a.r[0] = rd32(param_1 + 0xac0u);
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x8015811cu, &a);
        }
    }
    return;
}
