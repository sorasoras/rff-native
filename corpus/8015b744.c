#include "tc_rt.h"

void fn_8015b744(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0xcu;
    r30 = 0u;
    r29 = 0u;
    do {
        a.r[0] = r31;
        r3 = tc_call(0x8015a9dcu, &a);
        if (r3 != 0u) {
            r30 = 1u;
            break;
        }
        r29 = r29 + 1u;
        r31 = r31 + 0x24u;
    } while ((s32)r29 < 4);
    if (r30 == 0u) {
        r31 = (u32)param_1 + 0x6acu;
        r29 = 0u;
        do {
            if ((u32)((s32)((rd32(r31 + 0x34u) << 2u) & 0xc0000000u) >> 31) != 0u) {
                a.r[0] = r31;
                (void)tc_call(0x8015942cu, &a);
            }
            r29 = r29 + 1u;
            r31 = r31 + 0x3cu;
        } while ((s32)r29 < 4);
    }
    r31 = (u32)param_1 + 0x9cu;
    r29 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8015bad4u, &a);
        r29 = r29 + 1u;
        r31 = r31 + 0x17cu;
    } while ((s32)r29 < 4);
    r3 = tc_call(0x8015b6c0u, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x30u);
        r3 = rd32(r3 + 0x46cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x800d595cu, &a);
            if (r3 == 2u) {
                (void)tc_call(0x80097da4u, &a);
                (void)tc_call(0x8015cef0u, &a);
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x30u);
                a.r[0] = r3;
                a.r[1] = 1u;
                (void)tc_call(0x8015d874u, &a);
                return;
            }
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8015a314u, &a);
    }
    return;
}
