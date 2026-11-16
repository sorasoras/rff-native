#include "tc_rt.h"

u32 fn_8022af30(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    if ((u32)param_1 == 1u) {
        if (param_2 >= 0x20u && param_2 <= 0xdfu) {
            return (u32)rd16((((param_2 - 0x20u) << 1u) & 0xfffffffeu) - 0x7fc862f8u);
        }
        if (param_2 > 0x889eu && param_2 <= 0x9872u) {
            r4 = param_2 & 0xffu;
            r0 = 0u;
            r3 = (((param_2 >> 8u) & 0xffu) - 0x88u) * 0xbcu;
            if ((r4 >= 0x40u && r4 <= 0xfcu) && r4 != 0x7fu) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                return 0u;
            }
            r4 = r4 - 0x40u;
            if ((s32)r4 >= 64) {
                r4 = r4 - 1u;
            }
            r3 = r3 + r4;
            r3 = r3 + 0x2beu;
            return r3;
        }
        if (param_2 < 0x8140u || param_2 >= 0x879eu) {
            return 0u;
        }
        r4 = param_2 & 0xffu;
        r0 = 0u;
        r3 = (((param_2 >> 8u) & 0xffu) - 0x81u) * 0xbcu;
        if ((r4 >= 0x40u && r4 <= 0xfcu) && r4 != 0x7fu) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            return 0u;
        }
        r4 = r4 - 0x40u;
        if ((s32)r4 >= 64) {
            r4 = r4 - 1u;
        }
        r3 = (u32)rd16((((r3 + r4) << 1u) & 0xfffffffeu) - 0x7fc86178u);
        return r3;
    }
    if (param_2 > 0x20u && param_2 <= 0xffu) {
        return param_2 - 0x20u;
    }
    return 0u;
}
