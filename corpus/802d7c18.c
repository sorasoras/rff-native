#include "tc_rt.h"

u32 fn_802d7c18(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x802d7f1cu, &a);
    wr32(param_1, 0x8039b188u);
    return param_1;
}
