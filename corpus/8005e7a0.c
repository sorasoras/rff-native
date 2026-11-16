#include "tc_rt.h"

void fn_8005e7a0(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x80u, (rd32((u32)param_1 + 0x80u) & 0x7fffffffu) | (((u32)param_2 << 0x1fu) & 0x80000000u));
    return;
}
