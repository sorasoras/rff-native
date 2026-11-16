#include "tc_rt.h"

s32 fn_80055b48(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    for (;;) {
        r0 = rd32(r3 + 0xe0u);
        if (r0 == 0u) break;
        r3 = r0;
        r12 = rd32(r0);
        r12 = rd32(r12 + 0x30u);
        if (r12 != 0x80055b48u) {
            if (r12 == 0x817ff000u) {
                return (s32)r0;
            }
            a.r[0] = r0;
            a.r[1] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return (s32)r3;
        }
    }
    r3 = r3 + 0x28u;
    return (s32)r3;
}
