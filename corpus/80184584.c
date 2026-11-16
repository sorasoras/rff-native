#include "tc_rt.h"

void fn_80184584(s32 param_1, s32 param_2)
{
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = rd32((u32)param_2 + 0x3ecu);
    if (rd32((u32)param_2 + 0x3e8u) == 0u) {
        r28 = (u32)param_1 + 0x64u;
        r27 = 0u;
        r29 = r28;
        do {
            if (r27 != r30) {
                a.r[0] = r29;
                a.r[1] = 0x8033a8f8u;
                (void)tc_call(0x801f100cu, &a);
            }
            r27 = r27 + 1u;
            r29 = r29 + 0x70u;
        } while ((s32)r27 < 6);
        a.r[0] = (u32)param_1 + (r30 * 0x70u) + 0x64u;
        a.r[1] = 0x8033a925u;
        (void)tc_call(0x801f100cu, &a);
        r27 = 0u;
        do {
            a.r[0] = r28;
            a.r[1] = 0u;
            (void)tc_call(0x801f10b8u, &a);
            r27 = r27 + 1u;
            r28 = r28 + 0x70u;
        } while ((s32)r27 < 6);
    }
    return;
}
