#include "tc_rt.h"

u32 fn_80070760(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = (u32)param_4 + 0x14u;
    r3 = tc_call(0x80031be0u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r0 = rd32((u32)param_3 + 0x48u);
        wr32((u32)param_3 + 0x30u, r3);
        if (r0 != 0u) {
            a.r[0] = r0;
            a.r[1] = (u32)param_4 + 0x2cu;
            (void)tc_call(0x800420f4u, &a);
        }
        r3 = rd32((u32)param_3 + 0x4cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = (u32)param_4 + 0x2cu;
            (void)tc_call(0x80041fc4u, &a);
        }
        r3 = 1u;
    }
    return r3;
}
