#include "tc_rt.h"

void fn_8028fdf8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 8u;
    r3 = tc_call(0x8028a0d4u, &a);
    if (r3 != 0u) {
        wr16(r3, 0x101u);
        a.r[0] = r3;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
