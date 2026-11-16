#include "tc_rt.h"

void fn_801c7dd8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x124u) == 6u) {
        a.r[0] = (u32)param_1;
        f1 = tc_callf(0x801c82b0u, &a);
        r4 = tc_lastr4();
        r31 = rd32(0x80571148u);
        if (r31 != 0u) {
            a.r[0] = r31;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r31) + 0xcu), &a);
            if (r3 == 3u) {
                a.r[0] = r31;
                a.r[1] = rd32((u32)param_1 + 0x12cu);
                (void)tc_call(0x801b269cu, &a);
            }
        }
    }
    return;
}
