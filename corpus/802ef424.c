#include "tc_rt.h"

void fn_802ef424(u32 param_1, u32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(param_1) < param_2) {
        c0eq = rd32(param_1 + 4u) == 0u;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = rd32(0x80571d40u);
                (void)tc_call(0x8026d4a0u, &a);
            }
            wr32(param_1 + 4u, 0u);
            wr8(param_1, 0u);
            wr8(param_1 + 1u, 0u);
        }
        a.r[0] = rd32(0x80571d40u);
        r3 = tc_call(0x8026d490u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        }
        wr32(param_1 + 4u, r3);
        if (r3 != 0u) {
            wr8(param_1, (u8)param_2);
        }
    }
    return;
}
