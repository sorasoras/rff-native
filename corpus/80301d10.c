#include "tc_rt.h"

u32 fn_80301d10(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80301af8u, &a);
    if (r3 != 1u) {
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
        wr32(param_3 + 4u, rd32(r3 + 4u));
        wr32(param_3 + 0xcu, (u32)rd8(r3 + 0xcu));
        wr32(param_3 + 8u, rd32(r3 + 8u));
        if (r0 >= 0x103u) {
            r3 = (u32)rd8(r3 + 0xdu);
            wr8(param_3 + 0x10u, (u8)((((0u - r3) | r3) >> 0x1fu) & 1u));
        } else {
            wr8(param_3 + 0x10u, 0u);
        }
        r3 = 1u;
    }
    return r3;
}
