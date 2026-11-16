#include "tc_rt.h"

void fn_8028d5cc(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x8053d4b8u;
    a.r[1] = 0u;
    a.r[2] = 0x8cu;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x8053d520u;
    a.r[1] = 0x3e8u;
    a.r[2] = (u32)rd8(rd32(0x80570e08u) + 3u);
    (void)tc_call(0x8028d810u, &a);
    r3 = tc_call(0x8028b77cu, &a);
    wr8(0x8053d535u, (u8)r3);
    wr8(0x80571b80u, rd8(rd32(0x80570e08u) + 4u));
    return;
}
