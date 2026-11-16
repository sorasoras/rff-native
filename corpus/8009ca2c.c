#include "tc_rt.h"

u32 fn_8009ca2c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((rd32(param_1 + 0x1cu) & 1u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_3;
        a.r[2] = param_4;
        r3 = tc_call(0x8009c758u, &a);
        f1 = tc_lastf();
        r4 = rd32(param_1);
        r3 = r3 & 0xffffu;
        a.r[0] = rd32(param_1 + 0x10u) + ((r3 + 2u) & 0xffffu);
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(r4), &a);
        r0 = r3 & 0xffffu;
        r3 = 1u;
        wr32(param_2, r0);
    } else {
        r3 = 0u;
    }
    return r3;
}
