#include "tc_rt.h"

u32 fn_800879dc(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_2 + 0x54u) == 0u) {
        r3 = param_3;
    } else {
        a.r[0] = param_3;
        r3 = tc_call(0x80037914u, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        r3 = tc_call(0x80037988u, &a);
        a.r[0] = r3;
        r3 = tc_call(0x8004ffecu, &a);
        wr32((u32)param_1 + 0x724u, r3);
        wr32((u32)param_1 + 0x728u, 1u);
        r4 = rd32(param_5);
        wr32(param_5, r4 + 1u);
        a.r[0] = param_4;
        a.r[1] = r4;
        r3 = tc_call(0x80037988u, &a);
    }
    return r3;
}
