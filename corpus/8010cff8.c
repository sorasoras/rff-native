#include "tc_rt.h"

u32 fn_8010cff8(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(0x805706e8u);
    a.r[1] = param_1;
    r3 = tc_call(0x8010ce84u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r31 = 0u;
        if ((u32)((s32)rd32(r3 + 0x74u) >> 31) != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0xb0u), &a);
            if (r3 == 1u) {
                r31 = 1u;
            }
        }
        r3 = r31;
    }
    return r3;
}
