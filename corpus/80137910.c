#include "tc_rt.h"

void fn_80137910(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0x1c0u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801379d4u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801972e0u, &a);
    a.r[0] = (u32)param_1 + 0x1b0u;
    (void)tc_call(0x80163f60u, &a);
    a.r[0] = (u32)param_1 + 0x1c0u;
    (void)tc_call(0x80161594u, &a);
    (void)tc_call(0x800f974cu, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x80161594u, &a);
    return;
}
