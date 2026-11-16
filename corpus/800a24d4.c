#include "tc_rt.h"

void fn_800a24d4(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x10u);
    c0eq = r0 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = r0;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r0) + 8u), &a);
        }
        wr32((u32)param_1 + 0x10u, 0u);
    }
    r3 = rd32((u32)param_1 + 4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8006f3ecu;
        a.r[2] = 0x800a2448u;
        a.r[3] = 0u;
        (void)tc_call(0x80255794u, &a);
        wr32((u32)param_1 + 4u, 0u);
    }
    wr32((u32)param_1 + 0xcu, 0u);
    return;
}
