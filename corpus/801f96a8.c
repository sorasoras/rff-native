#include "tc_rt.h"

u32 fn_801f96a8(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0xffffffffu;
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x804de14cu;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x801f45acu, &a);
    f1 = tc_lastf();
    r6 = tc_junkr(6u);
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    if (rd32(r3) != 0u) {
        r30 = rd32(r3 + 0x10u);
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x804de14cu;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x801f4324u, &a);
        f1 = tc_lastf();
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        if (r3 != 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = rd32(param_1) + 0xcdu;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            r3 = tc_call(0x801f48f0u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                r30 = rd32(r3 + 0x10u);
            }
        }
    }
    if ((s32)r30 >= 0) {
        a.r[0] = r30;
        r3 = tc_call(0x8013f53cu, &a);
        f1 = tc_lastf();
        a.r[0] = param_1;
        a.r[1] = r3;
        a.r[2] = 0u;
        r3 = tc_call(0x801006a4u, &a);
        f1 = tc_lastf();
    }
    return 1u;
}
