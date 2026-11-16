#include "tc_rt.h"

void fn_8008c408(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    while (rd32((u32)param_1 + 0x415cu) != 0u) {
        a.r[0] = (u32)param_1 + 0x4154u;
        r3 = tc_call(0x8007b09cu, &a);
        wr32(r3 + 0x24u, 0u);
    }
    return;
}
