#include "tc_rt.h"

void fn_800311a4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    while (r30 < rd32((u32)param_1 + 0x34u)) {
        r31 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r30);
        if ((u32)rd8(rd32(r31 + 0x3cu) + 0x62u) != 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80031188u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            a.r[2] = r3;
            (void)tc_call(0x8007c600u, &a);
        }
        r30 = r30 + 1u;
    }
    r30 = 0u;
    while (r30 < rd32((u32)param_1 + 0x34u)) {
        r4 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r30);
        if (rd32(r4 + 0x64u) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            (void)tc_call(0x8007c76cu, &a);
        }
        r30 = r30 + 1u;
    }
    return;
}
