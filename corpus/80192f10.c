#include "tc_rt.h"

u32 fn_80192f10(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32(rd32(0x80571398u) + 0x38u);
    r3 = (u32)rd16(r4 + 0x20cu);
    r4 = (u32)rd8(r4 + 0x20fu);
    a.r[0] = r3;
    a.r[1] = r4;
    r3 = tc_call(0x800cd6ccu, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = r3 & 0xffffu;
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
