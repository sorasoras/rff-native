#include "tc_rt.h"

u32 fn_8025eb8c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_4;
    r3 = tc_call(0x80225448u, &a);
    if ((r3 & 0x20000000u) == 0u) {
        r3 = 0u;
        if (rd32(0x805719c8u) == 0u) {
            r3 = tc_call(0x8026d6dcu, &a);
            if (r3 == 0u) {
                wr32(0x805719c8u, 1u);
            }
        }
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
        a.r[0] = param_2;
        a.r[1] = rd32(param_3);
        r3 = tc_call(0x8026d724u, &a);
        if (r3 != 0u) {
            r3 = 1u;
            wr32(param_3, 0u);
            return r3;
        }
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x8026a940u, &a);
    r3 = 0u;
    return r3;
}
