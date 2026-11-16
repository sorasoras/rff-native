#include "tc_rt.h"

void fn_8020607c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xb98u;
    a.r[1] = 0xeu;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x802001ccu, &a);
    r29 = r3;
    r28 = rd32(rd32((u32)param_1 + 0x20u) + 0x20u);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x8011a4b4u, &a);
    r30 = r3;
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x68u);
    a.r[1] = r28;
    r3 = tc_call(0x80197508u, &a);
    if (r3 != 0u) {
        r4 = rd32((u32)param_1 + 0x1cu);
        if (r29 != rd32(rd32(r4 + 0x28u) + 0x2cu)) {
            if ((u32)rd16(r30 + 0xbcu) == 0x2e8u) {
                a.r[0] = rd32(r4 + 0x1cu) + 0xc08u;
                a.r[1] = 0x16u;
                (void)tc_call(0x8020f18cu, &a);
            } else {
                a.r[0] = rd32(r4 + 0x1cu) + 0xc08u;
                a.r[1] = 0xdu;
                (void)tc_call(0x8020f18cu, &a);
            }
        } else if ((u32)rd16(r30 + 0xbcu) == 0x2e8u) {
            a.r[0] = rd32(r4 + 0x1cu) + 0xc08u;
            a.r[1] = 0x16u;
            (void)tc_call(0x8020f18cu, &a);
        } else {
            a.r[0] = rd32(r4 + 0x1cu) + 0xc08u;
            a.r[1] = 0xdu;
            (void)tc_call(0x8020f18cu, &a);
        }
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
    a.r[1] = 0xdu;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x80200098u, &a);
    a.r[0] = r3;
    a.r[1] = 1u;
    (void)tc_call(0x8011a004u, &a);
    return;
}
