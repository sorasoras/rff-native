#include "tc_rt.h"

u32 fn_80050a04(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        for (;;) {
            if (rd32(0x805710a4u) == 0u) {
                a.r[0] = 0x803c8db8u;
                r3 = tc_call(0x80157b90u, &a);
                if (r3 == 0u) break;
            }
            r3 = tc_call(0x80037910u, &a);
            r0 = 0u;
            if (r3 != 0u && r3 != 1u && r3 != 2u) {
                a.r[0] = 1u;
                (void)tc_call(0x8003cdc0u, &a);
                (void)tc_call(0x8003ce24u, &a);
                r0 = 1u;
            }
            if (r0 == 0u) {
                if (rd32(0x805710a0u) != 0u) {
                    a.r[0] = 1u;
                    (void)tc_call(0x8003cdc0u, &a);
                    (void)tc_call(0x80035bd4u, &a);
                    a.r[0] = 0x803c81f0u;
                    (void)tc_call(0x801dbe40u, &a);
                    a.r[0] = 2u;
                    (void)tc_call(0x80051fdcu, &a);
                    a.r[0] = 2u;
                    (void)tc_call(0x80051b20u, &a);
                    (void)tc_call(0x8003ce24u, &a);
                }
                a.r[0] = 0x804b9da0u;
                (void)tc_call(0x8010b258u, &a);
            }
        }
        r3 = 1u;
    } else {
        if (rd32(0x805710a4u) == 0u) {
            a.r[0] = 0x803c8db8u;
            r3 = tc_call(0x80157b90u, &a);
            if (r3 == 0u) {
                r3 = 1u;
                return r3;
            }
        }
        r3 = 0u;
    }
    return r3;
}
