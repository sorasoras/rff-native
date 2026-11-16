#include "tc_rt.h"

u32 fn_80173e78(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(rd32((u32)param_1 + 0x44u) + 0x128u) != 0u) {
        return 0u;
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800f42f4u, &a);
    return r3;
}
