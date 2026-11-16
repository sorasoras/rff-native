#include "tc_rt.h"

u32 fn_800f69cc(s32 param_1)
{
    if ((rd32((u32)param_1 + 8u) != 0u || rd32((u32)param_1 + 0x30u) != 0u) || (rd32((u32)param_1 + 0x58u) != 0u || rd32((u32)param_1 + 0x80u) != 0u)) {
        return 1u;
    }
    return 0u;
}
