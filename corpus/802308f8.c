#include "tc_rt.h"

void fn_802308f8(void)
{
    wr32(0x80570a90u, rd32(0x80003130u));
    wr32(0x80571518u, rd32(0x80003134u));
    return;
}
