#include "tc_rt.h"

u32 fn_8017a340(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0x2e8u) {
        a.r[0] = 0x8049f1b0u;
        a.r[1] = (u32)param_1;
        r3 = tc_call(0x8015f2b0u, &a);
        r0 = r3 & 0xffu;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r0 & 0x1fu;
        r3 = 0u;
        if (r0 != 0u) {
            r3 = 1u;
        }
        if (r3 == 0u) {
            a.r[0] = 0x8049f1b0u;
            a.r[1] = (u32)param_1;
            r3 = tc_call(0x8015f2b0u, &a);
            r0 = r3 & 0xffu;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = r0 & 0x1ffe0u;
            r3 = 0u;
            if (r0 != 0u) {
                r3 = 1u;
            }
            if (r3 == 0u) {
                a.r[0] = 0x8049f1b0u;
                a.r[1] = (u32)param_1;
                r3 = tc_call(0x8015f2b0u, &a);
                r0 = r3 & 0xffu;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0x400000u;
                r3 = 0u;
                if (r0 != 0u) {
                    r3 = 1u;
                }
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
            }
        }
        r3 = 1u;
    } else {
        r3 = 1u;
    }
    return r3;
}
