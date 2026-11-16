#include "tc_rt.h"

void fn_8031f7c0(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r28 = param_r3 + rd32(param_r3);
    r29 = (u32)rd16(r28 + 4u);
    r27 = r28 + 8u;
    while ((s32)r31 < (s32)r29) {
        r4 = (u32)rd8(r27);
        r0 = (u32)rd8(r27 + 1u);
        r27 = r27 + 2u;
        r4 = (r4 << 8u) & 0xffffff00u;
        r0 = r4 + r0;
        r4 = r27;
        r27 = r27 + r0;
        r27 = r27 + 8u;
        a.r[0] = param_r4;
        a.r[1] = r4;
        r3 = tc_call(0x8025beb0u, &a);
        if (r3 == 0u) {
            return;
        }
        r31 = r31 + 1u;
    }
    return;
}
