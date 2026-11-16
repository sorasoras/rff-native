#include "tc_rt.h"

u32 fn_801b3d0c(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r8 = 0;
    (void)param_1;
    if ((u32)param_2 == 0x21u) {
        return 0xb7u;
    }
    r8 = (u32)rd8(((u32)param_2 * 0x38u) - 0x7fb64fcbu);
    r3 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fcc4b50u);
    if ((u32)param_2 == 7u) {
        r3 = rd32(((r8 << 2u) & 0xfffffffcu) - 0x7fcc4ad0u);
    } else {
        if ((u32)param_2 == 0x1eu) {
            r3 = rd32(((r8 << 2u) & 0xfffffffcu) - 0x7fcc4ac4u);
        } else {
            if ((u32)param_2 == 0x1fu) {
                r3 = rd32(((r8 << 2u) & 0xfffffffcu) - 0x7fcc4ab8u);
            }
        }
    }
    if ((u32)param_2 == 0x12u) {
        if ((u32)param_3 == 1u) {
            return 0x47u;
        }
        if ((u32)param_3 != 2u) {
            return r3;
        }
        return 0x47u;
    }
    if ((u32)param_2 == 0x15u) {
        if ((u32)param_3 == 1u) {
            return 0x4bu;
        }
        if ((u32)param_3 != 2u) {
            return r3;
        }
        return 0x4bu;
    }
    if ((u32)param_3 == 1u) {
        return rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fcc4aa8u);
    }
    if ((u32)param_3 != 2u) {
        return r3;
    }
    return rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fcc4a70u);
}
