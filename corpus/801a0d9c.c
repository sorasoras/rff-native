#include "tc_rt.h"

void fn_801a0d9c(u32 param_1)
{
    u32 r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571100u) == 1u && rd32(param_1 + 0x2cu) == 0u) {
        wr32(param_1 + 0x2cu, 1u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x38u), &a);
        r4 = tc_lastr4();
    }
    if (rd32(0x80571100u) == 0u && rd32(param_1 + 0x2cu) == 1u) {
        wr32(param_1 + 0x2cu, 0u);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x34u), &a);
    }
    return;
}
