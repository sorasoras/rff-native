#include "tc_rt.h"

void fn_8030f97c(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r3 = param_2 & 0xffu;
    r5 = rd32((u32)param_1 + 0x130u);
    r4 = 0u;
    wr8((u32)param_1 + 0xeau, (u8)((((0u - r3) | r3) >> 0x1fu) & 1u));
    if (r5 != 0u && (u32)rd8(r5 + 0x36u) != 0u) {
        r4 = 1u;
    }
    if (r4 != 0u) {
        r5 = rd32((u32)param_1 + 0x130u);
        r3 = (u32)rd8(r5 + 0x35u);
        if (param_2 != ((((0u - r3) | r3) >> 0x1fu) & 1u)) {
            wr8(r5 + 0x35u, (u8)param_2);
            a.r[0] = rd32(r5 + 0xecu);
            a.r[1] = param_2;
            (void)tc_call(0x8030c3b4u, &a);
        }
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
