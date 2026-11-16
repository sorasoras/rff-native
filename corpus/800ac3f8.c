#include "tc_rt.h"

u32 fn_800ac3f8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80081094u, &a);
    r3 = r3 & 0xffu;
    return r3;
}
