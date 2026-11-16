#include "tc_rt.h"

void fn_80289b40(u32 param_r8)
{
    u32 r12 = 0;
    TcArgs a = {0};
    if (param_r8 == 3u) {
        r12 = rd32(0x8050f7ecu);
        if (r12 == 0u) {
            return;
        }
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[3] = 0x8050f100u;
        a.r[5] = param_r8;
        a.f[0] = 0.0;
        (void)tc_call(r12, &a);
        return;
    }
    (void)tc_call(0x80289ba4u, &a);
    return;
}
