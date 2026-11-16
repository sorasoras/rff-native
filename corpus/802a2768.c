#include "tc_rt.h"

void fn_802a2768(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80540540u;
    a.r[1] = 0x80540526u;
    a.r[2] = 0xau;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = 0x80540526u;
    (void)tc_call(0x802a2438u, &a);
    wr8(0x8054053fu, 1u);
    return;
}
