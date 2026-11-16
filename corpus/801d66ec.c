#include "tc_rt.h"

u32 fn_801d66ec(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r3 = rd32((u32)param_1 + ((rd32((u32)param_1 + 0x290u) << 2u) & 0xfffffffcu) + 0x268u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(r3 + 0x74u) + 0x10u), &a);
        r3 = rd32((u32)param_1 + ((rd32((u32)param_1 + 0x290u) << 2u) & 0xfffffffcu) + 0x268u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3 + 0x74u) + 0x18u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r3 = rd32((u32)param_1 + ((rd32((u32)param_1 + 0x290u) << 2u) & 0xfffffffcu) + 0x268u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3 + 0x74u) + 0x14u), &a);
            r4 = tc_lastr4();
            r0 = rd32((u32)param_1 + 0x290u) + 1u;
            wr32((u32)param_1 + 0x290u, r0);
            if ((s32)r0 < 10) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r3 = rd32((u32)param_1 + r0 + 0x268u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3 + 0x74u) + 0xcu), &a);
                    return r31;
                }
                r31 = 1u;
            } else {
                r31 = 1u;
            }
        }
    }
    return r31;
}
