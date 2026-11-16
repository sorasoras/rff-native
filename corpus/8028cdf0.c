#include "tc_rt.h"

void fn_8028cdf0(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x80571b74u, param_1);
    a.r[0] = 0x8053d400u;
    (void)tc_call(0x80226a70u, &a);
    (void)tc_call(0x8028cb38u, &a);
    (void)tc_call(0x8028b620u, &a);
    return;
}
