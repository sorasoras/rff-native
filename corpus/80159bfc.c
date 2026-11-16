#include "tc_rt.h"

void fn_80159bfc(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    if ((param_2 >= 0 && param_2 < 33) && param_3 <= 6u) {
        if (param_4 >= 3u) {
            return;
        }
        r31 = rd32((u32)param_1 + 0x7b8u);
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        if (rd32(r3 + 8u) != 0u) {
            wr32((u32)param_1 + 0x7b8u, (ppc_cntlzw(r31) >> 5u) & 0x7ffffffu);
            if (r31 != 0u) {
                return;
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = (u32)(s8)param_4;
        r3 = tc_call(0x8015a3e4u, &a);
        r29 = r3 & 0xffu;
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = param_3;
        a.r[3] = r29;
        a.r[4] = param_5;
        r3 = tc_call(0x80159efcu, &a);
        wr32((u32)param_1 + 0x79cu, r3);
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = r29;
        (void)tc_call(0x8015a400u, &a);
        wr32((u32)param_1 + 0x7a4u, r29);
        wr32((u32)param_1 + 0x7a8u, (u32)param_2);
    }
    return;
}
