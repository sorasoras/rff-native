#include "tc_rt.h"

u32 fn_802f2e74(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    if ((u32)rd16((u32)param_1 + 0x1eu) != (u32)rd16(param_2)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x20u) != (u32)rd16(param_2 + 2u)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x22u) != (u32)rd16(param_2 + 4u)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x24u) != (u32)rd16(param_2 + 6u)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x26u) != (u32)rd16(param_2 + 8u)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x28u) != (u32)rd16(param_2 + 0xau)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x2au) != (u32)rd16(param_2 + 0xcu)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x2cu) != (u32)rd16(param_2 + 0xeu)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x2eu) != (u32)rd16(param_2 + 0x10u)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x30u) != (u32)rd16(param_2 + 0x12u)) {
        return 1u;
    }
    if ((u32)rd16((u32)param_1 + 0x32u) != (u32)rd16(param_2 + 0x14u)) {
        return 1u;
    }
    r5 = (u32)rd16((u32)param_1 + 0x34u);
    r0 = (u32)rd16(param_2 + 0x16u);
    r3 = r0 - r5;
    r0 = r5 - r0;
    r0 = r3 | r0;
    return (r0 >> 0x1fu) & 1u;
}
