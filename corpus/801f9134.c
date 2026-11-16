#include "tc_rt.h"

u32 fn_801f9134(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x80376d58u);
    a.r[0] = param_1 + 0xcu;
    a.r[1] = 0x801f8b9cu;
    a.r[2] = 0x801f8bd4u;
    a.r[3] = 0x18u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    return param_1;
}
