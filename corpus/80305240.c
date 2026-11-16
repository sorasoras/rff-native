#include "tc_rt.h"

u32 fn_80305240(s32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fddc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = rd32((u32)param_1 + 0x10u);
    if (r0 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r0;
        r3 = tc_call(0x80301480u, &a);
    }
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = rd32((u32)param_1 + 0x10u);
        r3 = tc_call(0x803014c4u, &a);
        if (param_2 >= r3) {
            r3 = 0u;
        } else {
            r3 = rd32((u32)param_1 + 0x14u);
            if (r3 == 0u) {
                r0 = 0u;
            } else {
                if (param_2 >= rd32(r3)) {
                    r0 = 0u;
                } else {
                    r3 = r3 + ((param_2 << 3u) & 0xfffffff8u);
                    r0 = rd32(r3 + 4u);
                }
            }
            if (r0 != 0u) {
                r3 = 1u;
            } else {
                if ((u32)param_3 == 0u) {
                    r3 = 0u;
                } else {
                    a.r[0] = 0x817fddd0u;
                    a.r[1] = rd32((u32)param_1 + 0x10u);
                    (void)tc_call(0x803029e0u, &a);
                    a.r[0] = 0x817fddd0u;
                    a.r[1] = param_2;
                    a.r[2] = (u32)param_3;
                    a.r[3] = 0x817fddc8u;
                    a.r[4] = param_4;
                    r3 = tc_call(0x80302a5cu, &a);
                    if (r3 == 0u) {
                        a.r[0] = 0x817fddd0u;
                        a.r[1] = 0xffffffffu;
                        (void)tc_call(0x80302a1cu, &a);
                        r3 = 0u;
                    } else {
                        r4 = rd32((u32)param_1 + 0x14u);
                        if (r4 != 0u) {
                            r4 = r4 + ((param_2 << 3u) & 0xfffffff8u);
                            wr32(r4 + 4u, r3);
                        }
                        r3 = rd32((u32)param_1 + 0x14u);
                        r4 = rd32(0x817fddc8u);
                        if (r3 != 0u) {
                            r3 = r3 + ((param_2 << 3u) & 0xfffffff8u);
                            wr32(r3 + 8u, r4);
                        }
                        a.r[0] = 0x817fddd0u;
                        a.r[1] = 0xffffffffu;
                        (void)tc_call(0x80302a1cu, &a);
                        r3 = 1u;
                    }
                }
            }
        }
    }
    return r3;
}
