#include "tc_rt.h"

void fn_80159d8c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x6acu;
    a.r[1] = 0x3cu;
    a.r[2] = 4u;
    a.r[3] = 0x80159cccu;
    (void)tc_call(0x800a7710u, &a);
    return;
}
