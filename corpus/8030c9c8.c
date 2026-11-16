#include "tc_rt.h"

u32 fn_8030c9c8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0xcu);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x802f23e0u, &a);
        return r3;
    }
    return 0u;
}
