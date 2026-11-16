#include "tc_rt.h"

s32 fn_80100d88(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80100d00u, &a);
    return (s32)((u32)param_1 + 0xcu);
}
