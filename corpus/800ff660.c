#include "tc_rt.h"

static void px_rec(u32 sp_, s32 param_1, u32 param_2, u32 param_3)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r23 = 0, r24 = 0, r25 = 0, r30 = 0, r31 = 0;
    u32 t0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = sp_;
    lr = 0x817ff000u;
    r3 = (u32)param_1;
    r4 = param_2;
    r5 = param_3;
    for (;;) {
        wr32(r1 - 0x30u, r1);
        r1 = r1 - 0x30u;
        wr32(r1 + 0x34u, lr);
        t0 = r1 + 0xcu;
        wr32(t0, r23);
        wr32(t0 + 4u, r24);
        wr32(t0 + 8u, r25);
        wr32(t0 + 0xcu, 0u);
        wr32(t0 + 0x10u, 0u);
        wr32(t0 + 0x14u, 0u);
        wr32(t0 + 0x18u, 0u);
        wr32(t0 + 0x1cu, 0u);
        wr32(t0 + 0x20u, 0u);
        r24 = r5;
        r23 = r3;
        r25 = r4;
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r3 + 0x14u;
        r3 = tc_call(0x800ff054u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (r3 == 0u) break;
        r0 = (ppc_cntlzw(r24) >> 5u) & 0x7ffffffu;
        wr8(r3 + 0xeu, (u8)r0);
        r0 = ppc_cntlzw(r0);
        r3 = r25;
        r12 = rd32(r25);
        r5 = (r0 >> 5u) & 0x7ffffffu;
        r4 = rd32(r4 + 8u);
        r12 = rd32(r12 + 0x5cu);
        lr = 0x800ff6c0u;
        if (r12 != 0x800ff660u) {
            a.r[0] = r25;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            break;
        }
    }
    r31 = rd32(r25 + 0x14u);
    r30 = r25 + 0x14u;
    while (r31 != r30) {
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x803604e4u;
            a.r[1] = 0x23du;
            a.r[2] = 0x803604c0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802e41c0u, &a);
            r3 = tc_lastr();
        }
        r25 = r31 - 4u;
        if (r25 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80360514u;
            a.r[1] = 0x193u;
            a.r[2] = 0x803604f0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802e41c0u, &a);
            r3 = tc_lastr();
        }
        px_rec(r1, r23, r25, r24);
        r31 = rd32(r31);
    }
    return;
}

void fn_800ff660(s32 param_1, u32 param_2, u32 param_3)
{
    px_rec(0x817fe000u, param_1, param_2, param_3);
}
