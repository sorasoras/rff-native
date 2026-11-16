#include "tc_rt.h"

void fn_802bf514(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x20u), &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = param_2;
    a.r[1] = (u32)param_1;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    r3 = rd32((u32)param_1 + 0x14u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8026d490u, &a);
        if (r3 != 0u) {
            wr32(r3, r31);
            wr32(r3 + 4u, param_2);
        }
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = r3;
        (void)tc_call(0x802d7ad0u, &a);
    } else {
        r3 = tc_call(0x80040cccu, &a);
        if (r3 != 0u) {
            wr32(r3, r31);
            wr32(r3 + 4u, param_2);
        }
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = r3;
        (void)tc_call(0x802d7ad0u, &a);
    }
    return;
}
