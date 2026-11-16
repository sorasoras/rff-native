#include "tc_rt.h"

void fn_8004ca04(void)
{
    u32 r0 = 0, r4 = 0;
    r4 = rd32(0x803c62f0u);
    r0 = rd32(0x803c62f4u) - r4;
    wr32(0x803c62f4u, r4);
    wr32(0x803c62fcu, r0);
    return;
}
