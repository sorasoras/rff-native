#include "tc_rt.h"

u32 fn_801d41e8(u32 param_1, s32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((rd32((u32)param_2 + 0x30u) & 0x8000u) != 0u) {
        r3 = 2u;
    } else {
        if ((s32)rd32(param_1 + 0xd7cu) < 45) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = param_1 + 0xd80u;
            a.r[1] = 4u;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x801d51d8u, &a);
            r3 = 0u;
        } else {
            wr32(param_1 + 0xd7cu, 0u);
            r3 = tc_call(0x80040b64u, &a);
            f1 = tc_lastf();
            r31 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_1 + 0xd80u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801d5514u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 1u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_1 + 0xd80u;
                a.r[1] = 7u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x801d51d8u, &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
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
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x23fbu;
                a.r[2] = r3;
                (void)tc_call(0x8010a794u, &a);
                r3 = 2u;
            } else {
                if ((s32)r31 < (s32)rd32(param_1 + 0xd44u)) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = param_1 + 0xd80u;
                    a.r[1] = 5u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x801d51d8u, &a);
                    r3 = 2u;
                } else {
                    if ((r31 & 8u) != 0u) {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = 0u;
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
                        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 0x23f1u;
                        a.r[2] = r3;
                        (void)tc_call(0x8010a794u, &a);
                    } else {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = 0u;
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
                        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 0x23f2u;
                        a.r[2] = r3;
                        (void)tc_call(0x8010a794u, &a);
                    }
                    a.r[0] = param_1;
                    a.r[1] = (u32)param_2;
                    a.r[2] = param_3;
                    r3 = tc_call(0x8007f238u, &a);
                }
            }
        }
    }
    return r3;
}
