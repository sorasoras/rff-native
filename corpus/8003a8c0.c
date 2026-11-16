#include "tc_rt.h"

void fn_8003a8c0(s32 param_1, u32 param_2)
{
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8024f870u, &a);
    r30 = (u32)param_1;
    r28 = 0u;
    while ((s32)r28 < (s32)rd8((u32)param_1 + 0x19u)) {
        r29 = rd32(r30 + 0x40u);
        r31 = r29 & 0xffu;
        a.r[0] = r31;
        a.r[1] = (r29 >> 0x1cu) & 0xfu;
        (void)tc_call(0x8024f27cu, &a);
        a.r[0] = 0u;
        a.r[1] = r31;
        a.r[2] = (r29 >> 0x14u) & 0xfu;
        a.r[3] = (r29 >> 0x10u) & 0xfu;
        a.r[4] = (r29 >> 0x18u) & 0xfu;
        (void)tc_call(0x8024f8a4u, &a);
        a.r[0] = r31;
        a.r[1] = rd32(r30 + 0x38u);
        a.r[2] = (r29 >> 8u) & 0xffu;
        (void)tc_call(0x8024fef4u, &a);
        r30 = r30 + 0x10u;
        r28 = r28 + 1u;
    }
    a.r[0] = param_2;
    (void)tc_call(0x8003a678u, &a);
    r30 = rd32((u32)param_1 + 0x2cu);
    r31 = 0u;
    while ((s32)r31 < (s32)rd16((u32)param_1 + 0x1cu)) {
        a.r[0] = (u32)(s16)rd16(r30 + 2u);
        a.r[1] = (u32)rd16((u32)param_1 + 0x1au);
        (void)tc_call(0x80040358u, &a);
        a.r[0] = rd32(r30 + 8u);
        a.r[1] = rd32(r30 + 0xcu);
        (void)tc_call(0x80254170u, &a);
        r31 = r31 + 1u;
        r30 = r30 + 0x10u;
    }
    return;
}
