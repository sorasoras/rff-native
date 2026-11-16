#include "tc_rt.h"

void fn_8025252c(u32 param_1, u32 param_2)
{
    wr32(param_1, (rd32(param_1) & 0xffdfffffu) | ((param_2 << 0x15u) & 0x200000u));
    return;
}
