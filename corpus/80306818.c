#include "tc_rt.h"

void fn_80306818(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80548d30u;
    (void)tc_call(0x8030b25cu, &a);
    a.r[0] = 0x80548d30u;
    a.r[1] = 0x8030b270u;
    a.r[2] = 0x80548d20u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
