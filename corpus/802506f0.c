#include "tc_rt.h"

void fn_802506f0(u32 param_1, u32 param_2, u32 param_3)
{
    wr16(rd32(0x80571958u), (u16)((((param_1 & 1u) | ((param_2 << 1u) & 0xeu)) & 0xffffffefu) | ((param_3 << 4u) & 0x10u)));
    return;
}
