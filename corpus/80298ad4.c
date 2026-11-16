#include "tc_rt.h"

void fn_80298ad4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x8053d958u;
    a.r[1] = 0u;
    a.r[2] = 0x27c4u;
    (void)tc_call(0x8000443cu, &a);
    wr8(0x80540118u, 0u);
    (void)tc_call(0x80297f88u, &a);
    (void)tc_call(0x80293170u, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8029b888u, &a);
    (void)tc_call(0x802997c4u, &a);
    (void)tc_call(0x80295580u, &a);
    return;
}
