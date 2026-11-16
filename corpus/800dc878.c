#include "tc_rt.h"

u32 fn_800dc878(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0x803569d0u);
    wr32(param_1 + 8u, 0u);
    a.r[0] = (u32)param_3;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = (u32)param_4;
    a.r[4] = 0x803569d0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_3 + 4u) + 0xcu), &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    f1 = tc_callf(0x800dca48u, &a);
    a.r[0] = (u32)param_4;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32((u32)param_4 + 4u) + 0xcu), &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    (void)tc_call(0x800dca48u, &a);
    return param_1;
}
