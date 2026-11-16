#include "tc_rt.h"

s32 fn_80276134(u32 param_1)
{
    return (s32)(rd32(rd32(param_1)) + rd32(param_1 + 4u));
}
