#include "tc_rt.h"

void fn_8029b888(u32 param_1)
{
    TcArgs a = {0};
    wr8(0x8053f2d0u, (u8)param_1);
    a.r[0] = 0x8053f2acu;
    a.r[1] = 0xffu;
    a.r[2] = 6u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
