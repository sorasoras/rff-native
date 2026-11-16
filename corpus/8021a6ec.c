#include "tc_rt.h"

u32 fn_8021a6ec(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x58u) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x8021a650u, &a);
        r3 = (u32)rd16(r3);
    } else {
        r3 = 0xffffffffu;
    }
    return r3;
}
