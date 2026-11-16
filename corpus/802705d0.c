#include "tc_rt.h"

s32 fn_802705d0(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0xfffffffcu;
    r3 = tc_call(0x8022c2b0u, &a);
    if ((param_1 & 0x1fu) == 0u) {
        r31 = 0u;
        if (rd32(0x805032a0u) != 0u) {
            r31 = 1u;
            if (rd32(0x805032b0u) != 0u) {
                r31 = 2u;
                if (rd32(0x805032c0u) != 0u) {
                    r31 = 3u;
                    if (rd32(0x805032d0u) != 0u) {
                        r31 = 4u;
                        if (rd32(0x805032e0u) != 0u) {
                            r31 = 5u;
                            if (rd32(0x805032f0u) != 0u) {
                                r31 = 6u;
                                if (rd32(0x80503300u) != 0u) {
                                    r31 = 7u;
                                    if (rd32(0x80503310u) != 0u) {
                                        r31 = 8u;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (r31 == 8u) {
            r31 = 0xfffffffbu;
        } else {
            r6 = ((r31 << 4u) & 0xfffffff0u) - 0x7fafcd60u;
            wr32(r6, param_1);
            wr32(r6 + 8u, (u32)param_2);
            wr32(r6 + 0xcu, param_1);
            wr32(param_1, 0xbabe0000u);
            wr32(rd32(r6 + 0xcu) + 4u, (u32)param_2 - 0x10u);
            wr32(rd32(r6 + 0xcu) + 8u, 0u);
            wr32(rd32(r6 + 0xcu) + 0xcu, 0u);
        }
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return (s32)r31;
}
