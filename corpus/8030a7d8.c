#include "tc_rt.h"

void fn_8030a7d8(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802f6b64u, &a);
    r31 = (u32)param_1;
    r30 = 0u;
    do {
        a.r[0] = (u32)param_1 + 0x100u;
        a.r[1] = r30;
        r3 = tc_call(0x8030a014u, &a);
        if (r3 != 0u) {
            r3 = rd32(r31 + 0xe48u);
            if ((s32)r3 < (s32)rd32(r31 + 0xe44u)) {
                wr32(r31 + 0xe48u, r3 + 1u);
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x10u;
    } while ((s32)r30 < 8);
    return;
}
