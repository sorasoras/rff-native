#include "tc_rt.h"

u32 fn_80042f0c(u32 param_1)
{
    if ((s32)param_1 < 0 || param_1 >= 4u) {
        return 0u;
    }
    return (ppc_cntlzw(rd32((param_1 * 0x954u) - 0x7fc3ffd0u)) >> 5u) & 0x7ffffffu;
}
