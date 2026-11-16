#include "tc_rt.h"

void fn_80082a40(u32 param_1)
{
    wr16(param_1, rd16(0x805711b0u));
    wr8(param_1 + 3u, rd8(0x805711b3u));
    wr8(param_1 + 2u, rd8(0x805711b2u));
    return;
}
