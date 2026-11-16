#include "tc_rt.h"

void fn_8021fef0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x1040u;
    (void)tc_call(0x80220cc8u, &a);
    return;
}
