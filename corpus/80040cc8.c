#include "tc_rt.h"

void fn_80040cc8(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80040ca4u, &a);
    return;
}
