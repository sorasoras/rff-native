#include "tc_rt.h"

u32 fn_8027a6a8(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(r31 + 0x8bcu) == 0xffffffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0xffffffffu;
    } else {
        a.r[0] = (u32)(s8)rd8(r31 + 0x8c3u);
        r3 = tc_call(0x80289434u, &a);
        r31 = r3;
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        if ((s32)(s8)r31 < 0) {
            r3 = 0xffffffffu;
        } else {
            wr8(param_2, (u8)r31);
            r3 = 0u;
        }
    }
    return r3;
}
