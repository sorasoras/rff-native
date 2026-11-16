#include "tc_rt.h"

void fn_80270c2c(void)
{
    wr32(0x80571a9cu, rd32(0x80571a9cu) - 1u);
    return;
}
