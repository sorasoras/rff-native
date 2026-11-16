#include "tc_rt.h"

u32 fn_801b0090(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 8u);
    c0lt = (s32)r4 < 1;
    if (r4 != 1u) {
        if (!c0lt) {
            r3 = 1u;
            return r3;
        }
        if ((s32)r4 < 0) {
            r3 = 1u;
            return r3;
        }
        wr32((u32)param_1 + 8u, r4 + 1u);
    } else {
        r3 = tc_call(0x80097da4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x80097c5cu, &a);
        return r3;
    }
    r3 = 1u;
    return r3;
}
