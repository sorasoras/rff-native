#include "tc_rt.h"

u32 fn_8005d268(s32 param_1)
{
    return (ppc_cntlzw(rd32((u32)param_1 + 0x290u) - 0x1fu) >> 5u) & 0x7ffffffu;
}
