#include "tc_rt.h"

void fn_8012f5c0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80130c6cu, &a);
    a.r[0] = 0x80571250u;
    (void)tc_call(0x80103074u, &a);
    a.r[0] = 0x804b9d30u;
    (void)tc_call(0x80100404u, &a);
    return;
}
