#include "tc_rt.h"

u32 fn_80082730(u32 param_1)
{
    return rd32(0x80571194u) & param_1;
}
