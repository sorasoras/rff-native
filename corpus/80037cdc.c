#include "tc_rt.h"

void fn_80037cdc(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    do {
        a.r[0] = param_1;
        r3 = tc_call(0x80271ce4u, &a);
        a.r[0] = r3;
        r3 = tc_call(0x800379c4u, &a);
    } while (r3 != 0u);
    return;
}
