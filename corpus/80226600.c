#include "tc_rt.h"

u32 fn_80226600(void)
{
    return rd32(0xcd006024u) & 0xffu;
}
