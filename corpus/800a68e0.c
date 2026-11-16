#include "tc_rt.h"

u32 fn_800a68e0(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0xf8u);
    if ((((r0 != 0xbu && r0 != 0xcu) && (r0 != 0xdu && r0 != 0xeu)) && ((r0 != 0xfu && r0 != 0x10u) && (r0 != 0x11u && r0 != 0x13u))) && ((r0 != 0x14u && r0 != 0x15u) && (r0 != 0x3au && r0 != 0x46u))) {
        return 0u;
    }
    return 1u;
}
