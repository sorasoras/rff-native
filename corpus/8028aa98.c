#include "tc_rt.h"

s32 fn_8028aa98(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8028b7a8u, &a);
    r3 = rd32(param_1);
    if ((u32)param_2 == r3) {
        (void)tc_call(0x8028b784u, &a);
        a.r[0] = param_1;
        r3 = tc_call(0x8028a9f8u, &a);
    } else {
        r5 = (u32)param_2 - 8u;
        r3 = r3 - 8u;
        while (r3 != 0u) {
            r0 = rd32(r3);
            if (r0 == r5) {
                wr32(r3, rd32(r5));
                if ((u32)param_2 == rd32(param_1 + 4u)) {
                    wr32(param_1 + 4u, r3 + 8u);
                }
                wr16(param_1 + 8u, (u16)((u32)rd16(param_1 + 8u) - 1u));
                wr32(r5, 0u);
                wr8(r5 + 6u, 1u);
                (void)tc_call(0x8028b784u, &a);
                r3 = (u32)param_2;
                return (s32)r3;
            }
            r3 = r0;
        }
        (void)tc_call(0x8028b784u, &a);
        r3 = 0u;
    }
    return (s32)r3;
}
