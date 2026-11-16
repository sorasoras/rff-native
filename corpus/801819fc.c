#include "tc_rt.h"

u32 fn_801819fc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r6 = 0, r9 = 0, r10 = 0, r11 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r6 = rd32(r3 + 4u);
    r11 = rd32(param_3);
    wr32(0x817fdfe4u, rd32(r3));
    r10 = rd32(param_3 + 4u);
    wr32(0x817fdfe8u, r6);
    r9 = rd32(param_3 + 8u);
    f1 = (f64)rdf32(0x805750f8u);
    wr32(0x817fdfecu, rd32(r3 + 8u));
    wr32(0x817fdfd8u, r11);
    wr32(0x817fdfdcu, r10);
    wr32(0x817fdfe0u, r9);
    a.f[0] = f1;
    a.r[0] = 0x8046d8c8u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfe4u;
    a.r[3] = 0x817fdfd8u;
    a.r[4] = 0u;
    a.r[5] = 0xffffu;
    r3 = tc_call(0x8008c458u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
