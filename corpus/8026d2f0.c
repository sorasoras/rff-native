#include "tc_rt.h"

void fn_8026d2f0(u32 param_r3, u32 param_r4)
{
    u32 r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((rd32(param_r3 + 0x38u) & 4u) != 0u) {
        a.r[0] = param_r3 + 0x20u;
        (void)tc_call(0x8022d56cu, &a);
    }
    r29 = rd32(param_r3 + 0x3cu);
    r31 = (r29 + 3u) & 0xfffffffcu;
    r30 = r31 + 0x10u;
    if (r30 <= rd32(param_r3 + 0x40u)) {
        r5 = r30 - r29;
        if ((rd32(param_r3 + 0x38u) & 1u) != 0u) {
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = r5;
            (void)tc_call(0x8000443cu, &a);
        }
        wr32(param_r3 + 0x3cu, r30);
    } else {
        r31 = 0u;
    }
    if (r31 != 0u) {
        wr32(r31, param_r4);
        wr32(r31 + 4u, r29);
        wr32(r31 + 8u, rd32(param_r3 + 0x40u));
        wr32(r31 + 0xcu, rd32(param_r3 + 0x44u));
        wr32(param_r3 + 0x44u, r31);
    }
    if ((rd32(param_r3 + 0x38u) & 4u) != 0u) {
        a.r[0] = param_r3 + 0x20u;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
