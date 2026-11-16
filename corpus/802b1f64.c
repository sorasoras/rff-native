#include "tc_rt.h"

u32 fn_802b1f64(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    r3 = rd32(param_1);
    while (r3 != 0u) {
        if ((u32)rd16(r3 + 4u) == param_2) {
            return r3;
        }
        r3 = rd32(r3);
    }
    return 0u;
}
