#include "tc_rt.h"

void fn_801239a4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0x1a8u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801972e0u, &a);
    a.r[0] = (u32)param_1 + 0x40u;
    (void)tc_call(0x80161594u, &a);
    a.r[0] = (u32)param_1 + 0x1a8u;
    (void)tc_call(0x80161594u, &a);
    (void)tc_call(0x800f974cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801976e0u, &a);
    return;
}
