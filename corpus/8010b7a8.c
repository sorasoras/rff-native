#include "tc_rt.h"

void fn_8010b7a8(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804b9da0u;
    (void)tc_call(0x8010a964u, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x8010b7f0u;
    a.r[2] = 0x804b9d80u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
