#include "tc_rt.h"

void fn_8027529c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x205u;
    a.r[2] = 0x1du;
    (void)tc_call(0x802744d4u, &a);
    return;
}
