#include "tc_rt.h"

void fn_80194ca4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804d910cu;
    (void)tc_call(0x80194e8cu, &a);
    a.r[0] = 0x804d910cu;
    a.r[1] = 0x80194cecu;
    a.r[2] = 0x804d9100u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
