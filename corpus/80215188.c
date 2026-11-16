#include "tc_rt.h"

u32 fn_80215188(u32 param_1, s32 param_2)
{
    u32 r0 = 0;
    if ((u32)param_2 == 9u && (u32)rd8(param_1) != 0u) {
        r0 = rd32(param_1 + 4u);
        if (r0 != 0xffffffffu) {
            r0 = r0 * 0x14u;
            return rd32(rd32(param_1 + 0x4dcu) + r0 + 4u);
        }
    }
    return rd32(rd32(param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x60u) + 0x34u);
}
