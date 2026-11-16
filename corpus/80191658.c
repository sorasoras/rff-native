#include "tc_rt.h"

u32 fn_80191658(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = rd32(rd32(rd32(0x80571398u) + 0x38u) + 0x11cu);
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
