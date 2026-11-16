#include "tc_rt.h"

void fn_80163f60(u32 param_1)
{
    TcArgs a = {0};
    if (rd32(param_1) != 0u && rd32(param_1 + 8u) != 0u) {
        a.r[0] = rd32(param_1 + 4u);
        (void)tc_call(0x800fe8d4u, &a);
        a.r[0] = rd32(param_1 + 4u);
        (void)tc_call(0x800fe6f8u, &a);
        a.r[0] = param_1;
        a.r[1] = rd32(param_1);
        (void)tc_call(0x80163fbcu, &a);
    }
    return;
}
