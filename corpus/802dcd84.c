#include "tc_rt.h"

void fn_802dcd84(s32 param_1)
{
    wr8((u32)param_1 + 0xfu, rd8(rd32((u32)param_1 + 8u) + (u32)rd8((u32)param_1 + 0xcu) + 0xecu));
    return;
}
