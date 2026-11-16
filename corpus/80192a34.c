#include "tc_rt.h"

u32 fn_80192a34(u32 param_1)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    r4 = rd32(rd32(0x80571398u) + 0x38u);
    r5 = (u32)rd8(r4 + 0x20fu);
    if ((u32)rd16(r4 + 0x20cu) == 0x2e8u) {
        r5 = 0u;
    }
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = r5;
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
