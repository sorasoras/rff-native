#include "tc_rt.h"

void fn_802547ac(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    wr8(0xcc008000u, 0x61u);
    r3 = rd32(0x80576c88u);
    wr32(0xcc008000u, ((((((u32)param_1 + 0x156u) >> 1u) & 0x3ffu) | ((((u32)param_2 + 0x156u) << 9u) & 0xffc00u)) & 0xffffffu) | 0x59000000u);
    wr16(r3 + 2u, 0u);
    return;
}
