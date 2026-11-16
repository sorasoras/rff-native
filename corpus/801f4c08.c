#include "tc_rt.h"

void fn_801f4c08(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804de14cu;
    (void)tc_call(0x801f308cu, &a);
    a.r[0] = 0x804de14cu;
    a.r[1] = 0x801f4c50u;
    a.r[2] = 0x804de140u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
