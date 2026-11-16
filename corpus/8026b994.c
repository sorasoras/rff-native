#include "tc_rt.h"

void fn_8026b994(void)
{
    TcArgs a = {0};
    a.r[0] = 0x18000u;
    (void)tc_call(0x8022c640u, &a);
    a.r[0] = 0x40u;
    (void)tc_call(0x8022c640u, &a);
    wr32(0x80571a2cu, 0x8026b8f0u);
    a.r[0] = 0x19u;
    a.r[1] = 0x8026b914u;
    (void)tc_call(0x8022c2fcu, &a);
    a.r[0] = 0x40u;
    (void)tc_call(0x8022c6c0u, &a);
    return;
}
