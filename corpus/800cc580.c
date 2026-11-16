#include "tc_rt.h"

void fn_800cc580(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x80570758u;
    (void)tc_call(0x800cc540u, &a);
    return;
}
