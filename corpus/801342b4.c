#include "tc_rt.h"

void fn_801342b4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x7c8u;
    a.r[1] = 0u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x838u;
    a.r[1] = 0xau;
    (void)tc_call(0x8020f18cu, &a);
    return;
}
