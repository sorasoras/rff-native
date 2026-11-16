#include "tc_rt.h"

void fn_80309d30(u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r29 = 0u;
    if ((u32)rd8(param_r3 + 0x123u) != 0u) {
        r29 = 1u;
    }
    if ((u32)rd8(param_r3 + 0x125u) != 0u) {
        r29 = 1u;
    }
    if (r29 != (u32)rd8(param_r3 + 0x124u)) {
        r30 = param_r3;
        r28 = 0u;
        while ((s32)r28 < (s32)rd32(param_r3 + 0x828u)) {
            if ((u32)rd8(r30 + 0xb74u) != 0u) {
                r3 = rd32(r30 + 0xb78u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = r29;
                    (void)tc_call(0x8030c3b4u, &a);
                }
            }
            r30 = r30 + 0x38u;
            r28 = r28 + 1u;
        }
        wr8(param_r3 + 0x124u, (u8)r29);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
