#include "tc_rt.h"

void fn_80234ea0(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r6 = param_4;
    r7 = param_5;
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
    if ((s32)param_4 < 0 || param_4 > rd32(param_1 + 0x34u)) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80570ac8u;
        a.r[1] = 0x37du;
        a.r[2] = 0x80386fa4u;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x802285e4u, &a);
        r3 = tc_lastr();
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
    r4 = param_4 + (u32)param_3;
    if ((s32)r4 < 0 || r4 >= (rd32(param_1 + 0x34u) + 0x20u)) {
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0x80570ac8u;
        a.r[1] = 0x383u;
        a.r[2] = 0x80386fa4u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x802285e4u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = rd32(param_1 + 0x30u) + (u32)((s32)param_4 >> 2);
    a.r[4] = 0x80234fc8u;
    a.r[5] = param_5;
    r3 = tc_call(0x80238f38u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        return;
    }
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r31 = r3;
    for (;;) {
        r0 = rd32(param_1 + 0xcu);
        if (r0 == 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x8022c2d8u, &a);
            f1 = tc_lastf();
            return;
        }
        if (r0 == 0xffffffffu) {
            a.r[0] = r31;
            r3 = tc_call(0x8022c2d8u, &a);
            f1 = tc_lastf();
            return;
        }
        if (r0 == 0xau) {
            a.r[0] = r31;
            r3 = tc_call(0x8022c2d8u, &a);
            f1 = tc_lastf();
            return;
        }
        a.r[0] = 0x805715a0u;
        r3 = tc_call(0x8022ffe4u, &a);
        f1 = tc_lastf();
    }
}
