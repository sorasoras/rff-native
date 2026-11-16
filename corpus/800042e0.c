#include "tc_rt.h"

void fn_800042e0(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802265acu, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x802252b4u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x80227b94u, &a);
    f1 = tc_lastf();
    return;
}
