#include "tc_rt.h"

void fn_800901e8(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xcu) != 0u) {
        r31 = 0u;
        while ((s32)r31 < (s32)rd32(param_1 + 4u)) {
            r30 = 0u;
            while ((s32)r30 < (s32)rd32(param_1)) {
                a.r[0] = rd32(param_1 + 8u) + ((r31 + (rd32(param_1 + 4u) * r30)) * 0x9cu);
                a.r[1] = 3u;
                (void)tc_call(0x8008d9dcu, &a);
                a.r[0] = rd32(param_1 + 8u) + ((r31 + (rd32(param_1 + 4u) * r30)) * 0x9cu);
                (void)tc_call(0x8008d864u, &a);
                r30 = r30 + 1u;
            }
            r31 = r31 + 1u;
        }
    }
    return;
}
