#include "tc_rt.h"

u32 fn_802c102c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    if ((s32)r0 >= 4) {
        r3 = 0xfffffffeu;
    } else {
        a.r[0] = rd32(param_1 + 0x20u);
        a.r[1] = r0;
        r3 = tc_call(0x802c197cu, &a);
        if (r3 != 0u || (u32)rd8(param_1 + 0x1cu) != 0u) {
            r3 = 0xfffffffeu;
        } else {
            a.r[0] = rd32(param_1);
            a.r[1] = param_2;
            a.r[2] = 0x802c10b0u;
            r3 = tc_call(0x8027a488u, &a);
        }
    }
    return r3;
}
