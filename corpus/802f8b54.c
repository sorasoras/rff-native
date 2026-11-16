#include "tc_rt.h"

u32 fn_802f8b54(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x188u) == 0u) {
        r3 = 0u;
    } else {
        if (param_3 < 0x78u) {
            r3 = 0u;
        } else {
            if (param_2 != 0u) {
                a.r[0] = param_2;
                a.r[1] = (u32)param_1 + 0x14cu;
                a.r[2] = 0u;
                (void)tc_call(0x802dfc14u, &a);
                wr32(param_2 + 0x70u, param_4);
                wr32(param_2, 0x8039d0c8u);
                wr32(param_2 + 0x74u, param_5);
                a.r[0] = param_2;
                a.r[1] = param_4;
                a.r[2] = 0u;
                (void)tc_call(0x802dfab8u, &a);
            }
            r3 = param_2;
        }
    }
    return r3;
}
