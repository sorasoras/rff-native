#include "tc_rt.h"

void fn_8018364c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804d9028u;
    (void)tc_call(0x801831b8u, &a);
    return;
}
