#include "tc_rt.h"

void fn_802c0748(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 0xffu) {
        r29 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fab8ba0u);
        r28 = rd32(r29);
        a.r[0] = r28;
        r3 = tc_call(0x8027b068u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.r[0] = r28;
            a.r[1] = 2u;
            a.r[2] = 0u;
            (void)tc_call(0x8027b0acu, &a);
            r4 = r28;
            r28 = (r28 * 0x30u) - 0x7fab8c60u;
            a.r[0] = r28;
            a.r[1] = r4;
            (void)tc_call(0x80226e98u, &a);
            a.r[0] = r28;
            (void)tc_call(0x80226a70u, &a);
            a.r[0] = r28;
            a.r[1] = 0x10624dd3u;
            a.r[2] = 0u;
            a.r[3] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x3e8u;
            a.r[4] = 0x802c0858u;
            f1 = tc_callf(0x8022697cu, &a);
            wr8(r29 + 0x41u, 1u);
        }
    }
    r12 = rd32(rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fab8ba0u) + 0x28u);
    if (r12 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    return;
}
