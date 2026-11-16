#include "tc_rt.h"

void fn_802acc64(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    for (;;) {
        a.r[0] = (u32)param_1 + 0x30u;
        r3 = tc_call(0x8028a9f8u, &a);
        if (r3 == 0u) break;
        a.r[0] = r3;
        (void)tc_call(0x8028a35cu, &a);
    }
    wr32((u32)param_1 + 0x40u, 0u);
    for (;;) {
        a.r[0] = (u32)param_1 + 0x18u;
        r3 = tc_call(0x8028a9f8u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) break;
        a.r[0] = r3;
        (void)tc_call(0x8028a35cu, &a);
    }
    r0 = (u32)rd8((u32)param_1 + 0x68u);
    wr32((u32)param_1 + 0x28u, 0u);
    wr8((u32)param_1 + 2u, 0u);
    if (r0 == 0u) {
        if ((u32)rd8(0x8054161cu) >= 5u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x90004u;
            a.r[1] = 0x80397000u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028cc54u, &a);
        }
        r3 = rd32((u32)param_1 + 0x6cu);
        if (r3 != 0u) {
            r3 = r3 + (u32)rd8((u32)param_1 + 0xdu);
            wr8(r3 + 0x24u, 0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32((u32)param_1 + 0x6cu);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802b1754u, &a);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b16fcu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 0xa4u;
        (void)tc_call(0x8000443cu, &a);
    }
    return;
}
