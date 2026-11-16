#include "tc_rt.h"

void fn_80097234(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8009a64cu, &a);
    a.r[0] = param_2;
    a.r[1] = param_3;
    r3 = tc_call(0x80096ce0u, &a);
    r4 = rd32((u32)param_1 + 0x4cu);
    r29 = r3;
    r30 = rd32(0x80571184u);
    if (rd32(r4 + 0x44u) != 0u) {
        wr32(r4 + 0x3cu, r30);
        if (r30 == 0u || r30 == 1u) {
            r29 = 0x28u;
        } else {
            if (r30 == 2u) {
                if ((u32)rd8(0x80492834u) == 0u) {
                    r0 = 0u;
                } else {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r29 = 0xau;
                } else {
                    r29 = 9u;
                }
            }
        }
    }
    r3 = rd32((u32)param_1 + 0x4cu);
    r4 = rd32(r3 + 0x50u);
    if ((s32)r4 >= 0) {
        r29 = r4;
        wr32(r3 + 0x50u, 0xffffffffu);
    }
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = r29;
    r3 = tc_call(0x800a2d2cu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x4cu);
        (void)tc_call(0x800abce0u, &a);
        a.r[0] = 2u;
        a.r[1] = 0u;
        f1 = tc_callf(0x800a730cu, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0x24u);
        a.r[7] = 0u;
        (void)tc_call(0x80114d9cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x38u);
        (void)tc_call(0x80141d20u, &a);
        if (rd32(rd32((u32)param_1 + 0x4cu) + 0x44u) != 0u) {
            wr32(0x804b9e08u, 1u);
            if (r30 == 0u || r30 == 1u) {
                a.r[0] = 0u;
                a.r[1] = 0x43u;
                (void)tc_call(0x800a730cu, &a);
                a.r[0] = 2u;
                a.r[1] = 0x43u;
                (void)tc_call(0x800a730cu, &a);
            } else {
                if (r30 == 2u) {
                    a.r[0] = 2u;
                    a.r[1] = 0x56u;
                    (void)tc_call(0x800a730cu, &a);
                }
            }
        }
        a.r[0] = rd32((u32)param_1 + 8u);
        r3 = tc_call(0x800ae1d0u, &a);
        if (r3 == 0u) {
            a.r[0] = rd32((u32)param_1 + 0x60u);
            (void)tc_call(0x80213858u, &a);
        }
        r3 = tc_call(0x801567a0u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
        r29 = rd32(0x805706e8u);
        r30 = rd32(0x80571144u);
        r3 = tc_call(0x801567a0u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = r29;
        a.r[2] = r30;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x38u), &a);
        a.r[0] = rd32((u32)param_1 + 0x58u);
        r3 = tc_call(0x8010c944u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x58u);
            a.r[1] = 0u;
            (void)tc_call(0x8010c8b8u, &a);
        }
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x800a3460u, &a);
        f1 = tc_lastf();
        if (r3 == 0u && rd32(rd32((u32)param_1 + 0x4cu) + 0x44u) == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 2u;
            a.r[1] = 0x51u;
            a.r[2] = 0x800971b4u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x800a7228u, &a);
        }
        a.r[0] = rd32((u32)param_1 + 0x4cu);
        (void)tc_call(0x800abd80u, &a);
        wr32(rd32((u32)param_1 + 0x4cu) + 0x48u, 0u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x8009a64cu, &a);
    }
    return;
}
