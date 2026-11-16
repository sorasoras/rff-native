#include "tc_rt.h"

u32 fn_801fe6b8(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(rd32((u32)param_1 + 0x1cu) + 0x9dcu);
    a.r[0] = r31;
    r3 = tc_call(0x801f88d0u, &a);
    if (r3 != 0u) {
        a.r[0] = r31;
        r3 = tc_call(0x801f87c8u, &a);
        c0lt = (s32)r3 < 1;
        if (r3 == 1u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
            a.r[1] = 0u;
            (void)tc_call(0x800f8544u, &a);
        } else if (c0lt && (s32)r3 >= 0) {
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
            a.r[1] = 2u;
            (void)tc_call(0x800f8544u, &a);
        }
        (void)tc_call(0x80052dc0u, &a);
        wr32(rd32((u32)param_1 + 0x1cu) + 0x9dcu, 0u);
    }
    return 1u;
}
