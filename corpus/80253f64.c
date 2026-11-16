#include "tc_rt.h"

void fn_80253f64(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r8 = 0, r9 = 0;
    r9 = rd32(0x80576c88u);
    r8 = (((rd32(r9 + 0x228u) & 0xfffffffeu) | (param_1 & 1u)) & 0xfffffff1u) | ((param_2 << 1u) & 0xeu);
    wr8(0xcc008000u, 0x61u);
    r8 = (r8 & 0xffffffefu) | ((param_3 << 4u) & 0x10u);
    wr32(0xcc008000u, r8);
    wr32(r9 + 0x228u, r8);
    wr16(r9 + 2u, 0u);
    return;
}
