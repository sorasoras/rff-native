#include "tc_rt.h"

u32 fn_8015a388(s32 param_1)
{
    u32 r3 = 0;
    if ((s32)rd32((u32)param_1 + 0x6c0u) > 0) {
        return 1u;
    }
    r3 = (u32)param_1 + 0x6e8u;
    if ((s32)rd32(r3 + 0x14u) > 0) {
        return 1u;
    }
    if ((s32)rd32(r3 + 0x50u) > 0) {
        return 1u;
    }
    if ((s32)rd32(r3 + 0x8cu) > 0) {
        return 1u;
    }
    return 0u;
}
