#include "tc_rt.h"

void fn_80252774(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r7 = 0;
    r7 = (rd32(param_1 + 4u) & 0xff000000u) | ((param_2 >> 5u) & 0xffffffu);
    wr16(param_1 + 8u, (u16)param_4);
    r7 = (r7 & 0xffffffu) | 0x64000000u;
    wr32(param_1, (param_3 << 0xau) & 0xc00u);
    wr32(param_1 + 4u, r7);
    return;
}
