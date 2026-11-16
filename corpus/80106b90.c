#include "tc_rt.h"

u32 fn_80106b90(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    if ((rd32(0x80499094u) & 4u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 4u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r31 = 0u;
        }
    }
    if (r31 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x40u);
        a.r[1] = 4u;
        (void)tc_call(0x801ed110u, &a);
        a.r[0] = rd32((u32)param_1 + 0x40u);
        a.r[1] = (u32)param_1;
        (void)tc_call(0x801ec6bcu, &a);
    }
    return 1u;
}
