#include "tc_rt.h"

void fn_80127bd0(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xb9cu;
    a.r[1] = 0xeu;
    (void)tc_call(0x8020f18cu, &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r30 = rd32(r3 + 0xf24u);
    r3 = r3 + 0x44u;
    a.r[0] = r3;
    r3 = tc_call(0x8011a4b4u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = r3;
    a.r[2] = r30;
    r3 = tc_call(0x80125044u, &a);
    r31 = r3;
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0xc48u);
    a.r[1] = r30;
    r3 = tc_call(0x80197508u, &a);
    if (r3 != 0u) {
        if (r31 != 0u) {
            r3 = rd32((u32)param_1 + 0x1cu);
            if (rd32(r3 + 0xc44u) == 0u) {
                r3 = r3 + 0xc0cu;
                a.r[0] = r3;
                a.r[1] = 0xfu;
                (void)tc_call(0x8020f18cu, &a);
                return;
            }
            r3 = r3 + 0xc0cu;
            a.r[0] = r3;
            a.r[1] = 0x10u;
            (void)tc_call(0x8020f18cu, &a);
            return;
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
        a.r[1] = 0x11u;
        (void)tc_call(0x8020f18cu, &a);
    }
    return;
}
