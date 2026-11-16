#include "tc_rt.h"

void fn_801e868c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfe8u, rd32((u32)param_1 + 0x348u));
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x8014a150u, &a);
    r31 = r3;
    if (r3 != 0xffffffffu) {
        a.r[0] = 0x817fdfe8u;
        r3 = tc_call(0x8014a168u, &a);
        if (param_2 >= (s32)r3) {
            r3 = rd32((u32)param_1 + 0x33cu);
            if ((r3 & 1u) == 0u) {
                wr32((u32)param_1 + 0x33cu, r3 | 1u);
                a.f[0] = (f64)rdf32(0x80576328u);
                a.r[0] = 0x804b9db0u;
                a.r[1] = r31;
                (void)tc_call(0x8011f1e0u, &a);
            }
        }
    }
    return;
}
