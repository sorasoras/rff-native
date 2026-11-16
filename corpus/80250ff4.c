#include "tc_rt.h"

void fn_80250ff4(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r5 = 0;
    r5 = rd32(0x80576c88u);
    wr32(r5 + 0x230u, (((param_1 & 0x3ffu) | ((param_2 << 0xau) & 0xffc00u)) & 0xffffffu) | 0x49000000u);
    wr32(r5 + 0x234u, (((((u32)param_3 - 1u) & 0x3ffu) | ((((u32)param_4 - 1u) << 0xau) & 0xffc00u)) & 0xffffffu) | 0x4a000000u);
    return;
}
