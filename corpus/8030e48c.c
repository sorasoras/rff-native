#include "tc_rt.h"

void fn_8030e48c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r4 = rd32((u32)param_1 + 8u);
    r0 = (u32)param_1 + 8u;
    while (r4 != r0) {
        r6 = r4;
        r4 = rd32(r4);
        if ((u32)rd8(r6 - 0x78u) != 0u) {
            wr8(r6 - 0x72u, (u8)((u32)rd8(r6 - 0x72u) | param_2));
        }
    }
    a.r[0] = r3;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    return;
}
