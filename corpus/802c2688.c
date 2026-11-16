#include "tc_rt.h"

void fn_802c2688(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802c2b14u, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    (void)tc_call(0x802c3f08u, &a);
    r3 = tc_call(0x802c2b14u, &a);
    a.r[0] = r3;
    (void)tc_call(0x802ca420u, &a);
    return;
}
