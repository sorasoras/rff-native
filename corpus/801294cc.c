#include "tc_rt.h"

void fn_801294cc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x5f0u;
    (void)tc_call(0x800f8388u, &a);
    a.r[0] = 0x80571250u;
    (void)tc_call(0x80103074u, &a);
    a.r[0] = 0x804b9d30u;
    (void)tc_call(0x80100404u, &a);
    return;
}
