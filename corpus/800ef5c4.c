#include "tc_rt.h"

void fn_800ef5c4(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x803d29f8u;
    a.r[1] = rd32((u32)param_1 + 4u);
    a.r[2] = rd32((u32)param_1 + 8u);
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x800975d0u, &a);
    if (rd32((u32)param_2 + 0xb8u) == 1u) {
        r31 = rd32((u32)param_2 + 0x25cu);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = r31;
        r3 = tc_call(0x800ef65cu, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            a.r[1] = r31;
            a.r[2] = 1u;
            (void)tc_call(0x800ef88cu, &a);
            a.r[0] = (u32)param_2;
            a.r[1] = rd32((u32)param_1 + 0x1cu);
            a.r[2] = (u32)rd8((u32)param_1 + 0x20u);
            a.r[3] = (u32)rd8((u32)param_1 + 0x21u);
            (void)tc_call(0x80094864u, &a);
        }
    }
    return;
}
