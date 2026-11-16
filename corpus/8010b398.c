#include "tc_rt.h"

void fn_8010b398(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x2290u;
    a.r[1] = param_2;
    (void)tc_call(0x801cad04u, &a);
    a.r[0] = (u32)param_1 + 0x19b8u;
    a.r[1] = param_2;
    (void)tc_call(0x801629d4u, &a);
    a.r[0] = (u32)param_1 + 0x19b8u;
    (void)tc_call(0x80163070u, &a);
    a.r[0] = (u32)param_1 + 0xe0u;
    a.r[1] = 1u;
    (void)tc_call(0x8011fd40u, &a);
    return;
}
