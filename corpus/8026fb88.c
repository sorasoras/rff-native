#include "tc_rt.h"

s32 fn_8026fb88(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = rd32(0x80570c3cu);
    a.r[1] = 0x40u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    wr32(0x817fdfe8u, r3);
    if (r3 == 0u) {
        r31 = 0xffffffeau;
    } else {
        wr32(r3 + 0x20u, 0u);
        wr32(r3 + 0x24u, 0u);
        wr32(r3 + 0x28u, 0u);
        wr32(r3, 4u);
        wr32(r3 + 8u, param_1);
    }
    if (r31 == 0u) {
        r31 = 0u;
        if (r3 == 0u) {
            r31 = 0xfffffffcu;
        } else {
            if ((u32)param_2 != 0u) {
                r0 = (u32)param_2 - 0x80000000u;
            } else {
                r0 = 0u;
            }
            wr32(r3 + 0xcu, r0);
            wr32(r3 + 0x10u, param_3);
            a.r[0] = (u32)param_2;
            a.r[1] = param_3;
            (void)tc_call(0x80227738u, &a);
        }
        if (r31 == 0u) {
            a.r[0] = rd32(0x817fdfe8u);
            a.r[1] = 0u;
            r3 = tc_call(0x8026f2a0u, &a);
            r31 = r3;
        }
    }
    return (s32)r31;
}
