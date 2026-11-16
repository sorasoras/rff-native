#include "tc_rt.h"

void fn_8026b034(void)
{
    u32 r12 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80502ca0u) == 0u) {
        r12 = rd32(0x8038f4bcu);
        if (r12 != 0u) {
            a.r[0] = 0x8038f4b8u;
            a.r[1] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
