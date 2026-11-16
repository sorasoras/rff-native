#include "tc_rt.h"

u32 fn_801be41c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(rd32(0x80571398u) + 0x1c0u, rd32(rd32((u32)param_1 + 0x1cu) + 0x430u));
    r3 = rd32((u32)param_1 + 0x28u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801bf570u, &a);
        r0 = rd32(0x80571144u);
        if ((s32)r0 >= 0 && (s32)r0 < 70) {
            if (rd32(rd32((u32)param_1 + 0x28u) + 0x98u) == 0u) {
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xbd0u;
                a.r[1] = 0x18u;
                (void)tc_call(0x8020f18cu, &a);
            } else {
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xbd0u;
                a.r[1] = 0x17u;
                (void)tc_call(0x8020f18cu, &a);
            }
        }
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801be300u, &a);
        r3 = 1u;
    }
    return r3;
}
