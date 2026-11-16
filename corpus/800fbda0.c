#include "tc_rt.h"

u32 fn_800fbda0(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x30u);
    a.r[1] = 0x803391b6u;
    a.r[2] = 0u;
    r3 = tc_call(0x800fe848u, &a);
    r31 = r3;
    a.r[0] = r3;
    r3 = tc_call(0x800ff744u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r31;
        a.r[1] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800ff574u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x800fb154u, &a);
        a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
        a.r[1] = rd32(rd32(r3 + 0x2cu) + 4u) + 0xbcu;
        (void)tc_call(0x801c1334u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x80221908u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            (void)tc_call(0x800fa860u, &a);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x34u;
            a.r[1] = 4u;
            (void)tc_call(0x800f8544u, &a);
        }
    }
    return 1u;
}
