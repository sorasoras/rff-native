#include "tc_rt.h"

u32 fn_801dcb9c(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_1 + 0xa00u;
    r30 = param_1;
    do {
        a.r[0] = r30;
        (void)tc_call(0x801dca1cu, &a);
        r30 = r30 + 0x14u;
    } while (r30 < r31);
    r30 = param_1;
    r31 = 0u;
    do {
        a.r[0] = r30;
        (void)tc_call(0x801dca64u, &a);
        r31 = r31 + 1u;
        r30 = r30 + 0x14u;
    } while ((s32)r31 < 128);
    return param_1;
}
