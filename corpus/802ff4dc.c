#include "tc_rt.h"

void fn_802ff4dc(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r31 = rd32((u32)param_1 + 0xf0u);
    while (r31 != 0u) {
        if ((u32)rd8(r31 + 0x36u) != 0u) {
            r3 = (u32)rd8(r31 + 0x35u);
            if (param_2 != ((((0u - r3) | r3) >> 0x1fu) & 1u)) {
                wr8(r31 + 0x35u, (u8)param_2);
                a.r[0] = rd32(r31 + 0xecu);
                a.r[1] = param_2;
                (void)tc_call(0x8030c3b4u, &a);
            }
        }
        r31 = rd32(r31 + 0xf0u);
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
