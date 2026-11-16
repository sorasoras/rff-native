#include "tc_rt.h"

void fn_801272f4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xb9cu;
    a.r[1] = 0xeu;
    (void)tc_call(0x8020f18cu, &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r31 = rd32(r3 + 0xf24u);
    r3 = r3 + 0x44u;
    a.r[0] = r3;
    r3 = tc_call(0x8011a4b4u, &a);
    r29 = r3;
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8012542cu, &a);
    r4 = rd32(r3 + 0x10u);
    r3 = rd32(r3 + 0x2cu);
    r30 = rd32(r3 + (((rd32(rd32((u32)param_1 + 0x1cu) + 0x430u) + r4) << 2u) & 0xfffffffcu));
    if ((u32)rd16(r29 + 0xbcu) == 0x2e8u) {
        a.r[0] = r31;
        a.r[1] = r30;
        r3 = tc_call(0x80161f9cu, &a);
        if (r3 != 0u && (u32)rd16(r30 + 0xbcu) != 0x2e8u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
            a.r[1] = 0x16u;
            (void)tc_call(0x8020f18cu, &a);
            return;
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
    } else {
        if ((u32)rd16(r30 + 0xbcu) == 0x2e8u) {
            a.r[0] = r30;
            a.r[1] = r29;
            r3 = tc_call(0x80161f9cu, &a);
            if (r3 != 0u) {
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
                a.r[1] = 0xcu;
                (void)tc_call(0x8020f18cu, &a);
                return;
            }
        }
        a.r[0] = r30;
        a.r[1] = r29;
        r3 = tc_call(0x80161f9cu, &a);
        if (r3 != 0u) {
            a.r[0] = r31;
            a.r[1] = r30;
            r3 = tc_call(0x80161f9cu, &a);
            if (r3 != 0u) {
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
                a.r[1] = 0x16u;
                (void)tc_call(0x8020f18cu, &a);
                return;
            }
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
    }
    return;
}
