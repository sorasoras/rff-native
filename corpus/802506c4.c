#include "tc_rt.h"

void fn_802506c4(u32 param_1, u32 param_2)
{
    wr16(rd32(0x80571958u) + 4u, (u16)((param_2 & 0xffu) | ((param_1 << 8u) & 0x100u)));
    return;
}
