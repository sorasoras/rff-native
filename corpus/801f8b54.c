#include "tc_rt.h"

void fn_801f8b54(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x80492800u;
    a.r[1] = param_1;
    (void)tc_call(0x80083598u, &a);
    a.r[0] = 0x8049df80u;
    a.r[1] = param_1;
    (void)tc_call(0x800c951cu, &a);
    return;
}
