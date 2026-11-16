#include "tc_rt.h"

void fn_801e89bc(void)
{
    TcArgs a = {0};
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    (void)tc_call(0x801e6900u, &a);
    a.r[0] = 0x804dcb28u;
    (void)tc_call(0x801ea02cu, &a);
    return;
}
