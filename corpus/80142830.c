#include "tc_rt.h"

void fn_80142830(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804beba0u;
    (void)tc_call(0x801430acu, &a);
    a.r[0] = 0x804beb38u;
    (void)tc_call(0x80142234u, &a);
    return;
}
