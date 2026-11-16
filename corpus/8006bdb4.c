#include "tc_rt.h"

void fn_8006bdb4(s32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    (void)param_4;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8006e5d4u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        if ((u32)param_5 == 1u) {
            if (rd32(param_3 + 0xb8u) != 2u) {
                return;
            }
            a.r[0] = param_3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_3) + 0xecu), &a);
            r3 = r3 & 0xffu;
            a.r[0] = r3;
            r3 = tc_call(0x800817f4u, &a);
            r3 = r3 & 0xffffu;
            a.r[0] = r3;
            a.r[1] = 1u;
            (void)tc_call(0x800818ccu, &a);
        } else {
            if (((u32)param_5 == 0u && param_3 != 0u) && rd32(param_3 + 0xb8u) == 2u) {
                wr32((u32)param_1 + 0xa80u, param_3);
            }
        }
    }
    return;
}
