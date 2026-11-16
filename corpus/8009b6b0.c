#include "tc_rt.h"

s32 fn_8009b6b0(u32 param_1)
{
    u32 r3 = 0, r12 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0u;
    if (param_1 != 0u) {
        r12 = rd32(param_1);
        if ((((r12 != 0u && rd32(param_1 + 4u) != 0u) && (rd32(param_1 + 0xcu) != 0u && rd32(param_1 + 0x10u) != 0u)) && ((rd32(param_1 + 0x14u) != 0u && rd32(param_1 + 0x18u) != 0u) && (rd32(param_1 + 0x1cu) != 0u && rd32(param_1 + 0x20u) != 0u))) && ((rd32(param_1 + 0x24u) != 0u && rd32(param_1 + 0x28u) != 0u) && (rd32(param_1 + 0x2cu) != 0u && rd32(param_1 + 0x30u) != 0u))) {
            a.r[0] = 0xccu;
            a.r[1] = rd32(param_1 + 0x40u);
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            r31 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = param_1;
                (void)tc_call(0x8009b034u, &a);
                a.r[0] = r31;
                r3 = tc_call(0x8009b174u, &a);
                if ((u32)(s8)r3 != 0u) {
                    r30 = 1u;
                    wr32(r31 + 0x50u, rd32(r31 + 0x50u) | 0x80000000u);
                }
            }
        }
    }
    if (r30 == 0u && r31 != 0u) {
        a.r[0] = r31;
        (void)tc_call(0x8009b7ecu, &a);
        r31 = 0u;
    }
    return (s32)r31;
}
