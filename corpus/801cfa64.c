#include "tc_rt.h"

u32 fn_801cfa64(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    for (;;) {
        r3 = rd32(r3 + 0x324u);
        r3 = rd32(r3 + (((u32)param_2 << 2u) & 0xfffffffcu));
        if (r3 == 0u) break;
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x19cu);
        if (r12 != 0x801cfa64u) {
            if (r12 == 0x817ff000u) {
                return r3;
            }
            a.r[0] = r3;
            a.r[1] = (u32)param_2;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return r3;
        }
    }
    return 0u;
}
