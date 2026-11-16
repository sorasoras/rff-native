#include "tc_rt.h"

void fn_80250628(u32 param_1)
{
    wr16(rd32(0x80571958u) + 8u, (u16)((param_1 & 3u) | 4u));
    return;
}
