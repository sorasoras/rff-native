#include "tc_rt.h"

void fn_802f87f4(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r30 = param_2 + (u32)param_3;
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    if ((u32)(s8)rd8(0x80571d98u) == 0u) {
        wr32(0x805483e8u, 0u);
        wr32(0x805483ecu, 0u);
        wr32(0x805483e4u, 0u);
        wr32(0x805483e8u, 0x805483e8u);
        wr32(0x805483ecu, 0x805483e8u);
        a.r[0] = 0x805483e4u;
        a.r[1] = 0x802f8628u;
        a.r[2] = 0x805483d8u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571d98u, 1u);
    }
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    r29 = rd32(0x805483e8u);
    for (;;) {
        r3 = tc_call(0x8022c2b0u, &a);
        r28 = r3;
        if ((u32)(s8)rd8(0x80571d98u) == 0u) {
            wr32(0x805483e8u, 0u);
            wr32(0x805483ecu, 0u);
            wr32(0x805483e4u, 0u);
            wr32(0x805483e8u, 0x805483e8u);
            wr32(0x805483ecu, 0x805483e8u);
            a.r[0] = 0x805483e4u;
            a.r[1] = 0x802f8628u;
            a.r[2] = 0x805483d8u;
            (void)tc_call(0x802551b8u, &a);
            wr8(0x80571d98u, 1u);
        }
        a.r[0] = r28;
        f1 = tc_callf(0x8022c2d8u, &a);
        if (r29 == 0x805483e8u) break;
        r3 = r29;
        r12 = rd32(rd32(r29 + 8u) + 0x10u);
        r29 = rd32(r29);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = r30;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
