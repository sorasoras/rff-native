#include "tc_rt.h"

void fn_8015c9f4(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        r3 = tc_call(0x8015cb24u, &a);
        r30 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800d50b8u, &a);
        if (r3 != 0u) {
            a.r[0] = r30;
            (void)tc_call(0x800d431cu, &a);
        }
        r31 = r31 + 1u;
    } while ((s32)r31 < 4);
    return;
}
