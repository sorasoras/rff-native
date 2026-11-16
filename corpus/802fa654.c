#include "tc_rt.h"

u32 fn_802fa654(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x40u;
    r3 = tc_call(0x80247ef8u, &a);
    r3 = (r3 + 0x87u) & 0xffffffe0u;
    return r3;
}
