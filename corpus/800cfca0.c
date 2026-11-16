#include "tc_rt.h"

u32 fn_800cfca0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800cf998u, &a);
    wr32(param_1 + 4u, 0u);
    wr32(param_1, 0x80355ad8u);
    return param_1;
}
