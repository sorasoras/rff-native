#include "tc_rt.h"

void fn_80080b74(void)
{
    TcArgs a = {0};
    (void)tc_call(0x800ceb04u, &a);
    (void)tc_call(0x80083020u, &a);
    (void)tc_call(0x800ab388u, &a);
    (void)tc_call(0x800c90a0u, &a);
    (void)tc_call(0x800c83d8u, &a);
    (void)tc_call(0x800c9220u, &a);
    (void)tc_call(0x801eba40u, &a);
    return;
}
