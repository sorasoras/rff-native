#include "tc_rt.h"

void fn_8008d7b4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((rd32((u32)param_1 + 0x48u) != 0u && rd32((u32)param_1 + 0x4cu) != 0u) && (param_2 & 2u) != 0u) {
        r3 = tc_call(0x80081034u, &a);
        if ((r3 & 0xffu) != 3u || rd32(0x805706e8u) != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x48u);
            a.r[1] = param_3;
            (void)tc_call(0x800318a8u, &a);
        }
    }
    r3 = rd32((u32)param_1 + 4u);
    if ((r3 != 0u && rd32((u32)param_1 + 8u) != 0u) && (param_2 & 1u) != 0u) {
        a.r[0] = r3;
        a.r[1] = param_3;
        (void)tc_call(0x800318a8u, &a);
    }
    return;
}
