#include "tc_rt.h"

void fn_802415c4(void)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x80571768u, 3u);
    wr8(0x817fdff8u, 1u);
    wr8(0x817fdff9u, 3u);
    a.r[0] = 0xe0u;
    a.r[1] = 0x817fdff8u;
    a.r[2] = 2u;
    (void)tc_call(0x8023fda4u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8023f958u, &a);
    return;
}
