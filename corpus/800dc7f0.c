#include "tc_rt.h"

s32 fn_800dc7f0(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r0 = rd32((u32)param_1 + 4u);
        wr32((u32)param_1 + 0xcu, 0x803569c4u);
        if (r0 != 0u) {
            a.r[0] = r0;
            a.r[1] = 1u;
            a.f[0] = 0.0;
            f1 = tc_callf(rd32(rd32(r0 + 4u) + 8u), &a);
        }
        r3 = rd32((u32)param_1 + 8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 4u) + 8u), &a);
        }
    }
    return param_1;
}
