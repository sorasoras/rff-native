#include "tc_rt.h"

u32 fn_80080350(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    (void)param_1;
    if ((u32)param_2 != 0u) {
        r3 = rd32((u32)param_2 + 0x30u);
        if ((r3 & 0x400u) != 0u) {
            return 0x32u;
        }
        if ((r3 & 0x800u) != 0u) {
            return 0u;
        }
        if ((r3 & 0x1000u) != 0u) {
            return 0u;
        }
        if ((r3 & 0x2000u) != 0u) {
            return 0xffffffe7u;
        }
    }
    return 0u;
}
