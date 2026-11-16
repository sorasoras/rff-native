#include "tc_rt.h"

void fn_801fcaa0(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80052e18u, &a);
    f1 = tc_lastf();
    r31 = r3;
    wr32(rd32((u32)param_1 + 0x1cu) + 0xd4u, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x804de14cu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801f4324u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801f4780u, &a);
    r30 = rd32(r3 + 0x18u);
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x801f8638u, &a);
    r29 = 0u;
    do {
        a.r[0] = r30;
        a.r[1] = (u32)(s8)(r29 + 1u);
        r3 = tc_call(0x8013f5f0u, &a);
        if (r3 != 0u && (u32)rd16(r3) != 0u) {
            a.r[0] = r31;
            a.r[1] = r3;
            (void)tc_call(0x801f880cu, &a);
        }
        r29 = r29 + 1u;
    } while ((s32)r29 < 3);
    a.r[0] = r31;
    a.r[1] = 1u;
    (void)tc_call(0x801f8890u, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    (void)tc_call(0x801f897cu, &a);
    return;
}
