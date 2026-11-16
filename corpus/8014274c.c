#include "tc_rt.h"

void fn_8014274c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804beb38u;
    (void)tc_call(0x801420d4u, &a);
    a.r[0] = 0x804beba0u;
    a.r[1] = 0x804beb38u;
    (void)tc_call(0x8014293cu, &a);
    return;
}
