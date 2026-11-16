#include "tc_rt.h"

u32 fn_8012f4d4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xd08u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    r31 = r3;
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80130830u, &a);
    a.r[0] = (u32)param_1 + 0x900u;
    (void)tc_call(0x80119f48u, &a);
    f1 = tc_callf(0x80103018u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x40u) + 0x1cu), &a);
    return r31;
}
