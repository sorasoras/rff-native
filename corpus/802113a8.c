#include "tc_rt.h"

u32 fn_802113a8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8007021cu, &a);
    wr32(param_1, 0x80378698u);
    a.r[0] = param_1 + 0xacu;
    (void)tc_call(0x80051438u, &a);
    wr32(param_1 + 0xf4u, 0u);
    return param_1;
}
