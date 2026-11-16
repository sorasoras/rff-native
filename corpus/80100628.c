#include "tc_rt.h"

void fn_80100628(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    do {
        r4 = rd32(0x8057124cu);
        if (r4 == 0u) {
            wr32(0x80571248u, (u32)param_1);
            wr32(0x8057124cu, (u32)param_1);
            wr32((u32)param_1 + 0x3cu, 0u);
            wr32((u32)param_1 + 0x38u, 0u);
        } else {
            wr32((u32)param_1 + 0x38u, r4);
            wr32((u32)param_1 + 0x3cu, 0u);
            wr32(r4 + 0x3cu, (u32)param_1);
            wr32(0x8057124cu, (u32)param_1);
        }
        r12 = rd32((u32)param_1 + 0x34u);
        r12 = rd32(r12 + 8u);
    } while (r12 == 0x80100628u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = r4;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
