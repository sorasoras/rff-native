#include "tc_rt.h"

void fn_802c26c4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802c2b14u, &a);
    a.r[0] = r3;
    (void)tc_call(0x802c5dd8u, &a);
    return;
}
