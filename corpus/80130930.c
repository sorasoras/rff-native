#include "tc_rt.h"

void fn_80130930(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x688u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x801e63a4u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x74u;
    } while ((s32)r30 < 3);
    a.r[0] = (u32)param_1 + 0x7ecu;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80131030u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x8b8u);
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = r3;
    a.r[1] = rd32((u32)param_1 + 0x864u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    r31 = (u32)param_1 + 0x5a8u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8020f078u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r30 < 4);
    return;
}
