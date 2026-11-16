#include "tc_rt.h"

u32 fn_8004c51c(s32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (((u32)param_1 + 0x10000u) == 0xffffu) {
        r5 = 0u;
    } else {
        r5 = rd32(0x803c62ccu) + (((u32)param_1 << 3u) & 0xfffffff8u);
    }
    if (r5 == 0u) {
        return 0u;
    }
    r3 = rd32(r5);
    r5 = rd32(r5 + 4u);
    r31 = r5 + (((u32)param_2 - ((u32)ppc_divw(param_2, (s32)r3) * r3)) * 0x48u);
    if (r31 == 0u) {
        return 0u;
    }
    a.r[0] = rd32(r31 + 0x40u);
    (void)tc_call(0x8004ba94u, &a);
    a.r[0] = rd32(r31 + 0x44u);
    (void)tc_call(0x8004bb74u, &a);
    r3 = 0u;
    if ((u32)param_3 != 0u && rd32((u32)param_3 + 0x14u) != 0u) {
        r3 = 1u;
    }
    if (r3 == 0u) {
        return 0u;
    }
    a.r[0] = (u32)param_3;
    a.r[1] = param_4;
    r3 = tc_call(0x8004c248u, &a);
    r30 = r3;
    a.r[0] = (u32)param_3;
    a.r[1] = param_4;
    r3 = tc_call(0x8004c3d4u, &a);
    a.r[0] = r31;
    a.r[1] = (u32)param_3;
    a.r[2] = r30;
    a.r[3] = r3;
    (void)tc_call(0x8004bedcu, &a);
    return 0u;
}
