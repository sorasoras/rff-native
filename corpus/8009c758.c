#include "tc_rt.h"

s32 fn_8009c758(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r29 = (u32)param_3;
    r6 = rd32(param_1 + 0x10u);
    r4 = ((param_2 << 2u) & 0xfffcu) + r6;
    a.r[0] = r4 + 2u;
    a.r[1] = r4;
    a.r[2] = (u32)param_3;
    a.r[3] = r6;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1)), &a);
    f1 = tc_lastf();
    r30 = r3 & 0xffffu;
    if ((u32)param_3 != 0u) {
        while (r29 != 0u) {
            r4 = rd32(param_1 + 0x10u);
            a.r[0] = r4 + ((r30 + r31) & 0xffffu);
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1)), &a);
            f1 = tc_lastf();
            r31 = r31 + 4u;
            r31 = r31 + (((r3 << 2u) & 0x3fffcu) + (r3 & 0xffffu));
            r29 = r29 - 1u;
        }
    }
    return (s32)(r31 + r30);
}
