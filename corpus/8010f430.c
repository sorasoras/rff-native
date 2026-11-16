#include "tc_rt.h"

void fn_8010f430(s32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x18u);
    if (r0 == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 1u;
        a.r[1] = 0x34u;
        a.r[2] = 0x8010efecu;
        a.r[3] = 2u;
        a.r[4] = param_3;
        a.r[5] = 0x34u;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x800a6fccu, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 1u;
            a.r[1] = 0x35u;
            a.r[2] = 0x8010efecu;
            a.r[3] = 2u;
            a.r[4] = param_3;
            a.r[5] = 0x35u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x800a6fccu, &a);
            if (r3 == 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = param_2;
                a.r[2] = param_3;
                r3 = tc_call(0x8010f324u, &a);
                r31 = r3;
                a.r[0] = param_2;
                a.r[1] = 0xffffffffu;
                a.r[2] = 0xffffffffu;
                r3 = tc_call(0x800a7e80u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    a.r[0] = param_2;
                    a.r[1] = 6u;
                    r3 = tc_call(0x8014da9cu, &a);
                    f1 = tc_lastf();
                    if (r3 != 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0x59u;
                        a.r[2] = r31;
                        a.r[3] = param_3;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        r3 = tc_call(0x8010f3bcu, &a);
                        f1 = tc_lastf();
                        if (r3 != 0u) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = r31;
                            (void)tc_call(0x8010f67cu, &a);
                            return;
                        }
                    } else {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0x58u;
                        a.r[2] = r31;
                        a.r[3] = param_3;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        r3 = tc_call(0x8010f3bcu, &a);
                        f1 = tc_lastf();
                        if (r3 != 0u) {
                            a.r[0] = param_2;
                            a.r[1] = 0xdu;
                            a.r[2] = 1u;
                            (void)tc_call(0x8014dadcu, &a);
                            a.r[0] = (u32)param_1;
                            a.r[1] = r31;
                            (void)tc_call(0x8010f67cu, &a);
                            return;
                        }
                    }
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
                a.r[1] = 0xbu;
                a.r[2] = r31;
                a.r[3] = param_3;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8010f3bcu, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = r31;
                (void)tc_call(0x8010f67cu, &a);
            }
        }
    } else {
        a.r[0] = 1u;
        a.r[1] = 0x4du;
        a.r[2] = r0;
        (void)tc_call(0x800a6d04u, &a);
        wr32((u32)param_1 + 0x18u, 0u);
    }
    return;
}
