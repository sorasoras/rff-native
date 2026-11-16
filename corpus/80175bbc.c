#include "tc_rt.h"

void fn_80175bbc(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 != 0u) {
        if ((rd32(param_1 + 0x124u) == 0u || rd32(param_1 + 0x13cu) != 0xffffffffu) || rd32(param_1 + 0x130u) == 0xffffffffu) {
            return;
        }
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfe8u, rd32(r3));
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32(r3 + 8u));
        a.r[0] = 0x804b9da0u;
        a.r[1] = rd32(param_1 + 0x130u);
        a.r[2] = 0x817fdfe8u;
        r3 = tc_call(0x8010a85cu, &a);
        wr32(param_1 + 0x13cu, r3);
    } else {
        r4 = rd32(param_1 + 0x13cu);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            (void)tc_call(0x801206f4u, &a);
            wr32(param_1 + 0x13cu, 0xffffffffu);
        }
    }
    return;
}
