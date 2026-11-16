#include "tc_rt.h"

void fn_800f3620(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0xc4u), &a);
    if (r3 != 0xffffffffu) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = r3;
        a.r[2] = param_3;
        (void)tc_call(0x8010a794u, &a);
    }
    return;
}
