#include "tc_rt.h"

void fn_800497e4(void)
{
    wr8(0x803c6244u, (u8)((u32)rd8(0x803c6244u) + 1u));
    return;
}
