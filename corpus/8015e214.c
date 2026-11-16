#include "tc_rt.h"

void fn_8015e214(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    f1 = tc_callf(0x8015dffcu, &a);
    r0 = rd32(param_1 + 0x144u);
    wr32(param_1 + 0x120u, 3u);
    wr32(param_1 + 0x128u, 2u);
    if (r0 != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = 3u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfe8u, rd32(r3));
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32(r3 + 8u));
        a.r[0] = 0x804b9da0u;
        a.r[1] = rd32(param_1 + 0x144u);
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x8010a754u, &a);
    }
    if (rd32(param_1 + 0xf8u) == 0x11u) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        (void)tc_call(0x8015dfecu, &a);
    }
    return;
}
