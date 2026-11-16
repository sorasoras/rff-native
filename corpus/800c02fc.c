#include "tc_rt.h"

void fn_800c02fc(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((s32)rd32(param_1 + 0xa08u) < 33) {
        r29 = 0u;
        r30 = 0u;
        do {
            r3 = r30 + (rd32(param_1 + 0xa08u) * 0x58u) - 0x7fb97210u;
            r4 = (u32)(s16)rd16(r3 + 0x38u);
            if (r4 != 0xffffffffu && param_2 == (u32)rd8(r3 + 0x3au)) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0xc0u), &a);
            }
            r29 = r29 + 1u;
            r30 = r30 + 4u;
        } while (r29 < 7u);
    }
    return;
}
