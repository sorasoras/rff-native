#include "tc_rt.h"

u32 fn_802264a8(u32 param_1)
{
    return rd32(rd32(0x80571458u) + ((param_1 << 2u) & 0x3fcu));
}
