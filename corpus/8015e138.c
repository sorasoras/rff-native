#include "tc_rt.h"

void fn_8015e138(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = 1u;
    f1 = tc_callf(0x8015dffcu, &a);
    r0 = rd32(param_1 + 0x144u);
    wr32(param_1 + 0x120u, 5u);
    wr32(param_1 + 0x128u, 4u);
    if (r0 != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = 5u;
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
    a.r[0] = param_1;
    (void)tc_call(0x8015e0c4u, &a);
    r0 = rd32(param_1 + 0xf8u);
    if (((r0 == 0x13u || r0 == 0x14u) || (r0 == 0x15u || r0 == 0x3au)) || r0 == 0x46u) {
        wr32(param_1 + 0x128u, 6u);
        wr32(param_1 + 0x130u, 1u);
        wr32(param_1 + 0x134u, 0u);
        wr32(param_1 + 0x138u, 1u);
    }
    return;
}
