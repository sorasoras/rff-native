#include "tc_rt.h"

s32 fn_80049874(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x18u);
    r31 = (u32)rd8(0x803c6243u);
    wr8(0x803c6243u, (u8)(r31 + 1u));
    if (r5 != 0u) {
        a.r[0] = r5;
        r3 = tc_call(0x80049814u, &a);
        a.r[0] = (u32)param_1 + 0x20u;
        a.r[1] = r3;
        (void)tc_call(0x802524a8u, &a);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r31;
    (void)tc_call(0x80252720u, &a);
    return (s32)r31;
}
