#include "tc_rt.h"

u32 fn_801548c4(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = (u32)param_1 + 0x80u;
    r27 = 2u;
    do {
        r31 = 0u;
        if ((u32)rd8(r28) != 0u) {
            r30 = 1u;
            c0eq = rd32(r28 + 4u) == 0u;
            if (!c0eq) {
                r29 = 0u;
                if (!c0eq) {
                    a.r[0] = r28;
                    r3 = tc_call(0x80153c3cu, &a);
                    if (r3 == 0u) {
                        r29 = 1u;
                    }
                }
                if (r29 == 0u) {
                    r30 = 0u;
                }
            }
            if (r30 != 0u) {
                r31 = 1u;
            }
        }
        if (r31 != 0u) {
            r3 = rd32(r28 + 4u);
            return r3;
        }
        r27 = r27 - 1u;
        r28 = r28 - 0x3cu;
    } while ((s32)r27 >= 0);
    r3 = 0u;
    return r3;
}
