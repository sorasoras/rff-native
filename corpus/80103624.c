#include "tc_rt.h"

void fn_80103624(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80571250u;
    (void)tc_call(0x80103008u, &a);
    a.r[0] = 0x80571258u;
    (void)tc_call(0x80103008u, &a);
    return;
}
