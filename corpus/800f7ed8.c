#include "tc_rt.h"

u32 fn_800f7ed8(u32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(param_1, 0u);
    a.r[0] = param_1 + 0x18u;
    a.r[1] = param_r4;
    r3 = tc_call(0x80276158u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1 + 0x18u;
        a.r[1] = 0x80338ff8u;
        a.r[2] = param_1 + 4u;
        (void)tc_call(0x802761b0u, &a);
        wr32(param_1 + 0x14u, rd32(param_1 + 0xcu));
        a.r[0] = param_1;
        (void)tc_call(0x800f7f90u, &a);
        r3 = 1u;
    }
    return r3;
}
