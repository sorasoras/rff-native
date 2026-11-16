#include "tc_rt.h"

void fn_80168e78(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (rd32((u32)param_2 + 0x1468u) == 0u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        r5 = rd32((u32)param_2 + 0xf78u);
        r5 = r5 ^ (r5 & 0x10u);
        wr32((u32)param_2 + 0xf78u, r5 | (r5 ^ 0x10000u));
        a.r[0] = (u32)param_2;
        a.r[1] = 0x7e2u;
        r3 = tc_call(0x800aef78u, &a);
        wr32((u32)param_1 + 0xcu, r3);
        f2 = (f64)rdf32(0x80574c38u);
        f0 = (f64)rdf32(0x80574c3cu);
        wrf32d(0x817fdfd8u, (f64)rdf32(0x80574c34u));
        f1 = (f64)rdf32(0x80574c28u);
        wrf32d(0x817fdfdcu, f2);
        wrf32d(0x817fdfe0u, f0);
        a.f[0] = f1;
        a.r[0] = (u32)param_2;
        a.r[1] = 0x31u;
        a.r[2] = 0xdu;
        a.r[3] = 0x817fdfd8u;
        r3 = tc_call(0x800aeaf0u, &a);
        wr32((u32)param_1 + 0x10u, r3);
    }
    r31 = 0u;
    if (rd32((u32)param_2 + 0x1468u) == 1u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x80168fb0u, &a);
    }
    r31 = 0u;
    if (rd32((u32)param_2 + 0x1468u) == 2u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        r3 = rd32((u32)param_2 + 0xe88u);
        wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    }
    return;
}
