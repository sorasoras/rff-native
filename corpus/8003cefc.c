#include "tc_rt.h"

u32 fn_8003cefc(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802750ccu, &a);
    r3 = r3 & 0xffu;
    return r3;
}
