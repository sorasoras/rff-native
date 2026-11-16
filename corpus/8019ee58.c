#include "tc_rt.h"

u32 fn_8019ee58(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    if (param_2 < 0 || param_2 >= 32) {
        return 0u;
    }
    r3 = rd32((u32)param_1 + ((u32)param_2 * 0x14u) + 0xcu);
    if ((u32)param_3 != 0u) {
        r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
        return r3;
    }
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
