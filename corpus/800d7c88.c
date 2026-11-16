#include "tc_rt.h"

u32 fn_800d7c88(void)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0x804b1df8u;
    r29 = 0u;
    for (;;) {
        r31 = 0u;
        a.r[0] = r30;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 == 0u && rd32(r30 + 0x1cu) == 0u) {
            r31 = 1u;
        }
        if (r31 != 0u) break;
        r29 = r29 + 1u;
        r30 = r30 + 0x54u;
        if ((s32)r29 >= 320) {
            r3 = 0u;
            return r3;
        }
    }
    r4 = rd32(0x80571200u);
    wr32(0x80571200u, r4 + 1u);
    r3 = (r29 * 0x54u) - 0x7fb4e208u;
    wr32(r3 + 0x38u, r4);
    return r3;
}
