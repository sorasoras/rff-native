#include "tc_rt.h"

void fn_8020e64c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804df468u;
    a.r[1] = 0x8020e66cu;
    a.r[2] = 0u;
    a.r[3] = 0x28u;
    a.r[4] = 0x23u;
    (void)tc_call(0x80255624u, &a);
    return;
}
