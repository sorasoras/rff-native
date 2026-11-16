#include "tc_rt.h"

u32 fn_800971b4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = rd32(param_2 + 4u);
    if ((s32)r31 >= 0) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        if (r31 != rd32(r3 + 4u)) {
            r3 = 0x80000000u;
            return r3;
        }
    }
    r3 = rd32(param_2);
    if ((s32)r3 >= 0) {
        a.r[0] = r3;
        r3 = tc_call(0x8014d8acu, &a);
        if (r3 == 0u) {
            r3 = 0x80000000u;
            return r3;
        }
    }
    r3 = 0x7fffffffu;
    return r3;
}
