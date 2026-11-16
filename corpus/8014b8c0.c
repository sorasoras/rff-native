#include "tc_rt.h"

void fn_8014b8c0(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x168u) != 0xcu) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xcu;
        (void)tc_call(0x8014b494u, &a);
        return;
    }
    return;
}
