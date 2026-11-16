#include "tc_rt.h"

void fn_8006c470(s32 param_1, u32 param_2)
{
    wr16((u32)param_1 + 0xa4cu, rd16(param_2));
    wr8((u32)param_1 + 0xa4eu, rd8(param_2 + 2u));
    wr8((u32)param_1 + 0xa4fu, rd8(param_2 + 3u));
    return;
}
