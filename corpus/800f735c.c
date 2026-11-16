#include "tc_rt.h"

void fn_800f735c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    (void)tc_call(0x800f6ea8u, &a);
    return;
}
