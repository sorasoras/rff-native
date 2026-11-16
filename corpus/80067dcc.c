#include "tc_rt.h"

void fn_80067dcc(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    f1 = tc_callf(0x800f2cbcu, &a);
    if (rd32((u32)param_1 + 0xccu) != 0u) {
        f31 = (f64)rdf32(0x803d27acu);
        f1 = (f64)rdf32(0x803d27a4u);
        f0 = (f64)rdf32(0x803d27a8u);
        wrf32d(0x817fdfc8u, (f64)rdf32(0x803d27a0u));
        wrf32d(0x817fdfccu, f1);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfd4u, f31);
        wrf32d(0x817fdfd4u, (f64)rdf32((u32)param_1 + 0xd0u));
        a.r[0] = 0x817fdfc8u;
        f1 = tc_callf(0x8004a4fcu, &a);
    }
    if (rd32((u32)param_1 + 0x88cu) != 0u && rd32((u32)param_1 + 0x144u) == 0u) {
        if (rd32((u32)param_1 + 0x1b8u) == 0u) {
            r29 = (u32)param_1 + 0x29cu;
            r28 = 0u;
            do {
                a.r[0] = r29;
                a.r[1] = param_2;
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32(r29) + 0x14u), &a);
                r28 = r28 + 1u;
                r29 = r29 + 0xacu;
            } while ((s32)r28 < 4);
        }
        r4 = rd32((u32)param_1 + 0xa48u);
        if (r4 != 0u || (rd32((u32)param_1 + 0x290u) - 0xcu) <= 4u) {
            if (r4 != 0u) {
                if (rd32((u32)param_1 + 0xa60u) == 0u) {
                    wr32(r4 + 0xb4u, rd32(r4 + 0xb4u) & 0x7fffffffu);
                } else if (rd32((u32)param_1 + 0x290u) != 1u || rd32((u32)param_1 + 0x298u) != 1u) {
                    wr32(r4 + 0xb4u, rd32(r4 + 0xb4u) | 0x80000000u);
                } else {
                    wr32(r4 + 0xb4u, rd32(r4 + 0xb4u) & 0x7fffffffu);
                }
            }
        } else if (rd32((u32)param_1 + 0x900u) == 0u) {
            if (rd32((u32)param_1 + 0xa5cu) != 0u) {
                r29 = (u32)param_1 + 0x54cu;
                r28 = 0u;
                do {
                    a.r[0] = r29;
                    a.r[1] = param_2;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    f1 = tc_callf(rd32(rd32(r29) + 0x14u), &a);
                    r28 = r28 + 1u;
                    r29 = r29 + 0x1a0u;
                } while ((s32)r28 < 2);
            }
        } else if (rd32((u32)param_1 + 0xa60u) != 0u) {
            a.r[0] = (u32)param_1 + 0x890u;
            a.r[1] = param_2;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            f1 = tc_callf(rd32(rd32((u32)param_1 + 0x890u) + 0x14u), &a);
        }
    }
    r29 = (u32)param_1;
    r28 = 0u;
    do {
        r3 = rd32(r29 + 0x163cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
        }
        r28 = r28 + 1u;
        r29 = r29 + 4u;
    } while (r28 < 2u);
    if ((f64)rdf32((u32)param_1 + 0x948u) > (f64)rdf32(0x805725d8u)) {
        r3 = rd32((u32)param_1 + 0x970u);
        if ((u32)((s32)r3 >> 31) != 0u) {
            f4 = (f64)rdf32((u32)param_1 + 0x958u);
            f3 = (f64)rdf32((u32)param_1 + 0x954u);
            f2 = (f64)rdf32((u32)param_1 + 0x950u);
            f1 = (f64)rdf32((u32)param_1 + 0x94cu);
            wr32((u32)param_1 + 0x970u, r3 & 0x7fffffffu);
            wrf32d(0x803d2790u, f1);
            wrf32d(0x803d2794u, f2);
            wrf32d(0x803d2798u, f3);
            wrf32d(0x803d279cu, f4);
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            (void)tc_call(0x8003d818u, &a);
        }
    }
    if (rd32((u32)param_1 + 0xccu) != 0u) {
        wrf32d(0x817fdfd4u, f31);
        a.r[0] = 0x817fdfc8u;
        (void)tc_call(0x8004a4fcu, &a);
    }
    return;
}
