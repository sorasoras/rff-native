#include "tc_rt.h"

void fn_80188880(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x110u;
    f1 = tc_callf(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x10cu) + 0xcu), &a);
    if (rd32((u32)param_1 + 0x3d4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x2c8u;
        (void)tc_call(0x80163f60u, &a);
        a.r[0] = (u32)param_1 + 0x110u;
        (void)tc_call(0x80161594u, &a);
        a.r[0] = (u32)param_1 + 0x2d4u;
        (void)tc_call(0x801e64d0u, &a);
        a.r[0] = (u32)param_1 + 0x348u;
        (void)tc_call(0x801e64d0u, &a);
        a.r[0] = rd32((u32)param_1 + 0x3ccu);
        (void)tc_call(0x800fe9bcu, &a);
        a.r[0] = rd32((u32)param_1 + 0x3d0u);
        (void)tc_call(0x800fe9bcu, &a);
    }
    return;
}
