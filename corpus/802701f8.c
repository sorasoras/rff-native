#include "tc_rt.h"

void fn_802701f8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = rd32(0x80570c3cu);
    a.r[1] = 0x40u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    wr32(0x817fdfd8u, r3);
    if (r3 == 0u) {
        r31 = 0xffffffeau;
    } else {
        wr32(r3 + 0x20u, 0u);
        wr32(r3 + 0x24u, 0u);
        wr32(r3 + 0x28u, 0u);
        wr32(r3, 7u);
        wr32(r3 + 8u, param_1);
    }
    if (r31 == 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = param_5;
        r3 = tc_call(0x8026ffd8u, &a);
        if (r3 == 0u) {
            a.r[0] = rd32(0x817fdfd8u);
            a.r[1] = 0u;
            (void)tc_call(0x8026f2a0u, &a);
        }
    }
    return;
}
