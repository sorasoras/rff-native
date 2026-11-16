#include "tc_rt.h"

u32 fn_800a2708(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097e5cu, &a);
    return r3;
}
