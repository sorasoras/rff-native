#include "tc_rt.h"

void fn_8026b938(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr32(param_1, 0x80571a30u);
    wr32(0x80571a28u, param_2);
    (void)tc_call(0x8026bf0cu, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
