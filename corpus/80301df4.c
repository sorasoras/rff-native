#include "tc_rt.h"

u32 fn_80301df4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80301af8u, &a);
    if (r3 != 2u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = 0x817fdfe8u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        r3 = tc_call(0x803028e0u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = (u32)rd8(0x817fdfe8u);
            a.r[1] = rd32(0x817fdfecu);
            a.r[2] = rd32((u32)param_1 + 0x28u);
            r3 = tc_call(0x8030e93cu, &a);
        }
    }
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r0 = (u32)rd16((u32)param_1 + 6u);
        wr32(param_3, rd32(r3));
        wr16(param_3 + 6u, rd16(r3 + 6u));
        if (r0 >= 0x104u) {
            wr16(param_3 + 4u, rd16(r3 + 4u));
        } else {
            wr16(param_3 + 4u, 0u);
            r4 = (u32)rd16(r3 + 4u);
            while ((r4 & 0xffffu) != 0u) {
                if ((r4 & 1u) != 0u) {
                    wr16(param_3 + 4u, (u16)((u32)rd16(param_3 + 4u) + 1u));
                } else {
                    if ((r4 & 0xffffu) != 0u) {
                        r3 = 0u;
                        return r3;
                    }
                }
                r4 = (r4 >> 1u) & 0x7fffu;
            }
        }
        r3 = 1u;
    }
    return r3;
}
