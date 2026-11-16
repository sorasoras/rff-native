#include "tc_rt.h"

void fn_8003c170(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x88u) != 0u) {
        (void)tc_call(0x802c2770u, &a);
        a.r[0] = 1u;
        a.r[1] = rd32((u32)param_1 + 0x88u);
        a.r[2] = 0x4e4f5320u;
        a.r[3] = 0x8034f664u;
        (void)tc_call(0x80040e98u, &a);
        wr32((u32)param_1 + 0x88u, 0u);
    }
    return;
}
