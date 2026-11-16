#include "tc_rt.h"

void fn_800dc64c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x10u;
    a.r[1] = (u32)param_1 + 0x82cu;
    r3 = tc_call(0x8014d88cu, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        wr32(r3 + 0xcu, 0x803569c4u);
        wr32(r3, 0u);
        a.r[0] = (u32)param_2;
        a.r[1] = (u32)param_1 + 0x82cu;
        a.r[2] = 0x803569c4u;
        a.r[7] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32((u32)param_2 + 4u) + 0xcu), &a);
        f1 = tc_lastf();
        wr32(r30 + 4u, r3);
        a.r[0] = (u32)param_3;
        a.r[1] = (u32)param_1 + 0x82cu;
        a.r[2] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32((u32)param_3 + 4u) + 0xcu), &a);
        wr32(r30 + 8u, r3);
    }
    r3 = rd32((u32)param_1 + 0x28u);
    if (r3 == 0u) {
        wr32((u32)param_1 + 0x28u, r30);
    } else {
        for (;;) {
            r0 = rd32(r3);
            if (r0 == 0u) break;
            r3 = r0;
        }
        wr32(r3, r30);
    }
    return;
}
