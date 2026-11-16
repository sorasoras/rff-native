#include "tc_rt.h"

u32 fn_8030b3c8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    while ((u32)rd8((u32)param_1 + 0x31cu) == 0u) {
        r3 = tc_call(0x8030abd4u, &a);
        a.r[0] = r3;
        (void)tc_call(0x8030b19cu, &a);
        if ((u32)rd8((u32)param_1 + 0x31cu) != 0u) {
            return 0u;
        }
        r3 = tc_call(0x8030abd4u, &a);
        a.r[0] = r3;
        (void)tc_call(0x8030b030u, &a);
    }
    return 0u;
}
