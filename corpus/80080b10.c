#include "tc_rt.h"

void fn_80080b10(void)
{
    TcArgs a = {0};
    (void)tc_call(0x8008059cu, &a);
    (void)tc_call(0x8006e308u, &a);
    (void)tc_call(0x800f292cu, &a);
    (void)tc_call(0x800af068u, &a);
    (void)tc_call(0x801bfac0u, &a);
    (void)tc_call(0x801413a8u, &a);
    return;
}
