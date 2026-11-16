#include "tc_rt.h"

u32 fn_801621e4(u32 param_1, s32 param_2, u32 param_r5)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2 + 0xbcu;
    a.r[2] = param_r5;
    r3 = tc_call(0x80162258u, &a);
    r31 = r3;
    if ((u32)rd8((u32)param_2 + 0xbeu) == 0u || (u32)rd16((u32)param_2 + 0xbcu) == 0x2e8u) {
        a.r[0] = (u32)param_2;
        (void)tc_call(0x80161ac4u, &a);
        wr16((u32)param_2 + 0xbcu, 0x2e8u);
        wr8((u32)param_2 + 0xbeu, 0u);
        wr8((u32)param_2 + 0xbfu, 0u);
    }
    return r31;
}
