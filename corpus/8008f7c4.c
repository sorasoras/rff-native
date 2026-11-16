#include "tc_rt.h"

void fn_8008f7c4(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(param_1);
    r5 = (u32)rd8(r6 + 1u);
    if (r5 == 3u) {
        r4 = rd32(param_1 + 0x8cu);
        if ((u32)((s32)r4 >> 31) != 0u) {
            r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw(r5) << 0x1au) & 0x80000000u);
            wr32(param_1 + 0x8cu, r4);
        }
        wr8(rd32(param_1) + 1u, 0u);
    } else {
        a.r[0] = r5;
        a.r[1] = (u32)rd8(r6 + 2u);
        a.r[2] = (u32)rd8(r6 + 3u);
        r3 = tc_call(0x8008dbc4u, &a);
        r3 = ((r3 << 2u) & 0xfffffffcu) - 0x7fb8e130u;
        if ((u32)rd8(r3 + 0xc62u) != 0u) {
            r4 = rd32(param_1 + 0x8cu);
            if ((u32)((s32)r4 >> 31) != 0u) {
                r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1) + 3u) - 3u) << 0x1au) & 0x80000000u);
                wr32(param_1 + 0x8cu, r4);
            }
            wr8(rd32(param_1) + 3u, 3u);
            r3 = rd32(param_1);
            wr8(r3 + 5u, (u8)((u32)rd8(r3 + 5u) & 0x7fu));
        } else {
            r4 = rd32(param_1 + 0x8cu);
            if ((u32)((s32)r4 >> 31) != 0u) {
                r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1) + 1u)) << 0x1au) & 0x80000000u);
                wr32(param_1 + 0x8cu, r4);
            }
            wr8(rd32(param_1) + 1u, 0u);
            wr8(rd32(param_1) + 5u, 1u);
        }
    }
    wr8(rd32(param_1) + 4u, 0u);
    wr8(rd32(param_1) + 7u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x8008f9dcu, &a);
    return;
}
