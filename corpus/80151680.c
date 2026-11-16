#include "tc_rt.h"

void fn_80151680(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    if (rd32(param_2 + 0x1468u) == 1u) {
        a.r[0] = param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        r4 = rd32(param_2 + 0xf78u);
        f1 = (f64)rdf32(0x80574824u);
        wr32(param_2 + 0xf78u, r4 | (r4 ^ 1u));
        a.r[0] = param_2;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_2) + 0x50u), &a);
        r0 = rd32(param_2 + 0x9cu);
        wr32(param_2 + 0x1b0u, 1u);
        r0 = r0 | 0x4000000u;
        wr32(param_2 + 0x9cu, r0);
    }
    if ((s32)rd32((u32)param_1 + 0xcu) >= 30) {
        wr32((u32)param_1 + 0xcu, 0u);
        a.r[0] = param_2;
        a.r[1] = 0x2008u;
        (void)tc_call(0x800aef78u, &a);
    }
    f1 = (f64)rdf32(0x80574828u);
    wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + 1u);
    a.f[0] = f1;
    a.r[0] = param_2;
    r3 = tc_call(0x800b3310u, &a);
    if (r3 != 0u || (s32)rd32((u32)param_1 + 8u) >= 90) {
        wr32(param_2 + 0xed4u, 0u);
        a.r[0] = param_2;
        a.r[1] = 0x27u;
        (void)tc_call(0x800b31a0u, &a);
    }
    wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
    return;
}
