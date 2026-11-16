#include "tc_rt.h"

s32 fn_800498e8(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)rd8(0x803c6243u);
    r31 = rd32((u32)param_1 + 0x18u);
    wr8(0x803c6243u, (u8)(r30 + 1u));
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x80252494u, &a);
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = param_4;
    (void)tc_call(0x8004b464u, &a);
    if (r31 != 0u) {
        a.r[0] = r31;
        r3 = tc_call(0x80049814u, &a);
        a.r[0] = (u32)param_1 + 0x20u;
        a.r[1] = r3;
        (void)tc_call(0x802524a8u, &a);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r30;
    (void)tc_call(0x80252720u, &a);
    return (s32)r30;
}
