#include "tc_rt.h"

s32 fn_80220f0c(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x40u, 0x8036045cu);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x800f82d0u, &a);
    wr32((u32)param_1 + 0x40u, 0x80378a48u);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x800f82d0u, &a);
    return param_1;
}
