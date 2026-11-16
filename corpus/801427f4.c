#include "tc_rt.h"

void fn_801427f4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804beba0u;
    (void)tc_call(0x8014305cu, &a);
    a.r[0] = 0x804beb38u;
    (void)tc_call(0x80142210u, &a);
    a.r[0] = 9u;
    (void)tc_call(0x801428a4u, &a);
    return;
}
