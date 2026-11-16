#include "tc_rt.h"

s32 fn_8019800c(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0xd0u, 0x80370aa8u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8016172cu, &a);
    wr32((u32)param_1 + 0xd4u, 0u);
    wr32((u32)param_1 + 0xd8u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80161ac4u, &a);
    wr8((u32)param_1 + 0xbeu, 0u);
    wr16((u32)param_1 + 0xbcu, 0x2e8u);
    wr8((u32)param_1 + 0xbfu, 0u);
    return param_1;
}
