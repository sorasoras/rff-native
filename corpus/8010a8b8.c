#include "tc_rt.h"

void fn_8010a8b8(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xe0u;
    a.r[1] = param_2;
    r3 = tc_call(0x80120678u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0xe0u;
        a.r[1] = param_2;
        a.r[2] = 0u;
        (void)tc_call(0x801205f0u, &a);
    }
    return;
}
