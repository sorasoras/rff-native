#include "tc_rt.h"

void fn_800a08e8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = (u32)param_1;
    a.r[2] = param_2;
    a.r[3] = param_3;
    r3 = tc_call(0x800a0720u, &a);
    f1 = tc_lastf();
    if ((u32)(s8)r3 != 0u) {
        r4 = rd32(0x817fdff0u);
        if (r4 != 0u) {
            a.r[0] = rd32(0x817fdfecu);
            a.r[1] = r4;
            a.r[2] = (u32)(s8)rd8(0x817fdfe9u);
            a.r[3] = rd32(0x817fdff4u);
            a.r[4] = rd32((u32)param_1 + 0x10u);
            a.f[0] = f1;
            (void)tc_call(rd32((u32)param_1 + 0xcu), &a);
        } else {
            a.r[0] = rd32(0x817fdfecu);
            a.r[1] = 0u;
            a.r[2] = 1u;
            a.r[3] = rd32(0x817fdff4u);
            a.r[4] = rd32((u32)param_1 + 0x10u);
            a.f[0] = f1;
            (void)tc_call(rd32((u32)param_1 + 4u), &a);
        }
    }
    return;
}
