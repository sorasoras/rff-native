#include "tc_rt.h"

u32 fn_80191f94(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)rd16(rd32(rd32(0x80571398u) + 0x38u) + 0x20cu);
    r3 = tc_call(0x800cd6a4u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = 0u;
    (void)tc_call(0x801006a4u, &a);
    return 1u;
}
