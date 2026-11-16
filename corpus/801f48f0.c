#include "tc_rt.h"

s32 fn_801f48f0(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r31 = 0u;
    if ((u32)(s8)rd8(0x805713d8u) == 0u) {
        r7 = 0x804e0000u;
        r8 = rd32(rd32(0x80376a58u));
        r6 = rd32(rd32(0x80376a5cu));
        r3 = rd32(rd32(0x80376a60u));
        wr32(0x804df138u, r8);
        wr32(0x804df13cu, r6);
        wr32(0x804df140u, r3);
        wr8(0x805713d8u, 1u);
    }
    r4 = rd32(param_2);
    if (r4 == rd32(0x804df138u)) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = param_1;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x801f4780u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            return (s32)r31;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801f4780u, &a);
        r31 = r3 + 8u;
    } else {
        if (r4 == rd32(0x804df13cu)) {
            a.r[0] = param_1;
            r3 = tc_call(0x801f4704u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                return (s32)r31;
            }
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801f47f4u, &a);
            r31 = r3 + 8u;
        } else {
            if (r4 == rd32(0x804df140u)) {
                a.r[0] = param_1;
                r3 = tc_call(0x801f4740u, &a);
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
                    a.r[0] = param_1;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x801f486cu, &a);
                    r31 = r3 + 8u;
                }
            }
        }
    }
    return (s32)r31;
}
