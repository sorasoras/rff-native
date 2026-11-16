#include "tc_rt.h"

void fn_800b6640(u32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    do {
        wr32(param_1 + 0x1678u, (u32)((s32)rd32(param_1 + 0x9cu) >> 31));
        r12 = rd32(param_1);
        r12 = rd32(r12 + 0x68u);
    } while (r12 == 0x800b6640u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
