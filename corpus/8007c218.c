#include "tc_rt.h"

u32 fn_8007c218(s32 param_1)
{
    if (rd32((u32)param_1 + 0x38u) == 0u) {
        return 0u;
    }
    if (((u32)rd16((u32)param_1 + 0x34u) & 0x100u) != 0u) {
        return 0x8007c164u;
    }
    return 0x8007bf90u;
}
