#include "tc_rt.h"

void fn_8020cb08(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x8020bf8cu, &a);
    a.r[0] = (u32)param_1 + 0x148u;
    (void)tc_call(0x8020c6ccu, &a);
    return;
}
