#include "tc_rt.h"

void fn_80236cc4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x805715c0u) == 0u) {
        wr32(0x804e5ef8u, param_1);
    } else {
        wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a16cu, param_1);
    }
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    if (param_1 == 0x10u) {
        a.r[0] = 0x1234568u;
        a.r[1] = 0x80235600u;
        (void)tc_call(0x8023a598u, &a);
    } else {
        if (param_1 == 0x20u) {
            a.r[0] = 0x1234569u;
            a.r[1] = 0x80235600u;
            (void)tc_call(0x8023a598u, &a);
        } else {
            if ((param_1 & 1u) != 0u) {
                wr32(0x805715d8u, 0u);
                if (rd32(0x805715d0u) != 0u) {
                    r31 = rd32(0x80571650u);
                    wr32(0x805715d4u, 0u);
                    wr32(0x805715d0u, 0u);
                    wr32(0x80571650u, 0x804e5b60u);
                    wr32(r31 + 0xcu, 0xau);
                    r12 = rd32(r31 + 0x28u);
                    if (r12 != 0u) {
                        a.r[0] = 0xfffffffdu;
                        a.r[1] = r31;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(r12, &a);
                    }
                    r12 = rd32(0x80571640u);
                    if (r12 != 0u) {
                        a.r[0] = 0u;
                        a.r[1] = r31;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                    f1 = tc_callf(0x80237c80u, &a);
                    r0 = 1u;
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) {
                    return;
                }
                wr32(rd32(0x80571650u) + 0xcu, 1u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = rd32(0x80571650u);
                a.r[7] = 0u;
                (void)tc_call(0x80237fa8u, &a);
            } else {
                a.r[0] = 0x27u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                f1 = tc_callf(0x80234fd0u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x802357f4u;
                a.r[7] = 0u;
                (void)tc_call(0x8023bff4u, &a);
            }
        }
    }
    return;
}
