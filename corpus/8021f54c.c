#include "tc_rt.h"

void fn_8021f54c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x48cu;
    (void)tc_call(0x80220590u, &a);
    return;
}
