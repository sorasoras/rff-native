#include "tc_rt.h"

void fn_802fda90(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1;
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    wr8((u32)param_1 + 0xeau, (u8)param_2);
    r31 = 0u;
    do {
        if ((s32)r31 > 15) {
            r3 = 0u;
        } else {
            r3 = rd32(r29 + 0x11cu);
        }
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            (void)tc_call(0x802ff4dcu, &a);
        }
        r31 = r31 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r31 < 16);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
