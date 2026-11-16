#include "tc_rt.h"

u32 fn_8022cc50(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    r31 = param_3 & 1u;
    for (;;) {
        r6 = rd32((u32)param_1 + 0x14u);
        if ((s32)r6 > (s32)rd32((u32)param_1 + 0x1cu)) break;
        if (r31 == 0u) {
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
            return r3;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8022ffe4u, &a);
    }
    r4 = rd32((u32)param_1 + 0x10u);
    r5 = r6 + rd32((u32)param_1 + 0x18u) - 1u;
    r0 = r5 - ((u32)ppc_divw((s32)r5, (s32)r6) * r6);
    wr32((u32)param_1 + 0x18u, r0);
    r0 = (r0 << 2u) & 0xfffffffcu;
    wr32(r4 + r0, param_2);
    wr32((u32)param_1 + 0x1cu, rd32((u32)param_1 + 0x1cu) + 1u);
    a.r[0] = (u32)param_1 + 8u;
    (void)tc_call(0x802300d0u, &a);
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    r3 = 1u;
    return r3;
}
