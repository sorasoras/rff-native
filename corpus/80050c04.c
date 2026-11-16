#include "tc_rt.h"

void fn_80050c04(u32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    if (rd32(0x805710a4u) == 0u && rd32(0x803c8664u) != 0u) {
        r30 = rd32(rd32(0x803c865cu) + 8u);
        if (r30 != 0u) {
            a.r[0] = r30 + 4u;
            a.r[1] = 1u;
            a.r[2] = rd32(r30 + 0x38u);
            r3 = tc_call(0x80037648u, &a);
            wr32(r30 + 0x3cu, r3);
            a.r[0] = 0x803c865cu;
            (void)tc_call(0x8007b09cu, &a);
            wr32(0x805710a8u, r30);
            wr32(r30, 0u);
            a.r[0] = rd32(r30 + 0x3cu);
            (void)tc_call(0x80037804u, &a);
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x80050a04u, &a);
    return;
}
