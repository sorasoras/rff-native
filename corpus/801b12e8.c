#include "tc_rt.h"

void fn_801b12e8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x805706e8u) == 0x36u) {
        r29 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
        while (r29 != 0u) {
            r3 = r29;
            r29 = rd32(r29);
            r3 = rd32(r3 + 8u);
            r0 = rd32(r3 + 0x84u);
            if ((s32)r0 >= 55002 && (s32)r0 <= 55006) {
                a.r[0] = r3;
                a.r[1] = param_1;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x4cu), &a);
            }
        }
    }
    return;
}
