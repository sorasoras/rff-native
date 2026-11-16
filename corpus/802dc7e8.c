#include "tc_rt.h"

void fn_802dc7e8(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = (u32)rd8(param_2);
    r5 = (u32)rd8(param_2 + 1u);
    r0 = (u32)((s32)r6 >> 4);
    r7 = r6 & 0xfu;
    c0lt = (s32)r0 < 10;
    if (r0 != 0xau) {
        if (!c0lt) {
            c0lt = (s32)r0 < 12;
            if (r0 == 0xcu) {
                wr32((u32)param_1 + ((r7 << 2u) & 0x3fcu) + 0x28u, rd32((u32)param_1 + 8u) + ((r5 << 8u) & 0xff00u));
            } else if (c0lt) {
                c0lt = (s32)r5 < 10;
                r6 = (u32)rd8(param_2 + 2u);
                if (r5 == 0xau) {
                    wr8((u32)param_1 + r7 + 0xecu, (u8)r6);
                } else if (!c0lt) {
                    if (r5 == 0x5bu) {
                        wr32((u32)param_1 + ((r7 << 2u) & 0x3fcu) + 0xacu, rd32(((r6 << 2u) & 0x3fcu) - 0x7fc63ec0u));
                    }
                } else if (r5 == 7u) {
                    wr32((u32)param_1 + ((r7 << 2u) & 0x3fcu) + 0x6cu, rd32(((r6 << 2u) & 0x3fcu) - 0x7fc63ec0u));
                }
            }
        } else {
            c0lt = (s32)r0 < 8;
            if (r0 == 8u) {
                r31 = (u32)param_1 + ((r7 << 9u) & 0x1fe00u) + ((r5 << 2u) & 0x3fcu);
                r3 = rd32(r31 + 0x408u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    (void)tc_call(0x802dd5f8u, &a);
                    wr32(r31 + 0x408u, 0u);
                }
            } else if (!c0lt) {
                a.r[0] = (u32)param_1;
                a.r[1] = r7;
                a.r[2] = r5;
                a.r[3] = (u32)rd8(param_2 + 2u);
                (void)tc_call(0x802dc5bcu, &a);
            }
        }
    }
    return;
}
