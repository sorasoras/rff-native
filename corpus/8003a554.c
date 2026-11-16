#include "tc_rt.h"

u32 fn_8003a554(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        a.r[0] = rd32(param_1) * 0xcu;
        r3 = tc_call(0x8004ca24u, &a);
        f1 = tc_lastf();
        r31 = r3;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.r[0] = r3;
        a.r[1] = rd32(param_1 + 8u);
        a.r[2] = rd32(param_1);
        (void)tc_call(0x8003a530u, &a);
        r3 = r31;
    } else {
        r3 = 0u;
    }
    return r3;
}
