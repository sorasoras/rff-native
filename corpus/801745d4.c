#include "tc_rt.h"

u32 fn_801745d4(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0;
    (void)param_1;
    c0lt = param_2 < 52;
    if ((u32)param_2 != 0x34u) {
        if (c0lt) {
            c0lt = param_2 < 16;
            if ((u32)param_2 == 0x10u) {
                return ((ppc_cntlzw((u32)param_3 - 0x1c7u) >> 5u) & 0x7ffffffu) | (((ppc_cntlzw((u32)param_3 - 0x1c6u) >> 5u) & 0x7ffffffu) | (((ppc_cntlzw((u32)param_3 - 0x1c4u) >> 5u) & 0x7ffffffu) | ((ppc_cntlzw((u32)param_3 - 0x1c5u) >> 5u) & 0x7ffffffu)));
            }
            if (c0lt) {
                return 0u;
            }
            if (param_2 >= 51) {
                return (ppc_cntlzw((u32)param_3 - 0x1c4u) >> 5u) & 0x7ffffffu;
            }
            return 0u;
        }
        c0lt = param_2 < 54;
        if ((u32)param_2 == 0x36u) {
            return (ppc_cntlzw((u32)param_3 - 0x1c6u) >> 5u) & 0x7ffffffu;
        }
        if (!c0lt) {
            return 0u;
        }
        return (ppc_cntlzw((u32)param_3 - 0x1c5u) >> 5u) & 0x7ffffffu;
    }
    return (ppc_cntlzw((u32)param_3 - 0x1c7u) >> 5u) & 0x7ffffffu;
}
