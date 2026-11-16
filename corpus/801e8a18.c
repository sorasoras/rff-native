#include "tc_rt.h"

void fn_801e8a18(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804dcb28u;
    (void)tc_call(0x801e8cccu, &a);
    a.r[0] = 0x804dcb28u;
    a.r[1] = 0x801e8a60u;
    a.r[2] = 0x804dcb18u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
