#include "tc_rt.h"

u32 fn_8014d364(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 1u;
    (void)tc_call(0x8014d2d8u, &a);
    return 1u;
}
