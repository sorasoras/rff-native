#include "tc_rt.h"

u32 fn_8017aef8(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8017ad14u, &a);
    if (param_2 >= (s32)r3) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x8017ad0cu, &a);
        f1 = tc_lastf();
        a.r[0] = (u32)param_2;
        a.r[1] = 0x8036f124u;
        a.f[0] = f1;
        r3 = tc_call(rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fc90edcu), &a);
    }
    return r3;
}
