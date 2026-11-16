#include "tc_rt.h"

void fn_8006e668(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x210u;
    (void)tc_call(0x800dc5acu, &a);
    return;
}
