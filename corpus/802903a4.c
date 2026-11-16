#include "tc_rt.h"

void fn_802903a4(void)
{
    TcArgs a = {0};
    a.r[0] = 4u;
    a.r[1] = 0x8053d689u;
    a.r[2] = 0u;
    (void)tc_call(0x80298b30u, &a);
    return;
}
