#include "tc_rt.h"

u32 fn_801861dc(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x120u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80186630u, &a);
    a.r[0] = (u32)param_1 + 0x208u;
    (void)tc_call(0x80147160u, &a);
    return 1u;
}
