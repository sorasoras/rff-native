#include "tc_rt.h"

void fn_801c2f90(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    if (rd32(0x80571130u) == 0u) {
        a.r[0] = (u32)param_1 + 0xcfcu;
        a.r[1] = param_2;
        (void)tc_call(0x801c36ecu, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x8007e6d4u, &a);
    return;
}
