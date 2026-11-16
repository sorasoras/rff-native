#include "tc_rt.h"

u32 fn_80109920(u32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x804990e6u;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = 0xffffffffu;
    r3 = tc_call(0x800f8ebcu, &a);
    r30 = r3;
    wr16(((r3 << 1u) & 0xfffffffeu) - 0x7e802038u, 0x20u);
    a.r[0] = 0xdu;
    a.r[1] = 0x5du;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    a.r[0] = r3;
    a.r[1] = (((r30 + 1u) << 1u) & 0xfffffffeu) - 0x7e802038u;
    a.r[2] = 0xffffffffu;
    r3 = tc_call(0x800f8ebcu, &a);
    r3 = r30 + r3;
    wr16((((r3 + 1u) << 1u) & 0xfffffffeu) - 0x7e802038u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = 0u;
    (void)tc_call(0x80100670u, &a);
    return 1u;
}
