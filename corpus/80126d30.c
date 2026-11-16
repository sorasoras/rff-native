#include "tc_rt.h"

void fn_80126d30(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xb9cu;
    a.r[1] = 0u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xc0cu;
    a.r[1] = 0xau;
    (void)tc_call(0x8020f18cu, &a);
    return;
}
