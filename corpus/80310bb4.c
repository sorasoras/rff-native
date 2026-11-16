#include "tc_rt.h"

u32 fn_80310bb4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_2 + 0xcu) != 1u) {
        r3 = 0u;
    } else {
        r4 = (u32)rd16((u32)param_1 + 0x3cu);
        wr16((u32)param_1 + 0x3cu, (u16)(r4 - 1u));
        a.r[0] = (u32)param_2;
        a.r[1] = r4;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32((u32)param_2 + 0x1cu) + 0xcu), &a);
        r4 = tc_lastr4();
        r0 = rd32((u32)param_2 + 0x10u);
        wr32((u32)param_2 + 0xcu, 2u);
        if (r0 == 0u) {
            a.r[0] = (u32)param_2;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32((u32)param_2 + 0x1cu) + 8u), &a);
        }
        r3 = 1u;
    }
    return r3;
}
