#include "tc_rt.h"

void fn_80090298(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xcu) != 0u) {
        r31 = 0u;
        while ((s32)r31 < (s32)rd32(param_1)) {
            r30 = 0u;
            for (;;) {
                r0 = rd32(param_1 + 4u);
                if ((s32)r30 >= (s32)r0) break;
                r0 = r0 * r31;
                r0 = r30 + r0;
                r0 = r0 * 0x9cu;
                a.r[0] = rd32(param_1 + 8u) + r0;
                a.r[1] = param_2;
                a.r[2] = param_3;
                (void)tc_call(0x8008d7b4u, &a);
                r30 = r30 + 1u;
            }
            r31 = r31 + 1u;
        }
    }
    return;
}
