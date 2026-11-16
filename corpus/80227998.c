#include "tc_rt.h"

u32 fn_80227998(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (((u32)param_3 + 0x1fu) >> 5u) & 0x7ffffffu;
    r30 = ((r31 + 0x7fu) >> 7u) & 0x1ffffffu;
    r29 = (u32)param_2;
    r28 = (u32)param_1;
    while (r31 != 0u) {
        if (r31 < 0x80u) {
            a.r[0] = r28;
            a.r[1] = r29;
            a.r[2] = r31;
            (void)tc_call(0x80227974u, &a);
            r31 = 0u;
        } else {
            a.r[0] = r28;
            a.r[1] = r29;
            a.r[2] = 0u;
            (void)tc_call(0x80227974u, &a);
            r31 = r31 - 0x80u;
            r28 = r28 + 0x1000u;
            r29 = r29 + 0x1000u;
        }
    }
    return r30;
}
