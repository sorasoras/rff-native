#include "tc_rt.h"

u32 fn_8003ee38(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8004ca70u, &a);
    a.r[0] = 0x803be640u;
    a.r[1] = r3;
    a.r[2] = 0x803be6d0u;
    (void)tc_call(0x802337a0u, &a);
    return 0x803be6d0u;
}
