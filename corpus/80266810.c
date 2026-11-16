#include "tc_rt.h"

s32 fn_80266810(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32(0x80500d38u) != 0u) {
        r31 = param_2;
    } else {
        r31 = 0x817fdfd8u;
    }
    r3 = rd32((u32)param_1 + 0xcu);
    r28 = 8u;
    r29 = 0u;
    r0 = rd32((u32)param_1 + 8u) - r3;
    if (r0 < 8u) {
        r29 = 0x302u;
        r28 = r0;
    }
    a.r[0] = r31;
    a.r[1] = (u32)param_1 + (r3 + 0x10u);
    a.r[2] = r28;
    (void)tc_call(0x8000449cu, &a);
    wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + r28);
    if (rd32(0x80500d38u) == 0u && r29 == 0u) {
        wr8(param_2, rd8(r31 + 7u));
        wr8(param_2 + 1u, rd8(r31 + 6u));
        wr8(param_2 + 2u, rd8(r31 + 5u));
        wr8(param_2 + 3u, rd8(r31 + 4u));
        wr8(param_2 + 4u, rd8(r31 + 3u));
        wr8(param_2 + 5u, rd8(r31 + 2u));
        wr8(param_2 + 6u, rd8(r31 + 1u));
        wr8(param_2 + 7u, rd8(r31));
    }
    return (s32)r29;
}
