#include "tc_rt.h"

u32 fn_800c1838(s32 param_1)
{
    if (rd32((u32)param_1 + 0x110u) != 0u) {
        return 0x1fu;
    }
    return 0x1du;
}
