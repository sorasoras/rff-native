#include "tc_rt.h"

void fn_800497fc(void)
{
    wr8(0x803c6245u, (u8)((u32)rd8(0x803c6245u) + 1u));
    return;
}
