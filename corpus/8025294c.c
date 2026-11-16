#include "tc_rt.h"

u32 fn_8025294c(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    r4 = rd32(0x80576c88u);
    r3 = rd32(r4 + 0x518u);
    wr32(r4 + 0x518u, param_1);
    return r3;
}
