#include "tc_rt.h"

u32 fn_801eb858(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = rd32(param_1) + 0xcdu;
    a.r[2] = 0u;
    (void)tc_call(0x801006a4u, &a);
    return 1u;
}
