#include "tc_rt.h"

void fn_80194c20(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804d9048u;
    (void)tc_call(0x80194488u, &a);
    return;
}
