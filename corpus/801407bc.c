#include "tc_rt.h"

u32 fn_801407bc(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 0u;
    do {
        a.r[0] = 7u;
        a.r[1] = r31;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = param_2;
        a.r[1] = r3;
        r3 = tc_call(0x8025e84cu, &a);
        if (r3 == 0u) {
            r3 = rd32(((r31 << 3u) & 0xfffffff8u) - 0x7fcc5b84u);
            return r3;
        }
        r31 = r31 + 1u;
    } while ((s32)r31 < 23);
    r3 = 0x2e8u;
    return r3;
}
