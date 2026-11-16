#include "tc_rt.h"

u32 fn_801c19b4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8006f1b4u, &a);
    wr32(param_1, 0x80373190u);
    wr32(param_1 + 0xe4u, 0u);
    wr32(param_1 + 0xf8u, 0xffffffffu);
    return param_1;
}
