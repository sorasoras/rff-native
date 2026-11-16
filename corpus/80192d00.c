#include "tc_rt.h"

u32 fn_80192d00(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32(param_1) + 0xc5u;
    a.r[1] = 2u;
    r3 = tc_call(0x800f89c4u, &a);
    r3 = rd32(0x80571398u) + ((r3 << 2u) & 0xfffffffcu);
    r3 = rd32(r3 + 0xe8u);
    if (r3 != 0u) {
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 2u;
        (void)tc_call(0x800f8a84u, &a);
        wr16(0x817fdfecu, 0u);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 0u;
        (void)tc_call(0x80100670u, &a);
    }
    return 1u;
}
