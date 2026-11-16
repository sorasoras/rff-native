#include "tc_rt.h"

void fn_80142900(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804beb38u;
    (void)tc_call(0x801420a8u, &a);
    wr32(0x804beba0u, 0x804beb38u);
    return;
}
