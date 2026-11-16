#include "tc_rt.h"

s32 fn_800f7fec(s32 param_1, u32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0x14u));
    while (r31 <= param_2) {
        a.r[0] = (u32)param_1 + 4u;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x8027622cu, &a);
        r31 = r31 + 1u;
    }
    a.r[0] = (u32)param_1 + 0x34u;
    a.r[1] = rd32(0x817fdfe4u);
    (void)tc_call(0x8025bd34u, &a);
    return (s32)((u32)param_1 + 0x34u);
}
