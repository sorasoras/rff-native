#include "tc_rt.h"

void fn_800f8388(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = param_1 + 0x20u;
    r30 = rd32(param_1 + 0x1cu);
    while (r30 != r31) {
        r3 = r30;
        r30 = rd32(r30 + 0x18u);
        a.r[0] = r3;
        r3 = tc_call(0x800f8210u, &a);
        f1 = tc_lastf();
    }
    wr32(param_1, 0u);
    wr32(param_1 + 0x1cu, r31);
    wr32(param_1 + 0x34u, param_1 + 4u);
    return;
}
