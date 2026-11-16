#include "tc_rt.h"

void fn_80237184(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r0 = rd32(0x80571644u);
    wr32(0x80571630u, 1u);
    if (r0 <= 0x2au) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc78facu);
        sw_ = r3;
        switch (sw_) {
        case 0x8023721cu:
            break;
        case 0x80237210u:
            if (rd32(0x80571448u) != 0u) {
                return;
            }
            break;
        case 0x802371bcu:
            f1 = tc_callf(0x80239aa4u, &a);
            r4 = rd32(0x80571650u);
            wr32(0x80571650u, 0x804e5b60u);
            r12 = rd32(r4 + 0x28u);
            if (r12 != 0u) {
                a.r[0] = 0xfffffffcu;
                a.r[1] = r4;
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
            }
            (void)tc_call(0x80237c80u, &a);
            return;
        case 0x802371f0u:
            wr32(0x80571630u, 0u);
        case 0x802371f8u:
            wr32(rd32(0x80571650u) + 0xcu, 1u);
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = rd32(0x80571650u);
            a.r[7] = param_r10;
            (void)tc_call(0x80237fa8u, &a);
            return;
        default:
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[7] = param_r10;
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    wr32(0x80571630u, 0u);
    a.r[0] = 1u;
    f1 = tc_callf(0x8023c15cu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x80237498u;
    a.r[7] = 0u;
    (void)tc_call(0x8023c168u, &a);
    return;
}
