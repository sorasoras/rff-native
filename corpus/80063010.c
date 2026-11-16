#include "tc_rt.h"

u32 fn_80063010(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
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
    r0 = rd32(r3 + 4u);
    r9 = rd32(param_3);
    wr32(0x817fdfe4u, rd32(r3));
    r8 = rd32(param_3 + 4u);
    wr32(0x817fdfe8u, r0);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdfecu, rd32(r3 + 8u));
    wr32(0x817fdfd8u, r9);
    wr32(0x817fdfdcu, r8);
    wr32(0x817fdfe0u, r0);
    a.f[0] = (f64)rdf32(param_1 + 0xb0u);
    a.r[0] = 0x8046d8c8u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfe4u;
    a.r[3] = 0x817fdfd8u;
    a.r[4] = rd32(param_1 + 0xbcu);
    a.r[5] = (u32)rd16(param_1 + 0x74u);
    r3 = tc_call(0x8008c458u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
