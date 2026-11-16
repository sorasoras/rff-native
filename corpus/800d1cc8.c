#include "tc_rt.h"

u32 fn_800d1cc8(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x28u);
    if (r0 == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d1cf8u, &a);
        return r3;
    }
    if (r0 == 1u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d1cf8u, &a);
        return r3;
    }
    if (r0 == 2u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d2290u, &a);
        return r3;
    }
    return 0u;
}
