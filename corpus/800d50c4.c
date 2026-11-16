#include "tc_rt.h"

u32 fn_800d50c4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d50b8u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d5790u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800d57a4u, &a);
            if (r3 != 0u) {
                r3 = 1u;
                return r3;
            }
        } else if ((u32)((s32)rd32((u32)param_1 + 0x4e4u) >> 31) != 0u) {
            r3 = 1u;
            return r3;
        }
        r3 = 0u;
    } else {
        r3 = 0u;
    }
    return r3;
}
