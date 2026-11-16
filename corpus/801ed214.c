#include "tc_rt.h"

void fn_801ed214(void)
{
    TcArgs a = {0};
    wr32(0x804de0f8u, 0u);
    wr32(0x804de0fcu, 0u);
    wr32(0x804de0f4u, 0u);
    wr32(0x804de0f8u, 0x804de0f8u);
    wr32(0x804de0fcu, 0x804de0f8u);
    a.r[0] = 0x804de0f4u;
    a.r[1] = 0x801ed24cu;
    a.r[2] = 0x804de0e8u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
