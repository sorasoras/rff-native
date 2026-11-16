#include "tc_rt.h"

void fn_801004f4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804b9d30u;
    (void)tc_call(0x80100150u, &a);
    a.r[0] = 0x804b9d30u;
    a.r[1] = 0x8010053cu;
    a.r[2] = 0x804b9d20u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
