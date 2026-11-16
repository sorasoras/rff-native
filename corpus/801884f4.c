#include "tc_rt.h"

s32 fn_801884f4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 1u;
    a.r[3] = 1u;
    (void)tc_call(0x801970c0u, &a);
    wr32((u32)param_1 + 0x28u, 0x8036f608u);
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x8016172cu, &a);
    a.r[0] = (u32)param_1 + 0x110u;
    (void)tc_call(0x80161490u, &a);
    a.r[0] = (u32)param_1 + 0x278u;
    (void)tc_call(0x801f0da4u, &a);
    a.r[0] = (u32)param_1 + 0x2c8u;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x2d4u;
    a.r[1] = 0x801e6108u;
    a.r[2] = 0x801e6158u;
    a.r[3] = 0x74u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    wr32((u32)param_1 + 0x3e4u, 0u);
    return param_1;
}
