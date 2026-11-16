#include "tc_rt.h"

void fn_8006c878(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        (void)tc_call(0x8006c8c4u, &a);
        r31 = r31 + 1u;
    } while (r31 <= 5u);
    return;
}
