#include "tc_rt.h"

s32 fn_8026f718(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = rd32(0x80570c3cu);
    a.r[1] = 0x40u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    if (r3 == 0u) {
        r31 = 0xffffffeau;
    } else {
        wr32(r3 + 0x20u, param_2);
        wr32(r3 + 0x24u, param_3);
        wr32(r3 + 0x28u, 0u);
        wr32(r3, 2u);
        wr32(r3 + 8u, param_1);
    }
    if (r31 == 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = param_2;
        r3 = tc_call(0x8026f2a0u, &a);
        r31 = r3;
    }
    return (s32)r31;
}
