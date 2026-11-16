#include "tc_rt.h"

u32 fn_802eb3fc(u32 param_1)
{
    return (rd32(param_1) >> 0x1bu) & 1u;
}
