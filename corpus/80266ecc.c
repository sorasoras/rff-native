#include "tc_rt.h"

u32 fn_80266ecc(void)
{
    wr32(0x805026f0u, 0xffffffffu);
    wr32(0x805026f8u, 0u);
    wr32(0x805026fcu, 0u);
    return 0u;
}
