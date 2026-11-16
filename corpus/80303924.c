#include "tc_rt.h"

u32 fn_80303924(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = rd32(param_2);
    r3 = (r31 + 0x23u) & 0xfffffffcu;
    if ((s32)(r3 - (u32)param_3) > 0) {
        r3 = 0u;
    } else {
        wr32(param_2, r3);
        if (r31 != 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x802fc2a8u, &a);
            r31 = r3;
        }
        r4 = (rd32(param_2) + 0x1fu) & 0xffffffe0u;
        wr32(param_2, r4);
        r3 = ((u32)param_4 + r4 + 3u) & 0xfffffffcu;
        if ((s32)(r3 - (u32)param_3) > 0) {
            r3 = 0u;
        } else {
            wr32(param_2, r3);
            a.r[0] = r31;
            a.r[1] = r4;
            a.r[2] = (u32)param_4;
            r3 = tc_call(0x802fc39cu, &a);
            if (r3 != 0u) {
                r3 = r31;
            } else {
                r3 = 0u;
            }
        }
    }
    return r3;
}
