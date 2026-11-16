#include "tc_rt.h"

void fn_80243f40(u32 param_1, u32 param_2)
{
    wr32(param_1, rd32(0x80571828u));
    wr32(param_2, rd32(0x8057181cu));
    return;
}
