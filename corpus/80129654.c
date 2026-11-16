#include "tc_rt.h"

u32 fn_80129654(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = 0u;
    r3 = rd32(rd32((u32)param_1 + 0x1cu) + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x1d0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x800ff744u, &a);
        r4 = r3;
    }
    return r4;
}
