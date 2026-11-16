#include "tc_rt.h"

u32 fn_80120678(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    if (param_2 < 0) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + (((u32)param_2 << 7u) & 0xffffff80u) + 0x44u);
        c0eq = r3 == 0u;
        if (!c0eq) {
            r31 = 0u;
            if (!c0eq) {
                a.r[0] = r3;
                r3 = tc_call(0x802f6540u, &a);
                if (r3 != 0u) {
                    r31 = 1u;
                }
            }
            if (r31 != 0u) {
                r30 = 1u;
            }
        }
        r3 = r30;
    }
    return r3;
}
