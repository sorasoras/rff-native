#include "tc_rt.h"

u32 fn_801086dc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = (u32)rd8(0x804990aeu);
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
