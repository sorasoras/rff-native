#include "tc_rt.h"

u32 fn_800ded34(u32 param_1, s32 param_2)
{
    u32 c0lt = 0;
    (void)param_1;
    c0lt = param_2 < 2;
    if ((u32)param_2 != 2u) {
        if (c0lt) {
            c0lt = param_2 < 0;
            if ((u32)param_2 == 0u) {
                return (ppc_cntlzw((u32)rd8(0x80492833u) - 1u) >> 5u) & 0x7ffffffu;
            }
            if (!c0lt) {
                return (ppc_cntlzw((u32)rd8(0x80492833u) - 2u) >> 5u) & 0x7ffffffu;
            }
            return 0u;
        }
        if (param_2 >= 4) {
            return 0u;
        }
        return 1u;
    }
    return (ppc_cntlzw((u32)rd8(0x80492833u) - 3u) >> 5u) & 0x7ffffffu;
}
