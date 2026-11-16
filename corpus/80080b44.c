#include "tc_rt.h"

void fn_80080b44(void)
{
    TcArgs a = {0};
    (void)tc_call(0x800af070u, &a);
    (void)tc_call(0x800f2978u, &a);
    (void)tc_call(0x801bfe00u, &a);
    a.r[0] = 0xbu;
    (void)tc_call(0x80141274u, &a);
    return;
}
