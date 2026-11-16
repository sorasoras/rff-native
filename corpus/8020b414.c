#include "tc_rt.h"

u32 fn_8020b414(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x80571404u);
    if (r31 == 0u) {
        r3 = 0u;
    } else {
        wr32(0x80571404u, rd32(r31 + 0x3cu));
        a.r[0] = r31;
        a.r[1] = param_1;
        a.r[2] = param_2;
        a.r[3] = param_3;
        a.r[4] = param_4;
        (void)tc_call(0x8020ac30u, &a);
        r3 = 1u;
        wr32(r31 + 0x3cu, rd32(0x80571400u));
        wr32(0x80571400u, r31);
    }
    return r3;
}
