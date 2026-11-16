#include "tc_rt.h"

u32 fn_80108a1c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = (u32)rd16(0x804990c8u);
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
