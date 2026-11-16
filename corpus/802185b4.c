#include "tc_rt.h"

u32 fn_802185b4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = rd32((u32)param_1 + 0x68u);
    r3 = tc_call(0x80074e90u, &a);
    if (r3 != 0u || (u32)rd8((u32)param_1 + 0x8cu) != 0u) {
        r31 = 1u;
    }
    return r31;
}
