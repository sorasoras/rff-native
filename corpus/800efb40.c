#include "tc_rt.h"

void fn_800efb40(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804b8960u;
    a.r[1] = 4u;
    (void)tc_call(0x802de7dcu, &a);
    return;
}
