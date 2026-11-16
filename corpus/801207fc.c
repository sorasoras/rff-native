#include "tc_rt.h"

void fn_801207fc(s32 param_1, u32 param_2)
{
    u32 c1eq = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x40u;
    r29 = (((0u - param_2) | param_2) >> 0x1fu) & 1u;
    r28 = 0u;
    do {
        r3 = rd32(r30 + 4u);
        c1eq = r3 == 0u;
        do {
            if (!c1eq) {
                if (param_2 == 0u) {
                    r31 = 0u;
                    if (!c1eq) {
                        a.r[0] = r3;
                        r3 = tc_call(0x802f6540u, &a);
                        if (r3 != 0u) {
                            r31 = 1u;
                        }
                    }
                    if (r31 == 0u) break;
                }
                r3 = rd32(r30 + 4u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = r29;
                    a.r[2] = 2u;
                    (void)tc_call(0x802f61c0u, &a);
                }
            }
        } while (0);
        r28 = r28 + 1u;
        r30 = r30 + 0x80u;
    } while ((s32)r28 < 48);
    return;
}
