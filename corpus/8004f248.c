#include "tc_rt.h"

u32 fn_8004f248(void)
{
    u32 c0lt = 0, r0 = 0;
    r0 = rd32(0x803c6da8u);
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (!c0lt) {
            return 1u;
        }
        if ((s32)r0 < 1) {
            return 1u;
        }
        return 0u;
    }
    return 0xffffffffu;
}
