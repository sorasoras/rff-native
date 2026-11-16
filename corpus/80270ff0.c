#include "tc_rt.h"

u32 fn_80270ff0(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x802721a4u, &a);
    if (r3 == 0u) {
        r3 = 0xffffff80u;
    } else {
        wr32(0x817fdfb8u, 0u);
        wr32(0x817fdfbcu, 0u);
        wr32(0x817fdfc0u, 0u);
        wr32(0x817fdfc4u, 0u);
        wr32(0x817fdfc8u, 0u);
        wr32(0x817fdfccu, 0u);
        wr32(0x817fdfd0u, 0u);
        wr32(0x817fdfd4u, 0u);
        wr32(0x817fdfd8u, 0u);
        wr32(0x817fdfdcu, 0u);
        wr32(0x817fdfe0u, 0u);
        wr32(0x817fdfe4u, 0u);
        wr32(0x817fdfe8u, 0u);
        wr32(0x817fdfecu, 0u);
        wr32(0x817fdff0u, 0u);
        wr32(0x817fdff4u, 0u);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = param_1;
        (void)tc_call(0x8027231cu, &a);
        a.r[0] = 0x817fdfb8u;
        r3 = tc_call(0x8026e308u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x802721bcu, &a);
    }
    return r3;
}
