#include "tc_rt.h"

u32 fn_80058e84(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = (u32)param_3 * 0x14u;
    if (rd32((u32)param_1 + r28 + 4u) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_3;
        a.r[2] = 1u;
        (void)tc_call(0x80058f78u, &a);
    }
    a.r[0] = param_2;
    r3 = tc_call(0x80037914u, &a);
    wr32((u32)param_1 + r28, r3);
    r31 = rd32(r3 + 8u);
    wr32((u32)param_1 + r28 + 8u, r31);
    a.r[0] = ((r31 << 2u) & 0xfffffffcu) + 0x10u;
    r3 = tc_call(0x80058868u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x80058f6cu;
        a.r[2] = 0u;
        a.r[3] = 4u;
        a.r[4] = r31;
        r3 = tc_call(0x80255464u, &a);
    }
    r31 = (u32)param_1 + r28;
    wr32(r31 + 4u, r3);
    r28 = r3;
    r29 = 0u;
    wr32(r31 + 0x10u, 1u);
    while ((s32)r29 < (s32)rd32(r31 + 8u)) {
        a.r[0] = rd32(r31);
        a.r[1] = r29;
        r3 = tc_call(0x80037988u, &a);
        wr32(r28, r3);
        a.r[0] = r3;
        (void)tc_call(0x80031edcu, &a);
        r29 = r29 + 1u;
        r28 = r28 + 4u;
    }
    return 1u;
}
