#include "tc_rt.h"

void fn_8013419c(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    wr16((u32)param_2 + 0x18u, 0x2e8u);
    wr8((u32)param_2 + 0x1au, 1u);
    wr8((u32)param_2 + 0x1bu, 1u);
    wr16((u32)param_2 + 0x1cu, 0x2e8u);
    wr8((u32)param_2 + 0x1eu, 1u);
    wr8((u32)param_2 + 0x1fu, 1u);
    wr32((u32)param_2 + 0x20u, 0u);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x1cu;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
