#include "tc_rt.h"

void fn_802251cc(void)
{
    wr32(0x80571440u, 0x80000040u);
    wr32(0x80000048u, 0x22523cu);
    wr32(0x80571444u, 1u);
    return;
}
