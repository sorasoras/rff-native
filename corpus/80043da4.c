#include "tc_rt.h"

void fn_80043da4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804b9da0u;
    (void)tc_call(0x8010b300u, &a);
    (void)tc_call(0x8004f224u, &a);
    (void)tc_call(0x80045674u, &a);
    (void)tc_call(0x80043bb4u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8023f300u, &a);
    (void)tc_call(0x8023f180u, &a);
    (void)tc_call(0x8023e1c8u, &a);
    return;
}
