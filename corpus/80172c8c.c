#include "tc_rt.h"

void fn_80172c8c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x804863d8u);
    if (rd32(rd32(0x805711ccu) + 0xfcu) == 2u) {
        f3 = (f64)rdf32(0x80574d08u);
        f2 = (f64)rdf32(0x80574e58u);
        f1 = (f64)rdf32(0x80574ce0u);
        f0 = (f64)rdf32(0x80574e5cu);
        wrf32d((u32)param_1 + 0x18e4u, (f64)rdf32(0x80574cd8u));
        wrf32d((u32)param_1 + 0x18e8u, f3);
        wrf32d((u32)param_1 + 0x18ecu, f2);
        wrf32d((u32)param_1 + 0x18f0u, f1);
        wrf32d((u32)param_1 + 0x1a94u, f2);
        wrf32d((u32)param_1 + 0x1a98u, f3);
        wrf32d((u32)param_1 + 0x1a9cu, f0);
        wrf32d((u32)param_1 + 0x1aa0u, f1);
    } else {
        f3 = (f64)rdf32(0x80574cd8u);
        f2 = (f64)rdf32(0x80574e58u);
        f1 = (f64)rdf32(0x80574d08u);
        f0 = (f64)rdf32(0x80574e5cu);
        wrf32d((u32)param_1 + 0x18e4u, f3);
        wrf32d((u32)param_1 + 0x18e8u, f3);
        wrf32d((u32)param_1 + 0x18ecu, f2);
        wrf32d((u32)param_1 + 0x18f0u, f1);
        wrf32d((u32)param_1 + 0x1a94u, f2);
        wrf32d((u32)param_1 + 0x1a98u, f3);
        wrf32d((u32)param_1 + 0x1a9cu, f0);
        wrf32d((u32)param_1 + 0x1aa0u, f1);
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80171e70u, &a);
    if ((s32)(s8)r3 >= 0) {
        wr32((u32)param_1 + 0x1d2cu, 0x39u);
    } else {
        a.r[0] = r31;
        a.r[1] = 0u;
        r3 = tc_call(0x80069478u, &a);
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x1d2cu, 0x3au);
        } else {
            wr32((u32)param_1 + 0x1d2cu, 0x3bu);
        }
    }
    r3 = rd32((u32)param_1 + 0x1950u);
    wr32((u32)param_1 + 0x1d30u, 0x3bu);
    r31 = rd32((u32)param_1 + 0x1d2cu);
    wr32((u32)param_1 + 0x1d34u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        if ((s32)r3 > (s32)r31) {
            wr32((u32)param_1 + 0x1954u, r31);
        }
    }
    r3 = rd32((u32)param_1 + 0x1b00u);
    r31 = rd32((u32)param_1 + 0x1d30u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        if ((s32)r3 > (s32)r31) {
            wr32((u32)param_1 + 0x1b04u, r31);
        }
    }
    r3 = rd32((u32)param_1 + 0x1cb0u);
    r31 = rd32((u32)param_1 + 0x1d34u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        if ((s32)r3 > (s32)r31) {
            wr32((u32)param_1 + 0x1cb4u, r31);
        }
    }
    return;
}
