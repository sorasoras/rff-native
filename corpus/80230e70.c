#include "tc_rt.h"

u32 fn_80230e70(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x803869a8u;
        a.r[1] = 0x314u;
        a.r[2] = 0x80386a24u;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802285e4u, &a);
    }
    r3 = rd32(0x804e0c80u);
    wr32(0x80571530u, 0u);
    if ((r3 - 0x20000u) == 0u) {
        if ((rd32(0xcc003000u) & 0x10000u) == 0u) {
            r0 = 1u;
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            f1 = tc_lastf();
            r12 = rd32(0x8057153cu);
            r31 = r3;
            wr32(0x80571520u, 1u);
            wr32(0x8057153cu, 0x80230e68u);
            a.r[0] = r3;
            a.r[1] = 0x80230e68u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            (void)tc_call(r12, &a);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            (void)tc_call(0x8023f934u, &a);
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = r3;
        a.r[0] = rd32(0x8057152cu);
        a.r[1] = 0x1000u;
        a.r[2] = 0x804e0c60u;
        a.r[3] = 0x20u;
        a.r[4] = 0x804e0c80u;
        a.r[5] = 0x20u;
        a.r[6] = 0x80230e70u;
        a.r[7] = 0u;
        r3 = tc_call(0x8026fd70u, &a);
        if (r3 == 0u) {
            wr32(0x80571530u, 1u);
        } else {
            wr32(0x80571530u, 0u);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    if (rd32(0x804e0c80u) == 0x800u) {
        r3 = tc_call(0x8022c2b0u, &a);
        f1 = tc_lastf();
        r12 = rd32(0x80571538u);
        r31 = r3;
        wr32(0x80571538u, 0x80230e6cu);
        a.r[0] = r3;
        a.r[1] = 0x80230e6cu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        (void)tc_call(r12, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return 0u;
}
