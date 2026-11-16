#include "tc_rt.h"

u32 fn_80125044(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = rd32((u32)param_1 + 0xc48u);
    a.r[1] = param_3;
    r3 = tc_call(0x80197508u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = rd32((u32)param_1 + 0xc4cu);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3 + 0x28u) + 0x1cu), &a);
        r31 = r3;
    } else {
        a.r[0] = rd32((u32)param_1 + 0xc4cu);
        a.r[1] = param_3;
        r3 = tc_call(0x80197508u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r3 = rd32((u32)param_1 + 0xc48u);
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3 + 0x28u) + 0x1cu), &a);
            r31 = r3;
        }
    }
    return r31;
}
