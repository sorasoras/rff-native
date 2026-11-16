#include "tc_rt.h"

void fn_800f7f80(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x80338ffau;
    (void)tc_call(0x800f7ed8u, &a);
    return;
}
