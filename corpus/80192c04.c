#include "tc_rt.h"

u32 fn_80192c04(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32(param_1) + 0xc6u;
    a.r[1] = 2u;
    r3 = tc_call(0x800f89c4u, &a);
    a.r[0] = rd32(0x80571398u);
    a.r[1] = r3;
    r3 = tc_call(0x801c09d4u, &a);
    r0 = 0u;
    if (r3 != 0x2e8u) {
        r3 = ((r3 << 3u) & 0xfffffff8u) - 0x7fb66fa0u;
        r0 = (u32)rd8(r3 + 0x824u);
    }
    a.r[0] = r0;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 2u;
    (void)tc_call(0x800f8a84u, &a);
    wr16(0x817fdfeeu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0u;
    (void)tc_call(0x80100670u, &a);
    return 1u;
}
