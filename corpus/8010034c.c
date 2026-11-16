#include "tc_rt.h"

s32 fn_8010034c(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0x100u;
    r3 = tc_call(0x801b39d8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800ff9b8u, &a);
    }
    if (rd32((u32)param_1 + 0x1cu) == 0u) {
        wr32((u32)param_1 + 0x1cu, r31);
        wr32((u32)param_1 + 0x20u, r31);
        a.r[0] = r31;
        a.r[1] = 0u;
        (void)tc_call(0x800ffac0u, &a);
        a.r[0] = r31;
        a.r[1] = 0u;
        f1 = tc_callf(0x800ffa94u, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x20u);
        a.r[1] = r31;
        f1 = tc_callf(0x800ffa94u, &a);
        wr32((u32)param_1 + 0x20u, r31);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r31;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800ffd08u, &a);
    wr32((u32)param_1 + 0x18u, rd32((u32)param_1 + 0x18u) + 1u);
    return (s32)r31;
}
