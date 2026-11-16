#include "tc_rt.h"

u32 fn_8028d2d8(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r6 = 0;
    if ((u32)rd8(param_1) != (u32)rd8(param_2)) {
        return 0xffffffffu;
    }
    r6 = param_1 + 2u;
    r3 = param_2 + 2u;
    if ((u32)rd8(param_1 + 1u) != (u32)rd8(param_2 + 1u)) {
        return 0xffffffffu;
    }
    if ((u32)rd8(r6) != (u32)rd8(r3)) {
        return 0xffffffffu;
    }
    if ((u32)rd8(r6 + 1u) != (u32)rd8(r3 + 1u)) {
        return 0xffffffffu;
    }
    if ((u32)rd8(r6 + 2u) != (u32)rd8(r3 + 2u)) {
        return 0xffffffffu;
    }
    if ((u32)rd8(r6 + 3u) != (u32)rd8(r3 + 3u)) {
        return 0xffffffffu;
    }
    return 0u;
}
