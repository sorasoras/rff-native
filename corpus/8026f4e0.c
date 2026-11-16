#include "tc_rt.h"

void fn_8026f4e0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    a.r[0] = rd32(0x80570c3cu);
    a.r[1] = 0x40u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    wr32(0x817fdfd8u, r3);
    if (r3 != 0u) {
        wr32(r3 + 0x20u, param_3);
        wr32(r3 + 0x24u, param_4);
        wr32(r3 + 0x28u, 0u);
        wr32(r3, 1u);
        wr32(r3 + 8u, 0u);
    } else {
        r30 = 0xffffffeau;
    }
    if (r30 == 0u) {
        r31 = r3;
        r30 = 0u;
        if (r3 != 0u) {
            r3 = param_1;
            r4 = 0x40u;
            while ((u32)rd8(r3) != 0u) {
                c0eq = r4 == 0u;
                r4 = r4 - 1u;
                if (c0eq) break;
                r3 = r3 + 1u;
            }
            a.r[0] = param_1;
            a.r[1] = r3 - param_1 + 1u;
            (void)tc_call(0x80227738u, &a);
            wr32(r31 + 0xcu, param_1 - 0x80000000u);
            wr32(r31 + 0x10u, param_2);
        } else {
            r30 = 0xfffffffcu;
        }
        if (r30 == 0u) {
            a.r[0] = rd32(0x817fdfd8u);
            a.r[1] = param_3;
            (void)tc_call(0x8026f2a0u, &a);
        }
    }
    return;
}
