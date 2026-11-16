#include "tc_rt.h"

void fn_800a4490(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 == 0x18u) {
        a.r[0] = 0x35u;
        r3 = tc_call(0x8014d9a4u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            r3 = rd32(0x80486438u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 0x68u), &a);
            }
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800a41b4u, &a);
    return;
}
