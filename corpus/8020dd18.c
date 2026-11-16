#include "tc_rt.h"

u32 fn_8020dd18(u32 param_1)
{
    if (param_1 >= 0x23u) {
        return 0u;
    }
    return (ppc_cntlzw((u32)rd8(param_1 - 0x7fc87df8u) - 1u) >> 5u) & 0x7ffffffu;
}
