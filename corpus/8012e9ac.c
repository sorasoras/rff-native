#include "tc_rt.h"

void fn_8012e9ac(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x7f4u;
    a.r[1] = 0xeu;
    (void)tc_call(0x8020f18cu, &a);
    return;
}
