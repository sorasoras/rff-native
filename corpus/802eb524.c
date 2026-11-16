#include "tc_rt.h"

void fn_802eb524(u32 param_1, u32 param_2)
{
    wr8(param_1, rd8(param_2));
    return;
}
