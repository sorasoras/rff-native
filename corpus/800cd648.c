#include "tc_rt.h"

void fn_800cd648(void)
{
    TcArgs a = {0};
    a.r[0] = 0x8049f1b0u;
    (void)tc_call(0x8015e468u, &a);
    a.r[0] = 0x804ab138u;
    (void)tc_call(0x8015f310u, &a);
    a.r[0] = 0x804ac6a4u;
    (void)tc_call(0x8015f434u, &a);
    a.r[0] = 0x804ac83cu;
    (void)tc_call(0x80165420u, &a);
    return;
}
