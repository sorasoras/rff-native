#include "tc_rt.h"

void fn_80250640(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80571958u);
    wr16(r4 + 2u, (u16)(((u32)rd16(r4 + 2u) & 0xffffffefu) | ((param_1 << 4u) & 0x10u)));
    return;
}
