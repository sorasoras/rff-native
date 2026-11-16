#include "tc_rt.h"

void fn_802a8764(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x802a99acu, &a);
    if (r3 != 0u && rd32(r3 + 8u) == 0u) {
        r3 = r3 + 0x10u;
        a.r[0] = r3;
        a.r[1] = 2u;
        a.r[2] = 0x78u;
        (void)tc_call(0x8028d220u, &a);
    }
    return;
}
