#include "tc_rt.h"

void fn_8007aff0(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    if (param_2 == rd32(param_1)) {
        wr32(param_1, rd32(param_2));
    } else {
        wr32(rd32(param_2 + 4u), rd32(param_2));
    }
    if (param_2 == rd32(param_1 + 4u)) {
        wr32(param_1 + 4u, rd32(param_2 + 4u));
    } else {
        wr32(rd32(param_2) + 4u, rd32(param_2 + 4u));
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x8007afccu, &a);
    return;
}
