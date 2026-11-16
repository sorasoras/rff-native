#include "tc_rt.h"

void fn_8028f7ec(u32 param_1)
{
    u32 r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)rd8(param_1) == 0u) {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = param_1 + 3u;
        f1 = tc_callf(0x8028d2a4u, &a);
        wr8(0x817fdfeeu, 2u);
        r12 = rd32(0x8053d644u);
        wr8(0x817fdff0u, rd8(param_1 + 2u));
        a.r[0] = 7u;
        a.r[1] = 0x817fdfe8u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    return;
}
