#include "tc_rt.h"

u32 fn_8008f8e8(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    r3 = rd32(param_1);
    r4 = (u32)rd8(r3 + 1u);
    if (((r4 + 0xffu) & 0xffu) <= 1u) {
        if ((u32)rd8(r3 + 3u) != 4u) {
            return 0u;
        }
        if (r4 == 1u) {
            if ((u32)rd8(r3 + 2u) == 0xfu) {
                return 0u;
            }
            return 1u;
        }
        return 1u;
    }
    if (r4 == 3u) {
        r3 = (u32)rd8(r3 + 2u);
        if (r3 > 0xfu || r3 < 5u) {
            if (((r3 + 0xf0u) & 0xffu) > 1u) {
                return 0u;
            }
        }
        return 1u;
    }
    return 0u;
}
