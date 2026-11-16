#include "tc_rt.h"

void fn_8004bc54(s32 param_1)
{
    u32 r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    if (((u32)param_1 + 0x10000u) == 0xffffu) {
        r31 = 0u;
    } else {
        r31 = rd32(0x803c62ccu) + (((u32)param_1 << 3u) & 0xfffffff8u);
    }
    if (r31 != 0u && (s32)rd32(r31) > 0) {
        r29 = rd32(r31 + 4u);
        r28 = 0u;
        while ((s32)r28 < (s32)rd32(r31)) {
            a.r[0] = rd32(r29 + 0x40u);
            (void)tc_call(0x8004ba94u, &a);
            a.r[0] = rd32(r29 + 0x44u);
            (void)tc_call(0x8004bb74u, &a);
            r28 = r28 + 1u;
            r29 = r29 + 0x48u;
        }
        a.r[0] = rd32(0x803c62c8u);
        a.r[1] = rd32(r31 + 4u);
        (void)tc_call(0x8003b3a4u, &a);
        wr32(r31, 0u);
        wr32(r31 + 4u, 0u);
        wr32(0x803c62e0u, rd32(0x803c62e0u) - 1u);
    }
    return;
}
