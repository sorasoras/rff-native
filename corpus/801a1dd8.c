#include "tc_rt.h"

void fn_801a1dd8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xdc4u;
    r3 = tc_call(0x80255850u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802558bcu, &a);
    }
    (void)tc_call(0x801a39ccu, &a);
    return;
}
