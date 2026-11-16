#include "tc_rt.h"

void fn_80198ec8(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804dac68u;
    (void)tc_call(0x80199018u, &a);
    a.r[0] = 0x804dac68u;
    a.r[1] = 0x80198f10u;
    a.r[2] = 0x804dac58u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
