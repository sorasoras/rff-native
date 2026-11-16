#include "tc_rt.h"

u32 fn_800f3888(s32 param_1, u32 param_2, u32 param_r5)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_r5;
    r3 = tc_call(0x80064d84u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_2;
        r3 = tc_call(0x8007dad4u, &a);
        wr8((u32)param_1 + 0x204u, rd8((rd32(r3 + 4u) * 0x38u) - 0x7fb64fcbu));
        a.r[0] = param_2;
        r3 = tc_call(0x8007dad4u, &a);
        r0 = rd32(r3 + 4u);
        r3 = 1u;
        r0 = r0 * 0x38u;
        r0 = (u32)rd8(r0 - 0x7fb64fcau);
        wr8((u32)param_1 + 0x205u, (u8)r0);
    }
    return r3;
}
