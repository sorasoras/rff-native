#include "tc_rt.h"

void fn_801209a0(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = (u32)param_3;
    if (param_3 < 0) {
        r5 = rd32(param_2);
    }
    a.r[0] = rd32(param_1);
    a.r[1] = r5;
    r3 = tc_call(0x803014dcu, &a);
    wr32(param_2 + 0x50u, 0xffffffffu);
    if ((r3 & 0x20u) != 0u) {
        wr32(param_2 + 0x50u, 0u);
    } else {
        if ((r3 & 0x40u) != 0u) {
            wr32(param_2 + 0x50u, 1u);
        } else {
            if ((r3 & 0x80u) != 0u) {
                wr32(param_2 + 0x50u, 2u);
            } else {
                if ((r3 & 0x100u) != 0u) {
                    wr32(param_2 + 0x50u, 3u);
                } else {
                    if ((r3 & 0x200u) != 0u) {
                        wr32(param_2 + 0x50u, 4u);
                    } else {
                        if ((r3 & 0x400u) != 0u) {
                            wr32(param_2 + 0x50u, 5u);
                        } else {
                            if ((r3 & 0x800u) != 0u) {
                                wr32(param_2 + 0x50u, 6u);
                            } else {
                                if ((r3 & 0x1000u) != 0u) {
                                    wr32(param_2 + 0x50u, 7u);
                                } else {
                                    if ((r3 & 0x2000u) != 0u) {
                                        wr32(param_2 + 0x50u, 8u);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
