#include "tc_rt.h"

void fn_8028e8b4(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x1cu;
    r3 = tc_call(0x8028a0d4u, &a);
    wr32(0x8053d5ecu, r3);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = 0x1cu;
    (void)tc_call(0x80004338u, &a);
    return;
}
