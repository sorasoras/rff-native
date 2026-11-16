#include "tc_rt.h"

void fn_8025ec64(void)
{
    TcArgs a = {0};
    a.r[0] = 1u;
    (void)tc_call(0x8025bc84u, &a);
    wr32(0x805719d0u, 1u);
    (void)tc_call(0x802336f4u, &a);
    return;
}
