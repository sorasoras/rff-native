#include "tc_rt.h"

void fn_801d6464(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d5a50u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r29 = r3;
    if ((s32)r3 <= 0) {
        r29 = 1u;
    }
    r30 = (u32)param_1;
    wr32((u32)param_1 + 0x268u, 0u);
    r28 = 0u;
    wr32((u32)param_1 + 0x26cu, 0u);
    wr32((u32)param_1 + 0x270u, 0u);
    wr32((u32)param_1 + 0x274u, 0u);
    wr32((u32)param_1 + 0x278u, 0u);
    wr32((u32)param_1 + 0x27cu, 0u);
    wr32((u32)param_1 + 0x280u, 0u);
    wr32((u32)param_1 + 0x284u, 0u);
    wr32((u32)param_1 + 0x288u, 0u);
    wr32((u32)param_1 + 0x28cu, 0u);
    while ((s32)r28 < (s32)r29) {
        if (r28 == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x801d5ad0u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r3 = (u32)param_1 + ((r3 << 2u) & 0xfffffffcu);
            r3 = rd32(r3 + 0x258u);
            wr32(r30 + 0x268u, r3);
            wr32(r3 + 0x68u, 1u);
            wr32(rd32(r30 + 0x268u) + 0x6cu, 0u);
        } else {
            if (r28 == (r29 - 1u)) {
                a.r[0] = (u32)param_1;
                a.r[1] = 1u;
                r3 = tc_call(0x801d5b5cu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r3 = (u32)param_1 + ((r3 << 2u) & 0xfffffffcu);
                r3 = rd32(r3 + 0x258u);
                wr32(r30 + 0x268u, r3);
                wr32(r3 + 0x68u, 0u);
                wr32(rd32(r30 + 0x268u) + 0x6cu, 1u);
            } else {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                r3 = tc_call(0x801d5b5cu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r3 = (u32)param_1 + ((r3 << 2u) & 0xfffffffcu);
                r3 = rd32(r3 + 0x258u);
                wr32(r30 + 0x268u, r3);
                wr32(r3 + 0x68u, 0u);
                wr32(rd32(r30 + 0x268u) + 0x6cu, 0u);
            }
        }
        r30 = r30 + 4u;
        r28 = r28 + 1u;
    }
    wr32((u32)param_1 + 0x290u, 0u);
    if (r29 == 1u) {
        wr32(rd32((u32)param_1 + 0x268u) + 0x6cu, 1u);
    }
    r3 = rd32((u32)param_1 + 0x268u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x74u) + 0xcu), &a);
    wr32((u32)param_1 + 0x294u, 0u);
    return;
}
