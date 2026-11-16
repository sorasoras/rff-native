#include "tc_rt.h"

void fn_800a4580(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u && (u32)param_1 != 0x18u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80074e90u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800a4500u, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x98u), &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80073390u, &a);
        }
    }
    return;
}
