#include "tc_rt.h"

u32 fn_801dcec4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x801dcf14u;
    a.r[2] = 0x801dd304u;
    a.r[3] = 0x1c4u;
    a.r[4] = 0x80u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801dd3b8u, &a);
    return param_1;
}
