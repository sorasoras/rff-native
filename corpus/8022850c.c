#include "tc_rt.h"

void fn_8022850c(void)
{
    TcArgs a = {0};
    a.r[0] = 7u;
    a.r[1] = 0x80228488u;
    (void)tc_call(0x80226494u, &a);
    wr32(0x800000d8u, 0u);
    (void)tc_call(0x80225264u, &a);
    return;
}
