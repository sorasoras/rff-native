#include "tc_rt.h"

u32 fn_80226ea8(u32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0;
    r7 = param_1;
    r6 = 0u;
    while (r7 != 0u && param_2 > r7) {
        r6 = r7;
        r7 = rd32(r7 + 4u);
    }
    wr32(param_2 + 4u, r7);
    wr32(param_2, r6);
    if (r7 != 0u) {
        wr32(r7, param_2);
        r5 = rd32(param_2 + 8u);
        if ((param_2 + r5) == r7) {
            wr32(param_2 + 8u, r5 + rd32(r7 + 8u));
            r7 = rd32(r7 + 4u);
            wr32(param_2 + 4u, r7);
            if (r7 != 0u) {
                wr32(r7, param_2);
            }
        }
    }
    if (r6 == 0u) {
        return param_2;
    }
    wr32(r6 + 4u, param_2);
    r5 = rd32(r6 + 8u);
    if ((r6 + r5) != param_2) {
        return param_1;
    }
    wr32(r6 + 8u, r5 + rd32(param_2 + 8u));
    wr32(r6 + 4u, r7);
    if (r7 == 0u) {
        return param_1;
    }
    wr32(r7, r6);
    return param_1;
}
