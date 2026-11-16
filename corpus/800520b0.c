#include "tc_rt.h"

void fn_800520b0(void)
{
    wr8(0x805710c0u, 6u);
    wr8(0x805710beu, 0u);
    wr8(0x805710bdu, 0u);
    wr8(0x805710bcu, 0u);
    wr8(0x805710bfu, 0xffu);
    wr32(0x805710c4u, 0u);
    return;
}
