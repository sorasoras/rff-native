#include "tc_rt.h"

u32 fn_8026b2d8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0u;
    (void)tc_call(0x80268f94u, &a);
    r3 = tc_call(0x8026af2cu, &a);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80268e0cu, &a);
    (void)tc_call(0x8026af5cu, &a);
    return 0u;
}
