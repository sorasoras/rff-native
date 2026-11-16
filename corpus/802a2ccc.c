#include "tc_rt.h"

void fn_802a2ccc(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80540618u;
    a.r[1] = 0u;
    a.r[2] = 0x404u;
    (void)tc_call(0x8000443cu, &a);
    wr8(0x80540a19u, 0u);
    return;
}
