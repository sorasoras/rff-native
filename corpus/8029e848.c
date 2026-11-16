#include "tc_rt.h"

void fn_8029e848(void)
{
    TcArgs a = {0};
    a.r[0] = 0x8053d430u;
    a.r[1] = 0u;
    a.r[2] = 0x84u;
    (void)tc_call(0x8000443cu, &a);
    wr16(0x8053d4aeu, 0x2a4u);
    wr16(0x8053d4b0u, 1u);
    return;
}
