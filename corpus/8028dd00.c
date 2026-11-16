#include "tc_rt.h"

void fn_8028dd00(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1 + 8u;
    r3 = tc_call(0x8029d58cu, &a);
    if (r3 != 0u) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = r3;
        a.r[2] = 8u;
        f1 = tc_callf(0x80004338u, &a);
    } else {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0u;
        a.r[2] = 8u;
        f1 = tc_callf(0x8000443cu, &a);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = (u32)rd8((u32)param_1 + 0xeu);
    a.r[2] = (u32)param_1 + 0xfu;
    a.r[3] = 0x817fdfe8u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x8029ac90u, &a);
    return;
}
