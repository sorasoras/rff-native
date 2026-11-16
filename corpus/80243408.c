#include "tc_rt.h"

void fn_80243408(u32 param_1)
{
    wr32(param_1, rd32(0x804e6380u));
    wr32(0x804e6380u, param_1);
    wr32(param_1 + 0xcu, 0u);
    return;
}
