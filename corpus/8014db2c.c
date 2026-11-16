#include "tc_rt.h"

s32 fn_8014db2c(s32 param_1, s32 param_2)
{
    return (s32)(rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fc9a918u) + ((u32)param_1 * rd32(0x80570834u)));
}
