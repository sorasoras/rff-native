#include "tc_rt.h"

void fn_802c2510(u32 param_1)
{
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = rd32(0x80398d8cu);
    (void)tc_call(0x8026d490u, &a);
    return;
}
