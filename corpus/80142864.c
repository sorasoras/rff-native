#include "tc_rt.h"

void fn_80142864(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804beba0u;
    (void)tc_call(0x80143004u, &a);
    wr32(0x805712c8u, rd32(0x804beba4u));
    return;
}
