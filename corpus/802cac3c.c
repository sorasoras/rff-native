#include "tc_rt.h"

void fn_802cac3c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r5 = rd32((u32)param_1 + 0xcu);
    r31 = r5 + rd32(r5 + 0x10u);
    for (;;) {
        r4 = rd32((u32)param_1 + 0xcu);
        if ((r30 & 0xffffu) >= (u32)rd16(r4 + 0xeu)) break;
        r4 = r4 + rd32(r31 + ((r30 << 2u) & 0x3fffcu));
        if ((u32)rd8(r4 + 0x15u) == 1u) {
            a.r[0] = (u32)param_2 + 4u;
            a.r[1] = r4;
            r3 = tc_call(0x802cb728u, &a);
            if (r3 != 0u) {
                r5 = (r30 << 4u) & 0xffff0u;
                r4 = rd32((u32)param_1 + 0x18u) + r5;
                wr32(r4 + 8u, (u32)param_1);
                wr16(r4 + 0xcu, (u16)r30);
                a.r[0] = (u32)param_2;
                a.r[1] = rd32((u32)param_1 + 0x18u) + r5;
                (void)tc_call(0x802d0840u, &a);
            }
        }
        r30 = r30 + 1u;
    }
    return;
}
