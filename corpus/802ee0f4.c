#include "tc_rt.h"

void fn_802ee0f4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = rd32(param_1 + 0xcu);
    r31 = 0u;
    r29 = 0u;
    r30 = r6 + rd32(r6 + 0x10u);
    for (;;) {
        r4 = rd32(param_1 + 0xcu);
        if ((r29 & 0xffffu) >= (u32)rd16(r4 + 0xeu)) break;
        r4 = r4 + rd32(r30 + ((r29 << 2u) & 0x3fffcu));
        if ((u32)rd8(r4 + 0x15u) == 1u) {
            a.r[0] = param_2 + 0x44u;
            a.r[1] = r4;
            r3 = tc_call(0x802ef36cu, &a);
            if (r3 != 0u) {
                if (r31 == 0u) {
                    r31 = rd32(param_1 + 0x18u);
                }
                r3 = rd32(param_1 + 0x18u) + (((u32)rd16(param_1 + 0x1cu) << 4u) & 0xfffffff0u);
                ctr = ((r3 + 0xfu - r31) >> 4u) & 0xfffffffu;
                if (r31 >= r3) {
                    r31 = 0u;
                } else {
                    while (rd32(r31 + 8u) != 0u) {
                        r31 = r31 + 0x10u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            r31 = 0u;
                            break;
                        }
                    }
                }
                if (r31 != 0u) {
                    wr32(r31 + 8u, param_1);
                    wr16(r31 + 0xcu, (u16)r29);
                    wr8(r31 + 0xeu, (u8)param_3);
                    a.r[0] = param_2;
                    a.r[1] = r31;
                    (void)tc_call(0x802ed65cu, &a);
                    r31 = r31 + 0x10u;
                } else {
                    r31 = 0u;
                }
                if (r31 == 0u) break;
            }
        }
        r29 = r29 + 1u;
    }
    return;
}
