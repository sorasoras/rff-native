#include "tc_rt.h"

void fn_8005ad9c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80486da8u;
    (void)tc_call(0x800b8524u, &a);
    return;
}
