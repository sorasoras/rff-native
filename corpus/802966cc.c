#include "tc_rt.h"

void fn_802966cc(u32 param_1, u32 param_2, u32 param_3, s32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r5 = param_3;
    r6 = (u32)param_4;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r8 = param_r8;
    r9 = param_r9;
    r7 = 0x8053d958u;
    if ((u32)rd8(0x80540118u) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x80393aecu;
        a.r[2] = param_1;
        a.r[3] = param_2;
        a.r[4] = 0x8053d958u;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x8028cc84u, &a);
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
    }
    if ((u32)rd8(0x8053dfa8u) != 0u) {
        if ((u32)rd8(0x80540118u) >= 4u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0xd0003u;
            a.r[1] = 0x80393b2cu;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8028cc54u, &a);
        }
    } else {
        a.r[0] = (param_2 + 0xbu) & 0xffffu;
        r3 = tc_call(0x8028a0d4u, &a);
        if (r3 != 0u) {
            wr32(0x8053df74u, (u32)param_4);
            if ((u32)param_4 != 0u) {
                wr8(0x8053dfa8u, 1u);
            }
            a.r[0] = r3;
            a.r[1] = param_1;
            a.r[2] = param_2;
            a.r[3] = param_3;
            (void)tc_call(0x802a2154u, &a);
            if ((u32)param_4 != 0u) {
            }
        }
    }
    return;
}
