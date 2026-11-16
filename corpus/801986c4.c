#include "tc_rt.h"

u32 fn_801986c4(u32 param_1, s32 param_2)
{
    u32 r4 = 0;
    (void)param_1;
    r4 = rd32((u32)param_2 + 0x30u);
    if ((r4 & 0x20000u) != 0u) {
        return 0x7dbu;
    }
    if ((r4 & 0x8000u) != 0u) {
        if ((r4 & 0x100000u) != 0u) {
            return 0x7ddu;
        }
        if ((r4 & 0x200000u) != 0u) {
            return 0x7deu;
        }
        if ((r4 & 0x400000u) != 0u) {
            return 0x7dfu;
        }
        if ((r4 & 0x800000u) == 0u) {
            return 0xffffffffu;
        }
        return 0x7e0u;
    }
    if ((r4 & 0x400u) != 0u) {
        return 0x7d7u;
    }
    if ((r4 & 0x800u) != 0u) {
        return 0x7d8u;
    }
    if ((r4 & 0x2000u) != 0u) {
        return 0x7dau;
    }
    if ((r4 & 0x1000u) == 0u) {
        return 0xffffffffu;
    }
    return 0x7d9u;
}
