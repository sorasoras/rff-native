#include "tc_rt.h"

void fn_8015b950(f64 param_1, s32 param_2, s32 param_3)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_2;
    r30 = (u32)param_2 + 0x6acu;
    r29 = 0u;
    do {
        if ((u32)param_3 == rd32(r31 + 0x6b4u)) {
            a.f[0] = param_1;
            a.r[0] = r30;
            (void)tc_call(0x80159418u, &a);
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x3cu;
        r31 = r31 + 0x3cu;
    } while ((s32)r29 < 4);
    return;
}
