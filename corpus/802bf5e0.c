#include "tc_rt.h"

void fn_802bf5e0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = 0u;
    r3 = tc_call(0x802d7bacu, &a);
    while (r3 != 0u && rd32(r3 + 4u) != (u32)param_2) {
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = r3;
        r3 = tc_call(0x802d7bacu, &a);
    }
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = r3;
    (void)tc_call(0x802d7b40u, &a);
    r3 = rd32((u32)param_1 + 0x14u);
    if (r3 == 0u) {
        (void)tc_call(0x80040cd4u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8026d4a0u, &a);
    }
    return;
}
