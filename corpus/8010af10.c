#include "tc_rt.h"

s32 fn_8010af10(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r0 = (u32)param_1 + 0x1ecu;
        if (r0 != 0u) {
            wr32((u32)param_1 + 0x1ecu, 0x8039d150u);
            a.r[0] = r0;
            a.r[1] = 0x8039d150u;
            a.f[0] = 0.0;
            f1 = tc_callf(rd32(rd32(r0) + 0x10u), &a);
            a.r[0] = (u32)param_1 + 0x1ecu;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32((u32)param_1 + 0x1ecu) + 0x20u), &a);
        }
        r3 = (u32)param_1 + 0x168u;
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x168u, 0x8039d178u);
            a.r[0] = r3;
            a.r[1] = 0x8039d178u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
            a.r[0] = (u32)param_1 + 0x168u;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32((u32)param_1 + 0x168u) + 0x20u), &a);
        }
        r3 = (u32)param_1 + 0x40u;
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x40u, 0x8039d1a0u);
            a.r[0] = r3;
            a.r[1] = 0x8039d1a0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
            a.r[0] = (u32)param_1 + 0x40u;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            (void)tc_call(rd32(rd32((u32)param_1 + 0x40u) + 0x20u), &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
