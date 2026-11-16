#include "tc_rt.h"

void fn_802799d4(u32 param_r3)
{
    u32 ctr = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x802893e0u, &a);
    r28 = r3;
    r27 = 0u;
    r30 = 0u;
    r29 = 0x80571af0u;
    do {
        a.r[0] = r30 - 0x7faf04f3u;
        a.r[1] = r28;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u && (u32)rd8(r29) == 0u) {
            wr8(r27 - 0x7fa8e510u, 1u);
            return;
        }
        r27 = r27 + 1u;
        r29 = r29 + 1u;
        r30 = r30 + 0x46u;
    } while ((s32)r27 < 4);
    r29 = 0u;
    r3 = 0x80571af0u;
    ctr = 4u;
    while ((u32)rd8(r3) != 0u) {
        r3 = r3 + 1u;
        r29 = r29 + 1u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            return;
        }
    }
    wr8(r29 - 0x7fa8e510u, 1u);
    a.r[0] = ((r29 + 0xau) * 0x46u) - 0x7faf07afu;
    a.r[1] = r28;
    a.r[2] = 6u;
    (void)tc_call(0x80004338u, &a);
    wr8(0x80571af9u, 1u);
    return;
}
