#include "tc_rt.h"

u32 fn_802b1ea4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802b5150u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr8(r3 + 0x474u, 0u);
        wr32(r3 + 0x410u, param_2);
        wr32(r3 + 0x414u, param_3);
        r3 = 1u;
    }
    return r3;
}
