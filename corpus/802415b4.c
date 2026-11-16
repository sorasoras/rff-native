#include "tc_rt.h"

void fn_802415b4(void)
{
    wr32(0x80571758u, rd32(0x80571758u) | 0x80u);
    return;
}
