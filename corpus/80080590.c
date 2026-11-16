#include "tc_rt.h"

void fn_80080590(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80080d8cu;
    (void)tc_call(0x8023d914u, &a);
    return;
}
