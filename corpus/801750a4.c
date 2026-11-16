#include "tc_rt.h"

void fn_801750a4(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        if ((rd32(param_1 + 0x78u) == 0u || rd32(param_1 + 0x150u) != 0xffffffffu) || rd32(param_1 + 0x14cu) == 0xffffffffu) {
            return;
        }
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = rd32(param_1 + 0x14cu);
        a.r[2] = r3;
        r3 = tc_call(0x8010a85cu, &a);
        wr32(param_1 + 0x150u, r3);
    } else {
        r4 = rd32(param_1 + 0x150u);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            (void)tc_call(0x801206f4u, &a);
            wr32(param_1 + 0x150u, 0xffffffffu);
        }
        r3 = rd32(param_1 + 0x154u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
            wr32(param_1 + 0x154u, 0u);
        }
    }
    return;
}
