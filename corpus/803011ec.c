#include "tc_rt.h"

s32 fn_803011ec(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    a.r[0] = param_2;
    a.r[1] = 0x817fdfd8u;
    r3 = tc_call(0x80301514u, &a);
    if (r3 != 0u) {
        r31 = rd32(0x817fdfd8u) + rd32(0x817fdfe0u) + rd32(0x817fdfecu);
    }
    return (s32)(r31 * 0x28u);
}
