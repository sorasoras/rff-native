#include "tc_rt.h"

void fn_80082418(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x800815b4u;
    a.r[1] = 0x78u;
    a.r[2] = param_1;
    (void)tc_call(0x800815ccu, &a);
    return;
}
