#include "tc_rt.h"

u32 fn_8017c730(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_3;
    r3 = tc_call(0x8017c6d4u, &a);
    r31 = r3;
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = param_3;
        (void)tc_call(0x8017e7ccu, &a);
        wr32(r31 + 0x8cu, param_4);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        (void)tc_call(0x8017d20cu, &a);
        r3 = 1u;
        wr32((u32)param_1 + 0x8cu, rd32((u32)param_1 + 0x8cu) + 1u);
    }
    return r3;
}
