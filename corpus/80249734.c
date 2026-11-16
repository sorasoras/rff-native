#include "tc_rt.h"

void fn_80249734(u32 param_1, u32 param_2)
{
    wr32(0x80570b78u, param_1);
    wr32(0x80570b7cu, param_2);
    return;
}
