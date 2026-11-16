#include "tc_rt.h"

void fn_80119fb0(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r6 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x3f0u) == 0u) {
        r6 = 0u;
        if ((u32)param_2 != rd32((u32)param_1 + 0x3ecu) || (u32)param_3 != rd32((u32)param_1 + 0x3e8u)) {
            r6 = 1u;
        }
        wr32((u32)param_1 + 0x3f0u, r6);
        if (r6 == 0u) {
            return;
        }
        a.r[0] = 0x804b9da0u;
        a.r[1] = 1u;
        (void)tc_call(0x8010a75cu, &a);
        return;
    }
    return;
}
