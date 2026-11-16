#include "tc_rt.h"

void fn_8012ef80(s32 param_1)
{
    u32 c0eq = 0, r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 8u);
    c0eq = r0 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = r0;
            a.r[1] = 1u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r0 + 0x64u) + 8u), &a);
        }
        wr32((u32)param_1 + 8u, 0u);
    }
    return;
}
