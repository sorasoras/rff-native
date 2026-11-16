#include "tc_rt.h"

void fn_801ce724(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 3;
    if ((u32)param_2 != 3u) {
        if (!c0lt) {
            return;
        }
        if ((u32)param_2 != 0u) {
            return;
        }
        r3 = rd32((u32)param_1 + 0xd30u);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = rd32((u32)param_1 + 0xd30u);
        (void)tc_call(0x80157f30u, &a);
        r4 = rd32(rd32((u32)param_1 + 0xd30u) + 0x10u);
        if ((s32)r4 >= 0) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            (void)tc_call(0x801206f4u, &a);
        }
        wr32((u32)param_1 + 0xd30u, 0u);
    } else {
        r3 = rd32((u32)param_1 + 0xeccu);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32((u32)param_1 + 0xeccu);
                (void)tc_call(0x80157f30u, &a);
                wr32((u32)param_1 + 0xeccu, 0u);
            }
        }
    }
    return;
}
