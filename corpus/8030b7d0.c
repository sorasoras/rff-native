#include "tc_rt.h"

void fn_8030b7d0(s32 param_1)
{
    u32 r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x9cu) != 0u && (u32)rd8((u32)param_1 + 0x9eu) != 0u) {
        r3 = rd32((u32)param_1 + 0xcu);
        r31 = 0u;
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x802f1d20u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                r31 = 1u;
            }
        }
        if (r31 != 0u) {
            r12 = rd32((u32)param_1 + 0x94u);
            if (r12 != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                a.r[2] = rd32((u32)param_1 + 0x98u);
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
            wr8((u32)param_1 + 0x9eu, 0u);
            wr8((u32)param_1 + 0x9du, 0u);
        }
    }
    return;
}
