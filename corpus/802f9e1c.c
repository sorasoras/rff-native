#include "tc_rt.h"

u32 fn_802f9e1c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = tc_call(0x80248bf8u, &a);
    r3 = (r3 + 0x87u) & 0xffffffe0u;
    return r3;
}
