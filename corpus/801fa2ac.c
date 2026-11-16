#include "tc_rt.h"

u32 fn_801fa2ac(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = 0u;
    r4 = rd32((u32)param_1 + 0x14u);
    if (r4 == rd32((u32)param_1 + 0x10u)) {
        a.r[0] = r4;
        r3 = tc_call(0x801fdec4u, &a);
        r5 = r3;
    }
    return r5;
}
