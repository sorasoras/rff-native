#include "tc_rt.h"

void fn_8030f178(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    r5 = rd32(param_2);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    if ((r5 - 0x52570000u) != 0x5344u) {
        r0 = 0u;
    } else {
        r6 = (u32)rd16(param_2 + 6u);
        if (r6 < 0x100u) {
            r0 = 0u;
        } else {
            r0 = (((~r6 | 0x103u) - (((0x103u - r6) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
        }
    }
    if (r0 != 0u) {
        r0 = rd32(param_2 + 0x10u);
        wr32(param_1, param_2);
        if (r0 != 0u) {
            r0 = r0 + param_2;
            wr32(param_1 + 4u, r0);
        }
        r4 = rd32(param_1);
        r0 = rd32(r4 + 0x18u);
        if (r0 == 0u) {
            return;
        }
        r0 = r0 + r4;
        wr32(param_1 + 8u, r0);
        return;
    }
    return;
}
