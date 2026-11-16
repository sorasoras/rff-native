#include "tc_rt.h"

u32 fn_800a6dcc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    r3 = tc_call(0x800a2e3cu, &a);
    r0 = rd32(r3 + 0x3300u);
    ctr = r0;
    if (r0 > 0u) {
        do {
            if (rd32(r3) == (u32)param_3) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = rd32(r3 + 0x84u);
                (void)tc_call(0x800a6d04u, &a);
                r3 = 1u;
                return r3;
            }
            r3 = r3 + 0x88u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    r3 = 0u;
    return r3;
}
