#include "tc_rt.h"

void fn_80187530(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r4 = rd32(param_1 + 0xab8u);
    if ((s32)r4 > 163) {
        a.r[0] = param_1;
        a.r[1] = 0xbu;
        (void)tc_call(0x801867a0u, &a);
        return;
    }
    if ((s32)r4 > 30) {
        r30 = r4 - 0x1eu;
        r0 = (u32)((s32)(ppc_mulhw(-1840700269, (s32)r30) + r30) >> 3);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0xeu;
        r29 = r30 - r0;
        if (r29 == 0u) {
            f0 = (f64)rdf32(0x805751f4u);
            f1 = (f64)rdf32(0x80575220u);
            wrf32d(0x817fdfe0u, f0);
            f2 = (f64)rdf32(0x805751f0u);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfd8u, f0);
            a.f[0] = f1;
            a.f[1] = f2;
            a.r[0] = 0x817fdfd8u;
            f1 = tc_callf(0x80079000u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x817fdfd8u;
            a.r[1] = r3;
            a.r[2] = 0x817fdfd8u;
            (void)tc_call(0x80234380u, &a);
            f1 = (f64)rdf32(0x805751b8u);
            wrf32d(param_1 + 0xac4u, (f64)rdf32(0x817fdfd8u));
            wrf32d(param_1 + 0xac8u, (f64)rdf32(0x817fdfdcu));
            wrf32d(param_1 + 0xaccu, (f64)rdf32(0x817fdfe0u));
            a.f[0] = f1;
            a.r[0] = 0xa1u;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
        }
        if ((s32)r30 > 14 && r29 == 6u) {
            r4 = param_1;
            r5 = 0u;
            ctr = 5u;
            for (;;) {
                r3 = 0u;
                if (rd32(r4 + 0x1018u) != 0u || rd32(r4 + 0xf70u) != 0u) {
                    r3 = 1u;
                }
                if (r3 == 0u) break;
                r4 = r4 + 0xf4u;
                r5 = r5 + 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    wr32(param_1 + 0xab8u, rd32(param_1 + 0xab8u) + 1u);
                    return;
                }
            }
            a.f[0] = (f64)rdf32(0x805751c4u);
            a.f[1] = (f64)rdf32(0x80575224u);
            a.f[2] = (f64)rdf32(0x805751d4u);
            a.f[3] = (f64)rdf32(param_1 + 0xad0u);
            a.r[0] = param_1 + (r5 * 0xf4u) + 0xf28u;
            a.r[1] = param_1 + 0xac4u;
            a.r[2] = 0x40808au;
            a.r[3] = 0u;
            a.r[4] = param_1;
            (void)tc_call(0x800cdc78u, &a);
        }
    }
    wr32(param_1 + 0xab8u, rd32(param_1 + 0xab8u) + 1u);
    return;
}
