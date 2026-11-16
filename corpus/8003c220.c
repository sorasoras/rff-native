#include "tc_rt.h"

u32 fn_8003c220(void)
{
    return (rd32(0x803be2acu) >> 1u) & 1u;
}
