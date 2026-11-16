#include "tc_rt.h"

void fn_80286fb4(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80289ba4u, &a);
    a.r[0] = 1u;
    a.r[1] = 0xffffffffu;
    a.r[2] = 0u;
    a.r[3] = 1u;
    (void)tc_call(0x80286e68u, &a);
    return;
}
