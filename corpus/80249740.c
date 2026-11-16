#include "tc_rt.h"

void fn_80249740(u32 param_1, u32 param_2)
{
    wr32(param_1, rd32(0x80570b78u));
    wr32(param_2, rd32(0x80570b7cu));
    return;
}
