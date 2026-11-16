#include "tc_rt.h"

void fn_802762ec(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6, u32 param_7, u32 param_8, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r30 = 0;
    TcArgs a = {0};
    r30 = 0u;
    if (rd32(0x80571ac8u) == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = rd32(0x80570da0u);
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = (u32)param_5;
        a.r[5] = param_6;
        a.r[6] = param_7;
        a.r[7] = param_8;
        (void)tc_call(0x80226610u, &a);
        wr32(0x80571ac8u, 1u);
    }
    if (param_6 != 0u) {
        wr32(param_7, rd32(param_6));
    } else {
        wr32(param_7, 0xffffffffu);
    }
    if (param_2 != 0u) {
        wr32(param_3, rd32(param_2));
    } else {
        r30 = 0xfffffffdu;
        wr32(param_3, 0xffffffffu);
    }
    if ((u32)param_5 == 0u) {
        r30 = 0xfffffffdu;
    }
    if (param_1 == 0u) {
        wr32(param_4, 0u);
        wr32(param_3, 0xffffffffu);
    }
    if ((s32)rd32(param_7) < 0) {
        wr32(param_8, 0u);
    }
    if (r30 != 0u) {
        wr32(param_2, 0u);
        wr32(param_6, 0u);
    }
    return;
}
