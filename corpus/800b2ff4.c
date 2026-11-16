#include "tc_rt.h"

void fn_800b2ff4(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = (u32)param_4;
    a.r[4] = (u32)param_5;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
    wr32(0x817fdfe0u, r3);
    a.r[0] = 0x817fdfe0u;
    r3 = tc_call(0x80149b0cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r0 = rd32(param_1 + 0xda4u);
    r29 = r3;
    do {
        if (r0 != 0u) {
            a.r[0] = r0;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r0) + 0x20u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
                wr32(0x817fdfdcu, r3);
                a.r[0] = 0x817fdfdcu;
                a.r[1] = rd32(param_1 + 0xcecu);
                r3 = tc_call(0x8014967cu, &a);
                wr32(0x817fdfd8u, r3);
                a.r[0] = 0x817fdfd8u;
                r3 = tc_call(0x80149d4cu, &a);
                r29 = r3;
                break;
            }
        }
        if (param_4 <= 300) {
            r29 = 0x64u;
        }
    } while (0);
    a.r[0] = param_1;
    a.r[1] = (u32)param_5;
    r3 = tc_call(0x80080350u, &a);
    r29 = r29 + r3;
    r3 = tc_call(0x80040b64u, &a);
    r3 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
    if ((s32)(r3 + 1u) > (s32)r29) {
        wr32(param_1 + 0xed4u, 0u);
        a.r[0] = param_1;
        (void)tc_call(0x800b2bccu, &a);
        r3 = rd32((u32)param_5 + 0x30u);
        if ((r3 & 0x400u) == 0u) {
            if ((r3 & 0x800u) == 0u) {
                if ((r3 & 0x1000u) == 0u) {
                    if ((r3 & 0x2000u) == 0u) {
                        wrf32d(param_1 + 0x1674u, (f64)rdf32(0x80572c00u));
                    } else {
                        wrf32d(param_1 + 0x1674u, (f64)rdf32(0x8057072cu));
                    }
                } else {
                    wrf32d(param_1 + 0x1674u, (f64)rdf32(0x80570728u));
                }
            } else {
                wrf32d(param_1 + 0x1674u, (f64)rdf32(0x80570724u));
            }
        } else {
            wrf32d(param_1 + 0x1674u, (f64)rdf32(0x80570720u));
        }
        if ((u32)param_3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = 4u;
            (void)tc_call(0x800b31dcu, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = 3u;
            (void)tc_call(0x800b31dcu, &a);
        }
    }
    return;
}
