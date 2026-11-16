#include "tc_rt.h"

void fn_80041250(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80045d80u, &a);
    (void)tc_call(0x800419d0u, &a);
    return;
}
