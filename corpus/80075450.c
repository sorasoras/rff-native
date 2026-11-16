#include "tc_rt.h"

void fn_80075450(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    while (rd32(0x8046adccu) > 0x32u) {
        r4 = rd32(0x8046adc4u);
        while (r4 != 0u) {
            r3 = r4;
            r4 = rd32(r4);
            r29 = rd32(r3 + 8u);
            if (rd32(r29 + 0x84u) == 0u && rd32(r29 + 0x98u) != 0u) {
                a.r[0] = r29;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r29) + 0x18u), &a);
                if (r29 == 0u) break;
                a.r[0] = r29;
                a.r[1] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r29) + 8u), &a);
                break;
            }
        }
    }
    a.r[0] = 0x8046adc4u;
    a.r[1] = param_1;
    (void)tc_call(0x8007b03cu, &a);
    return;
}
