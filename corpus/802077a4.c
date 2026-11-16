#include "tc_rt.h"

u32 fn_802077a4(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    if ((u32)param_2 != 1u) {
        return 1u;
    }
    a.r[0] = 0x4cu;
    (void)tc_call(0x8014d9a4u, &a);
    return 1u;
}
