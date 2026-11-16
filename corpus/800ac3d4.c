#include "tc_rt.h"

u32 fn_800ac3d4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80081034u, &a);
    r3 = r3 & 0xffu;
    return r3;
}
