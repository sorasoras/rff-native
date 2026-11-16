#include "tc_rt.h"

u32 fn_80219680(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x44u);
    if (r31 != 0xffffffffu) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80218678u, &a);
        r3 = rd32(r3 + 0x3e0u);
        r3 = r3 + ((r31 << 4u) & 0xfffffff0u);
        r3 = rd32(r3 + 0xcu);
    } else {
        r3 = 0xffffffffu;
    }
    return r3;
}
