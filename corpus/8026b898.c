#include "tc_rt.h"

void fn_8026b898(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
