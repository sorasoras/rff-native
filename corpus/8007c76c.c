#include "tc_rt.h"

void fn_8007c76c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r30 = rd32((u32)param_2 + 0x64u);
    if ((u32)(s16)rd16(r30 + 6u) != 0u) {
        r3 = rd32(r30 + 0x18u);
        if (rd32(r3 + 0x64u) != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8007c5c4u, &a);
            r31 = r3;
            if (r3 != 0u) {
                wr32(r3, (u32)param_2);
                a.r[0] = rd32(r30 + 0x18u);
                a.r[1] = (u32)param_2;
                f1 = tc_callf(0x8007c568u, &a);
                wrf32d(r31 + 4u, f1);
            }
        }
    }
    return;
}
