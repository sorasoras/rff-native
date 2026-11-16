#include "tc_rt.h"

void fn_800410c0(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80041118u, &a);
    if (r3 == 0u) {
        (void)tc_call(0x80046ba0u, &a);
    }
    return;
}
