#include "tc_rt.h"

s32 fn_8026f980(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    a.r[0] = rd32(0x80570c3cu);
    a.r[1] = 0x40u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    wr32(0x817fdfe8u, r3);
    if (r3 == 0u) {
        r30 = 0xffffffeau;
    } else {
        wr32(r3 + 0x20u, 0u);
        wr32(r3 + 0x24u, 0u);
        wr32(r3 + 0x28u, 0u);
        wr32(r3, 3u);
        wr32(r3 + 8u, param_1);
    }
    if (r30 == 0u) {
        r31 = r3;
        r30 = 0u;
        if (r3 == 0u) {
            r30 = 0xfffffffcu;
        } else {
            a.r[0] = (u32)param_2;
            a.r[1] = param_3;
            (void)tc_call(0x8022770cu, &a);
            if ((u32)param_2 != 0u) {
                r0 = (u32)param_2 - 0x80000000u;
            } else {
                r0 = 0u;
            }
            wr32(r31 + 0xcu, r0);
            wr32(r31 + 0x10u, param_3);
        }
        if (r30 == 0u) {
            a.r[0] = rd32(0x817fdfe8u);
            a.r[1] = 0u;
            r3 = tc_call(0x8026f2a0u, &a);
            r30 = r3;
        }
    }
    return (s32)r30;
}
