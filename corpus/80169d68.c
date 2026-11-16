#include "tc_rt.h"

u32 fn_80169d68(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x2cu), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x2cu), &a);
    } else {
        r3 = rd32((u32)param_2 + 0xcecu);
    }
    return r3;
}
