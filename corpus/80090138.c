#include "tc_rt.h"

void fn_80090138(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    while ((s32)r31 < (s32)rd32(param_1 + 4u)) {
        r30 = 0u;
        while ((s32)r30 < (s32)rd32(param_1)) {
            a.r[0] = rd32(param_1 + 8u) + ((r31 + (rd32(param_1 + 4u) * r30)) * 0x9cu);
            (void)tc_call(0x8008dca0u, &a);
            r30 = r30 + 1u;
        }
        r31 = r31 + 1u;
    }
    r3 = rd32(param_1 + 8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8009009cu;
        a.r[2] = 0x8008ff80u;
        a.r[3] = 0u;
        (void)tc_call(0x80255794u, &a);
        wr32(param_1 + 8u, 0u);
    }
    return;
}
