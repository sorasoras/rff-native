#include "tc_rt.h"

void fn_8030aa30(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r4 = (u32)rd8((u32)param_1 + 0x8cu) + rd32((u32)param_1 + 0x48u);
    if ((s32)r4 <= 127) {
        r29 = r4 & ~(u32)((s32)r4 >> 31);
    } else {
        r29 = 0x7fu;
    }
    r30 = rd32((u32)param_1 + 0xe38u);
    r31 = r30 + 0x10u;
    a.r[0] = r31;
    (void)tc_call(0x8022d56cu, &a);
    r28 = (u32)param_1 + 0xe0u;
    a.r[0] = r30 + 4u;
    a.r[1] = r28;
    (void)tc_call(0x802debd0u, &a);
    r3 = rd32(r30 + 8u);
    r0 = r30 + 8u;
    while (r3 != r0) {
        r5 = (u32)rd8(r3 - 0x54u) + rd32(r3 - 0x98u);
        if ((s32)r5 <= 127) {
            r4 = r5 & ~(u32)((s32)r5 >> 31);
        } else {
            r4 = 0x7fu;
        }
        if ((s32)r29 < (s32)r4) break;
        r3 = rd32(r3);
    }
    wr32(0x817fdfe8u, r3);
    a.r[0] = r30 + 4u;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = r28;
    (void)tc_call(0x802deba4u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022d648u, &a);
    return;
}
