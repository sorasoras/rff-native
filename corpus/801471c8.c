#include "tc_rt.h"

u32 fn_801471c8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = (u32)param_1;
    r28 = (u32)param_1 + 0xa4u;
    r3 = 0u;
    r27 = 0u;
    do {
        r0 = rd32(r29 + 4u);
        if (r0 == 1u) {
            a.r[0] = rd32(r29 + 0x54u);
            a.r[1] = r28;
            a.f[0] = f1;
            r3 = tc_call(rd32(r29 + 0x554u), &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                r12 = rd32(r29 + 0x5a4u);
                if (r12 != 0u) {
                    a.r[0] = r27;
                    a.r[1] = 1u;
                    a.f[0] = f1;
                    f1 = tc_callf(r12, &a);
                }
                wr32(r29 + 4u, 3u);
            }
            r3 = 1u;
        } else {
            if (r0 == 3u) {
                wr32(r29 + 4u, 0u);
            }
        }
        r27 = r27 + 1u;
        r28 = r28 + 0x3cu;
        r29 = r29 + 4u;
    } while ((s32)r27 < 20);
    return r3;
}
