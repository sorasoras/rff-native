#include "tc_rt.h"

u32 fn_80174e44(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801f02a4u, &a);
    wr32((u32)param_1 + 0x148u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801751f4u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x130u);
    r3 = tc_call(0x800dacf8u, &a);
    if (r3 == 1u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801f0368u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801752ccu, &a);
    return 0u;
}
