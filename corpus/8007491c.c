#include "tc_rt.h"

u32 fn_8007491c(void)
{
    u32 ctr = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x8046b810u;
    ctr = 0x1eu;
    do {
        if (rd32(r31 + 0x48u) == 0u) {
            a.r[0] = r31;
            a.r[1] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r31) + 0xcu), &a);
            r3 = r31;
            return r3;
        }
        r31 = r31 + 0x114u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = 0u;
    return r3;
}
