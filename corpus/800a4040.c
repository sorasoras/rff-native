#include "tc_rt.h"

void fn_800a4040(void)
{
    TcArgs a = {0};
    a.r[0] = 4u;
    (void)tc_call(0x80118c38u, &a);
    return;
}
