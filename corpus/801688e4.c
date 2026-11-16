#include "tc_rt.h"

void fn_801688e4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r4 = param_2;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    if (rd32(param_2 + 0x1468u) == 8u) {
        a.r[0] = param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80574c24u);
        f1 = tc_callf(rd32(rd32(param_2) + 0x50u), &a);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
        wr32(0x817fdfe8u, r3);
        a.r[0] = 0x817fdfe8u;
        f1 = tc_callf(0x8014995cu, &a);
        r4 = tc_lastr4();
        r3 = rd32(param_2 + 0xf78u);
        wrf32d(param_2 + 0xd50u, f1);
        wr32(param_2 + 0xf78u, r3 | (r3 ^ 1u));
    }
    if (rd32(param_2 + 0xf00u) == 0x78u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80574c20u);
        (void)tc_call(rd32(rd32(param_2) + 0x50u), &a);
        a.f[0] = (f64)rdf32(0x80574c20u);
        a.r[0] = param_2;
        a.r[1] = 0xaau;
        a.r[2] = 0xffffffffu;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800aeaf0u, &a);
        a.r[0] = r3;
        a.r[1] = 0x3cu;
        (void)tc_call(0x80157f70u, &a);
        r3 = rd32(param_2 + 0xf78u);
        wr32(param_2 + 0xf78u, r3 | (r3 ^ 0x10000u));
    }
    r31 = 0u;
    if (rd32(param_2 + 0x1468u) == 9u) {
        a.r[0] = param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        r3 = rd32(param_2 + 0xe88u);
        wr32(param_2 + 0xed4u, 0u);
        wr32(param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    }
    return;
}
