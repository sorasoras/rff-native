#include "tc_rt.h"

void fn_802ff208(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if ((u32)rd8((u32)param_1 + 5u) == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    } else {
        r31 = rd32((u32)param_1 + 0xf0u);
        while (r31 != 0u) {
            r3 = rd32(r31 + 0xccu);
            if ((s32)r3 > 0) {
                wr32(r31 + 0xccu, r3 - 1u);
            }
            if ((rd32(r31 + 0xccu) == 0u && rd32(r31) != 4u) && (u32)rd8((u32)param_1 + 0x80u) == 0u) {
                a.r[0] = r31;
                (void)tc_call(0x802f8068u, &a);
            }
            if ((u32)rd8(r31 + 0x38u) == 0u) {
                a.r[0] = r31;
                a.r[1] = 1u;
                (void)tc_call(0x802f8208u, &a);
            }
            r31 = rd32(r31 + 0xf0u);
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
