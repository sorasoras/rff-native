#include "tc_rt.h"

u32 fn_8003cf20(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80275138u, &a);
    r3 = r3 & 0xffu;
    return r3;
}
