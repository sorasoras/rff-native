#include "tc_rt.h"

u32 fn_8007953c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_2;
    r3 = tc_call(0x80079480u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        wr16(0x817fdfe8u, 0u);
        wr32(0x817fdff0u, 2u);
        wr32(0x817fdfecu, 1u);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 0x817fdfecu;
        a.r[2] = param_2;
        a.r[3] = 0x817fdff0u;
        (void)tc_call(0x80276528u, &a);
        r3 = (u32)rd16(0x817fdfe8u);
    } else {
        r3 = (u32)(s8)rd8(param_2);
    }
    return r3;
}
