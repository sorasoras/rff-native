#include "tc_rt.h"

u32 fn_8018e174(u32 param_1)
{
    u32 r0 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = rd32(0x8036ff54u);
    r0 = rd32(0x8036ff58u);
    wr32(0x817fdfe8u, rd32(0x8036ff50u));
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 1u;
    (void)tc_call(0x8018f0e4u, &a);
    return 1u;
}
