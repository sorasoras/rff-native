#include "tc_rt.h"

void fn_8028fd20(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr8(0x8053d536u, 1u);
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x802a1684u, &a);
    }
    a.r[0] = 0x8028fd1cu;
    (void)tc_call(0x8029576cu, &a);
    return;
}
