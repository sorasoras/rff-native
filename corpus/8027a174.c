#include "tc_rt.h"

s32 fn_8027a174(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    if (param_2 != 0u) {
        wr32(param_2, (u32)rd8(r31 + 0x8c1u));
    }
    r30 = rd32(r31 + 0x8bcu);
    if (r30 != 0xffffffffu) {
        if ((u32)rd8(r31 + 0x8c1u) == 0xfdu) {
            r30 = 0xffffffffu;
        } else {
            if (rd32(r31 + 0x8dcu) == 0u) {
                r30 = 0xfffffffeu;
            }
        }
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return (s32)r30;
}
