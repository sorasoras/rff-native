#include "tc_rt.h"

s32 fn_801f308c(s32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x3c4u;
    a.r[1] = 0x801f3110u;
    a.r[2] = 0x801f3130u;
    a.r[3] = 0xcu;
    a.r[4] = 0xf0u;
    (void)tc_call(0x80255624u, &a);
    wr32((u32)param_1 + 0xf08u, 0u);
    r5 = (u32)param_1 + 0xf08u;
    wr32((u32)param_1 + 0xf0cu, 0u);
    wr32((u32)param_1 + 0xf04u, 0u);
    wr32((u32)param_1 + 0xf08u, r5);
    wr32((u32)param_1 + 0xf0cu, r5);
    wr32((u32)param_1 + 0xfd0u, 0u);
    wr32((u32)param_1 + 0xfd4u, 0u);
    wr32((u32)param_1 + 0xfe4u, 0u);
    wr32((u32)param_1 + 0xfe8u, 0u);
    wr32((u32)param_1 + 0xfb4u, 0xffffffffu);
    wr32((u32)param_1 + 0xfb8u, 0xffffffffu);
    return param_1;
}
