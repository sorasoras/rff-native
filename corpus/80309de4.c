#include "tc_rt.h"

u32 fn_80309de4(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0;
    TcArgs a = {0};
    r4 = param_2;
    if (rd32((u32)param_1 + 0x104u) == 0u) {
        r3 = 0u;
    } else {
        r0 = rd32((u32)param_1 + 0x168u);
        if (r0 == 0u) {
            r4 = rd32((u32)param_1 + 0x16cu);
        } else {
            if (r0 == 1u) {
                r7 = rd32((u32)param_1 + 0x16cu);
                r0 = rd32((u32)param_1 + 0xe8u);
                a.r[0] = ppc_mulhw((s32)r7, (s32)r0);
                a.r[1] = r7 * r0;
                a.r[2] = 0u;
                a.r[3] = 0x3e8u;
                (void)tc_call(0x80255b5cu, &a);
                r4 = tc_lastr4();
            }
        }
        wr32(param_4, 0u);
        r3 = rd32((u32)param_1 + 0xf4u);
        if (r4 >= r3) {
            if ((u32)rd8((u32)param_1 + 0xe0u) != 0u) {
                r5 = rd32((u32)param_1 + 0xf0u);
                r4 = r4 - r3;
                r0 = r3 - r5;
                r3 = (u32)ppc_divw((s32)r4, (s32)r0);
                r0 = r3 * r0;
                r3 = r3 + 1u;
                wr32(param_4, r3);
                r0 = r4 - r0;
                r4 = r5 + r0;
            } else {
                r3 = 0u;
                return r3;
            }
        }
        r3 = 1u;
        wr32(param_2, (u32)ppc_divw((s32)r4, (s32)rd32((u32)param_1 + 0x104u)));
        r5 = rd32((u32)param_1 + 0x104u);
        wr32(param_3, r4 - (ppc_divwu(r4, r5) * r5));
    }
    return r3;
}
