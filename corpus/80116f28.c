#include "tc_rt.h"

u32 fn_80116f28(s32 param_1)
{
    if (rd32((u32)param_1 + 0x1cu) == 0u) {
        return 0u;
    }
    if (rd32((u32)param_1 + 0x74u) == 0u) {
        return 1u;
    }
    if (rd32((u32)param_1 + 0xccu) == 0u) {
        return 2u;
    }
    if (rd32((u32)param_1 + 0x124u) == 0u) {
        return 3u;
    }
    if (rd32((u32)param_1 + 0x17cu) == 0u) {
        return 4u;
    }
    if (rd32((u32)param_1 + 0x1d4u) == 0u) {
        return 5u;
    }
    if (rd32((u32)param_1 + 0x22cu) == 0u) {
        return 6u;
    }
    if (rd32((u32)param_1 + 0x284u) == 0u) {
        return 7u;
    }
    if (rd32((u32)param_1 + 0x2dcu) == 0u) {
        return 8u;
    }
    if (rd32((u32)param_1 + 0x334u) == 0u) {
        return 9u;
    }
    return 0xffffffffu;
}
