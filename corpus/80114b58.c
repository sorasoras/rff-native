#include "tc_rt.h"

s32 fn_80114b58(s32 param_1)
{
    u32 c0eq = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x48u, 0u);
    wr32((u32)param_1 + 0x40u, 0u);
    wr32((u32)param_1 + 0x44u, 0xffffffffu);
    wr32((u32)param_1 + 0x4cu, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    f1 = tc_callf(0x8000443cu, &a);
    r3 = rd32((u32)param_1 + 0x48u);
    c0eq = r3 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 8u), &a);
        }
        wr32((u32)param_1 + 0x48u, 0u);
    }
    return param_1;
}
