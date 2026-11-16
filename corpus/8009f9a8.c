#include "tc_rt.h"

s32 fn_8009f9a8(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r5 = 0, r6 = 0;
    c0lt = param_2 < 2;
    r6 = rd32(param_1);
    r5 = 1u;
    if ((u32)param_2 == 2u) {
        r6 = r6 + 2u;
    } else if (!c0lt) {
        if (param_2 >= 4) {
            r5 = 0u;
        } else {
            r0 = (u32)rd8(r6);
            r6 = r6 + 1u;
            r0 = (r0 >> 5u) & 3u;
            r6 = r0 + r6 + 1u;
        }
    } else if (param_2 >= 0) {
        r6 = r6 + 4u;
    } else {
        r5 = 0u;
    }
    if (r5 != 0u) {
        wr32(param_1, r6);
    }
    return (s32)r5;
}
