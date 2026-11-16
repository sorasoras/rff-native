#include "tc_rt.h"

void fn_80074bc0(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x8046adc4u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r30 = rd32(r3 + 8u);
        if (rd32(r30 + 0x84u) == 0u && rd32(r30 + 0x9cu) == (u32)param_1) {
            a.r[0] = r30;
            f1 = tc_callf(0x800d6150u, &a);
            a.r[0] = r30;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r30) + 0x18u), &a);
        }
    }
    return;
}
