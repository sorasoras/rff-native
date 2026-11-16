#include "tc_rt.h"

void fn_800471a0(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x80571040u) != 0u) {
        for (;;) {
            r3 = tc_call(0x8004715cu, &a);
            if (r3 == 0u) break;
            a.r[0] = r3;
            (void)tc_call(0x800492e4u, &a);
        }
    }
    return;
}
