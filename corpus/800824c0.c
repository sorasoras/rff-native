#include "tc_rt.h"

u32 fn_800824c0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80082494u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if ((u32)rd16(r3) == 0x2e8u) {
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            a.r[2] = 4u;
            (void)tc_call(0x80004338u, &a);
        } else {
            wr8(r3 + 2u, (u8)((u32)rd8(r3 + 2u) + (u32)rd8((u32)param_1 + 2u)));
        }
        r3 = 1u;
    }
    return r3;
}
