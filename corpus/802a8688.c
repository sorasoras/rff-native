#include "tc_rt.h"

void fn_802a8688(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1 + (u32)rd16((u32)param_1 + 4u);
    r0 = (u32)rd8(r3 + 9u);
    r3 = (u32)rd8(r3 + 8u);
    r0 = (r0 << 8u) & 0xffffff00u;
    r0 = r3 + r0;
    r31 = r0 & 0xfffu;
    a.r[0] = r31;
    r3 = tc_call(0x802a9a34u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80540a20u) >= 2u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80001u;
            a.r[1] = 0x803967b0u;
            a.r[2] = r31;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc6cu, &a);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8028a35cu, &a);
    } else {
        if (rd32(r3 + 4u) == 4u) {
            wr16((u32)param_1 + 6u, 0u);
            r3 = r3 + 0x44u;
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            f1 = tc_callf(0x8028a8b8u, &a);
            wr8(r30 + 0x40u, 0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802a7e04u, &a);
        } else {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8028a35cu, &a);
        }
    }
    return;
}
