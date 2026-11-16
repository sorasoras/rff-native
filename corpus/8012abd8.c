#include "tc_rt.h"

void fn_8012abd8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = 0x80339f7eu;
    (void)tc_call(0x801f1058u, &a);
    return;
}
