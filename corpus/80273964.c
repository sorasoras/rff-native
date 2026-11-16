#include "tc_rt.h"

void fn_80273964(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    if ((u32)param_1 == 0u) {
        r0 = (u32)rd8(0x805038dau);
        wr8(0x805038d9u, 1u);
        r0 = (r0 << 2u) & 0xfffffffcu;
        r5 = r0 - 0x7fafc880u;
        r4 = rd32(r5 + 0x16cu);
        r5 = rd32(r5 + 0x174u);
        a.r[0] = 0x80503788u;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0x80273a34u;
        a.r[4] = 0x80503814u;
        r3 = tc_call(0x802711b0u, &a);
        if (r3 == 0u) {
            return;
        }
    }
    if ((u32)rd8(0x805038dau) == 0u) {
        wr32(0x805038e0u, (u32)param_1);
    }
    wr32((((u32)rd8(0x805038dau) << 2u) & 0xfffffffcu) - 0x7fafc704u, 0u);
    if ((u32)rd8(0x805038d9u) != 0u) {
        a.r[0] = 0x80503788u;
        a.r[1] = 0x80273ce4u;
        a.r[2] = 0x80503814u;
        r3 = tc_call(0x80271d50u, &a);
        if (r3 == 0u) {
            return;
        }
    }
    (void)tc_call(0x80273ba8u, &a);
    return;
}
