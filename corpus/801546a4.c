#include "tc_rt.h"

void fn_801546a4(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r26 = (u32)param_1 + 0x80u;
    r25 = 2u;
    do {
        r29 = 0u;
        if ((u32)rd8(r26) != 0u) {
            r28 = 1u;
            c0eq = rd32(r26 + 4u) == 0u;
            if (!c0eq) {
                r27 = 0u;
                if (!c0eq) {
                    a.r[0] = r26;
                    r3 = tc_call(0x80153c3cu, &a);
                    if (r3 == 0u) {
                        r27 = 1u;
                    }
                }
                if (r27 == 0u) {
                    r28 = 0u;
                }
            }
            if (r28 != 0u) {
                r29 = 1u;
            }
        }
        if (r29 != 0u && rd32(r26 + 4u) == 0u) {
            wr8(r26, 0u);
            wr32(r26 + 4u, 0u);
            wr32(r26 + 0x30u, 0xffffffffu);
        }
        r25 = r25 - 1u;
        r26 = r26 - 0x3cu;
    } while ((s32)r25 >= 0);
    return;
}
