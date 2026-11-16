#include "tc_rt.h"

u32 fn_801495bc(u32 param_1)
{
    return rd32(rd32(0x805712f4u) + (rd32(param_1) * 0x8cu) + 0x18u);
}
