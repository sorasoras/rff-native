#include "tc_rt.h"

void fn_80257aa4(void)
{
    u32 r3 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = 0x8038e8b0u;
    while (r29 != 0u) {
        if (((rd32(r29 + 4u) >> 0x16u) & 7u) != 0u) {
            a.r[0] = r29;
            (void)tc_call(0x80258b5cu, &a);
        }
        r3 = r29;
        r29 = rd32(r29 + 0x4cu);
        if ((u32)rd8(r3 + 0xcu) != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80257974u, &a);
        } else {
            wr32(r3 + 4u, (rd32(r3 + 4u) & 0xfe3fffffu) | 0xc00000u);
            if (r29 != 0u && (u32)rd8(r29 + 0xcu) != 0u) {
                wr32(r3 + 0x4cu, 0u);
            }
        }
    }
    return;
}
