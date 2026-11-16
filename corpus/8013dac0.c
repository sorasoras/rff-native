#include "tc_rt.h"

void fn_8013dac0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0x33u) {
        return;
    }
    if ((u32)param_2 != 0u) {
        r3 = rd32((u32)param_2 + 0x74u);
        if ((s32)r3 >= 0 && (s32)r3 < 744) {
            a.r[0] = r3;
            a.r[1] = 1u;
            (void)tc_call(0x800a796cu, &a);
            a.r[0] = rd32((u32)param_2 + 0x80u);
            a.r[1] = 2u;
            f1 = tc_callf(0x800a796cu, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0u;
            a.r[1] = 0x33u;
            a.r[2] = 0x8013da54u;
            a.r[3] = 2u;
            a.r[4] = rd32((u32)param_2 + 0x74u);
            a.r[5] = rd32((u32)param_2 + 0x80u);
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x800a7228u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 2u;
            a.r[1] = 0x33u;
            a.r[2] = 0x8013da54u;
            a.r[3] = 2u;
            a.r[4] = rd32((u32)param_2 + 0x74u);
            a.r[5] = rd32((u32)param_2 + 0x80u);
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x800a7228u, &a);
        }
    }
    return;
}
