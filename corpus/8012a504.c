#include "tc_rt.h"

s32 fn_8012a504(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x40u, 0x8036045cu);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x800f82d0u, &a);
    wr32((u32)param_1 + 0x40u, 0x803634a8u);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x800f82d0u, &a);
    a.r[0] = (u32)param_1 + 0x88u;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x94u;
    (void)tc_call(0x801f0da4u, &a);
    a.r[0] = (u32)param_1 + 0xe4u;
    a.r[1] = 0x801e6108u;
    a.r[2] = 0x801e6158u;
    a.r[3] = 0x74u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x1ccu;
    a.r[1] = 0x8020eeecu;
    a.r[2] = 0x8020ef0cu;
    a.r[3] = 0x38u;
    a.r[4] = 6u;
    (void)tc_call(0x80255624u, &a);
    return param_1;
}
