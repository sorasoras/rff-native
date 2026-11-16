#include "tc_rt.h"

s32 fn_801496d4(u32 param_1)
{
    return (s32)(rd32(rd32(0x805712ecu) + (rd32(param_1) * 0x108u) + 8u) + 0x66fu);
}
