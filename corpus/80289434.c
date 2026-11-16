#include "tc_rt.h"

u32 fn_80289434(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0xffffffffu;
    a.r[0] = rd32((((u32)(s8)param_1 << 2u) & 0xfffffffcu) - 0x7faf01e0u);
    r3 = tc_call(0x80287bc4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r0 = (u32)rd8(r31 + 0x5bu);
        if (r0 == 1u || r0 == 3u) {
            r30 = 1u;
        } else {
            r30 = 0u;
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return r30;
}
