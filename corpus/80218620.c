#include "tc_rt.h"

s32 fn_80218620(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7488u, &a);
    return (s32)r3;
}
