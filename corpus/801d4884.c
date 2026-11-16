#include "tc_rt.h"

void fn_801d4884(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x12cu), &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x130u), &a);
    r0 = (u32)ppc_divw((s32)(r31 * 0x64u), (s32)r3);
    if ((s32)r0 > 50) {
        if (rd32(param_1 + 0xd74u) == 0u) {
            return;
        }
        a.r[0] = param_1;
        (void)tc_call(0x801d4530u, &a);
    } else {
        if ((s32)r0 > 25) {
            if (rd32(param_1 + 0xd74u) == 1u) {
                return;
            }
            a.r[0] = param_1;
            (void)tc_call(0x801d45e4u, &a);
        } else {
            if (rd32(param_1 + 0xd74u) != 2u) {
                a.r[0] = param_1;
                (void)tc_call(0x801d46b4u, &a);
            }
        }
    }
    return;
}
