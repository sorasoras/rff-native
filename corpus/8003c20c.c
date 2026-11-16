#include "tc_rt.h"

u32 fn_8003c20c(void)
{
    return rd32(0x803be2acu) & 1u;
}
