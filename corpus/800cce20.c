#include "tc_rt.h"

u32 fn_800cce20(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 0x803556f0u;
    r30 = 0u;
    while (rd32(r31) != 0u) {
        a.r[0] = rd32(r31);
        a.r[1] = param_2;
        r3 = tc_call(0x8025e84cu, &a);
        if (r3 == 0u) {
            a.r[0] = param_3;
            a.r[1] = (((((r30 >> 0x1fu) & 1u) + r30) << 1u) & 0xfffffffcu) - 0x7fcaa888u;
            a.r[2] = 4u;
            (void)tc_call(0x80004338u, &a);
            r3 = 1u;
            return r3;
        }
        r31 = r31 + 4u;
        r30 = r30 + 1u;
    }
    r3 = 0u;
    return r3;
}
