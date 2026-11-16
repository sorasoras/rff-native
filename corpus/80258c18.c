#include "tc_rt.h"

u32 fn_80258c18(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        if ((u32)rd8((u32)param_1 + 0xau) == 0u) {
            r4 = rd32((u32)param_1 + 4u);
            if (((r4 >> 0x16u) & 7u) != 0u) {
                if (((r4 >> 0x1bu) & 7u) != 1u) {
                    r4 = rd32((u32)param_1 + 8u);
                    if (((r4 >> 0x1du) & 7u) >= 3u) {
                        r4 = (r4 & 0x1fffffffu) | 0x40000000u;
                        wr32((u32)param_1 + 8u, r4);
                    }
                    if (((rd32((u32)param_1 + 8u) >> 0x1du) & 7u) == 2u) {
                        wr32((u32)param_1 + 0x28u, 0u);
                    }
                    r4 = rd32((u32)param_1 + 8u);
                    if (((r4 >> 0x1du) & 7u) == 1u) {
                        if (((rd32((u32)param_1 + 4u) >> 0x16u) & 7u) == 1u) {
                            a.r[0] = (u32)param_1;
                            r3 = tc_call(0x80258df4u, &a);
                            r30 = r3;
                        } else {
                            r30 = 0u;
                        }
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0u;
                        r3 = tc_call(0x8025879cu, &a);
                        if (r3 == 0u) {
                            r0 = rd32((u32)param_1 + 8u);
                            wr32((u32)param_1 + 0x18u, r30);
                            r3 = 0u;
                            r0 = r0 & 0x1fffffffu;
                            wr32((u32)param_1 + 8u, r0);
                            wr32((u32)param_1 + 0x28u, 0u);
                            return r3;
                        }
                        wr8((u32)param_1 + 0xau, 1u);
                        r3 = 0xffffffffu;
                        wr32((u32)param_1 + 0x28u, 0u);
                        return r3;
                    }
                    wr32((u32)param_1 + 8u, r4 & 0x1fffffffu);
                    r3 = 0u;
                    return r3;
                }
                r3 = 0u;
                return r3;
            }
        }
        r3 = 0xffffffffu;
    } else {
        r3 = tc_call(0x80257b48u, &a);
    }
    return r3;
}
