#include "tc_rt.h"

u32 fn_80070854(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80070a70u, &a);
    wr32(param_1, 0x80350238u);
    wr32(param_1 + 0x74u, 0x2e8u);
    wr8(param_1 + 0x78u, 1u);
    wr8(param_1 + 0x79u, 1u);
    return param_1;
}
