#include "tc_rt.h"

u32 fn_800f2830(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800412e8u, &a);
    return r3;
}
