#include "tc_rt.h"

u32 fn_800d4164(s32 param_1, s32 param_2)
{
    if (param_2 >= 2) {
        return 0u;
    }
    return rd32(((((u32)param_2 + ((rd32((u32)param_1 + 0x518u) << 1u) & 0xfffffffeu)) << 2u) & 0xfffffffcu) - 0x7fcaa410u);
}
