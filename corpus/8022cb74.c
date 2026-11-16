#include "tc_rt.h"

u32 fn_8022cb74(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    r30 = param_3 & 1u;
    while (rd32((u32)param_1 + 0x1cu) == 0u) {
        if (r30 == 0u) {
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
            return r3;
        }
        a.r[0] = (u32)param_1 + 8u;
        (void)tc_call(0x8022ffe4u, &a);
    }
    if (param_2 != 0u) {
        wr32(param_2, rd32(rd32((u32)param_1 + 0x10u) + ((rd32((u32)param_1 + 0x18u) << 2u) & 0xfffffffcu)));
    }
    r6 = rd32((u32)param_1 + 0x14u);
    r7 = rd32((u32)param_1 + 0x18u) + 1u;
    wr32((u32)param_1 + 0x1cu, rd32((u32)param_1 + 0x1cu) - 1u);
    wr32((u32)param_1 + 0x18u, r7 - ((u32)ppc_divw((s32)r7, (s32)r6) * r6));
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802300d0u, &a);
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    r3 = 1u;
    return r3;
}
