#include "tc_rt.h"

void fn_8018f8c0(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 4u;
    r30 = 1u;
    do {
        if ((u32)param_2 == rd32(r31 + 0x98u)) {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32(r31 + 4u);
            r3 = tc_call(0x80190050u, &a);
            if (r3 != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = rd32(r31 + 4u);
                a.r[2] = rd32(r31 + 0xa8u);
                (void)tc_call(0x8018f214u, &a);
            }
            r4 = rd32(r31 + 0x98u);
            r5 = (u32)((s32)~((r4 - 1u) | (1u - r4)) >> 31) + 4u;
            if (r5 != 0xffffffffu) {
                a.r[0] = (u32)param_1;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = 1u;
                a.r[4] = 0u;
                (void)tc_call(0x8018fb18u, &a);
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 4);
    return;
}
