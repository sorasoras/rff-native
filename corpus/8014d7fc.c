#include "tc_rt.h"

u32 fn_8014d7fc(s32 param_1)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x48u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x802f70e0u, &a);
    } else {
        r3 = 0u;
    }
    if (r3 == 0u) {
        r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x48u);
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802f5fd8u, &a);
        }
        r3 = rd32((u32)param_1 + 0x1cu);
        if (rd32(r3 + 0x50u) != 0xffffffffu) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8014d2d8u, &a);
        } else {
            a.r[0] = r3;
            a.r[1] = 3u;
            (void)tc_call(0x8014d2d8u, &a);
        }
    }
    return 1u;
}
