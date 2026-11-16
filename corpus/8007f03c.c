#include "tc_rt.h"

u32 fn_8007f03c(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x30u);
    if ((r3 & 0x8000u) != 0u) {
        if ((r3 & 0x100000u) != 0u) {
            return 0xffffffffu;
        }
        if ((r3 & 0x200000u) != 0u) {
            return 0xffffffffu;
        }
        return 0xffffffffu;
    }
    if ((u32)param_2 != 0u) {
        return 0x7dbu;
    }
    if ((r3 & 0x400u) != 0u) {
        return 0x7d7u;
    }
    if ((r3 & 0x800u) != 0u) {
        return 0x7d8u;
    }
    if ((r3 & 0x1000u) != 0u) {
        return 0x7d9u;
    }
    if ((r3 & 0x2000u) != 0u) {
        return 0x7dau;
    }
    return 0xffffffffu;
}
