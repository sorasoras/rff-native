#include "tc_rt.h"

u32 fn_80176e00(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80176d44u, &a);
    wr32(param_1, 0x8036edc0u);
    wr32(param_1 + 0x140u, 0x2010u);
    wr32(param_1 + 0x77cu, 0x108eu);
    return param_1;
}
