#include "tc_rt.h"

void fn_80043a3c(u32 param_r3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1c7cu) == 0u) {
        a.r[0] = param_r3;
        r3 = tc_call(0x80043c20u, &a);
        r31 = r3;
        if (r3 != 0u && (s32)rd32(r3 + 0xf0u) > 0) {
            wr32(r3 + 0xf0u, 0u);
            a.r[0] = 0u;
            a.r[1] = 0u;
            (void)tc_call(0x8027a740u, &a);
            wr32(r31 + 0xf4u, rd32(0x803c1c6cu));
        }
    }
    return;
}
