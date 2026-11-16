#include "tc_rt.h"

void fn_8021076c(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x29cu;
    (void)tc_call(0x8007ae84u, &a);
    if (rd32(param_1 + 0x404u) != 0xb7u) {
        a.r[0] = param_1;
        a.r[1] = rd32(param_1 + 0x480u);
        f1 = tc_callf(0x80210878u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0xcu), &a);
        a.r[0] = param_1;
        a.r[1] = 7u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x14u), &a);
    }
    return;
}
