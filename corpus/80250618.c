#include "tc_rt.h"

void fn_80250618(s32 param_1, u32 param_2)
{
    wr16(rd32(0x80571958u) + 6u, (u16)((param_2 & 0xffu) | (((u32)param_1 << 8u) & 0xffffff00u)));
    return;
}
