#include "tc_rt.h"

u32 fn_8008c2a8(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x4150u) * 0x4150u);
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0x817fdfecu;
    a.r[4] = 0x817fdfe8u;
    r3 = tc_call(0x80088abcu, &a);
    if (r3 != 0u && rd32(0x817fdfe8u) == 2u) {
        if (param_4 != 0u) {
            wr32(param_4, rd32(0x817fdfecu));
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
