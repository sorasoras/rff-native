#include "tc_rt.h"

void fn_8017a924(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8017ad0cu, &a);
    f1 = tc_lastf();
    a.r[0] = param_2;
    a.r[1] = 0x8036f108u;
    a.f[0] = f1;
    (void)tc_call(rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fc90ef8u), &a);
    return;
}
