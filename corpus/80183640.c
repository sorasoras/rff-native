#include "tc_rt.h"

void fn_80183640(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804d9028u;
    (void)tc_call(0x80183118u, &a);
    return;
}
