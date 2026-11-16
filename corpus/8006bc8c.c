#include "tc_rt.h"

u32 fn_8006bc8c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x80069188u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r31 = (u32)param_2 * 0xacu;
        wr16(param_3, (u16)rd32((u32)param_1 + r31 + 0x310u));
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x80069188u, &a);
        if (r3 != 0u) {
            r0 = (u32)rd8((u32)param_1 + r31 + 0x315u);
        } else {
            r0 = 0u;
        }
        wr8(param_3 + 2u, (u8)r0);
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x80069188u, &a);
        if (r3 != 0u) {
            r0 = (u32)rd8((u32)param_1 + r31 + 0x314u);
        } else {
            r0 = 0u;
        }
        wr8(param_3 + 3u, (u8)r0);
        r3 = 1u;
    }
    return r3;
}
