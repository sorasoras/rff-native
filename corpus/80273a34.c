#include "tc_rt.h"

void fn_80273a34(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = (((u32)rd8(0x805038dau) << 2u) & 0xfffffffcu) - 0x7fafc880u;
    if ((u32)param_1 == rd32(r4 + 0x174u)) {
        wr32(r4 + 0x17cu, (u32)param_1);
        wr8(0x805038d9u, 0u);
        a.r[0] = 0x80503788u;
        a.r[1] = 0x80273b1cu;
        a.r[2] = 0x80503814u;
        r3 = tc_call(0x80271d50u, &a);
        if (r3 == 0u) {
            return;
        }
    }
    if ((u32)rd8(0x805038dau) == 0u) {
        r0 = 0xffffff80u;
        if ((u32)param_1 != 0u) {
            r0 = (u32)param_1;
        }
        wr32(0x805038e0u, r0);
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
