#include "tc_rt.h"

void fn_801e5998(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0eq = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (rd32(0x805713b8u) == 0u && rd32(0x804dcaf4u) != 0u) {
        r30 = rd32(0x804dcaf8u);
        if (r30 == 0u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x803759f4u;
            a.r[1] = 0x23du;
            a.r[2] = 0x803759d0u;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            f1 = tc_callf(0x802e41c0u, &a);
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
        r31 = r30 - 0x10u;
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x80375a24u;
            a.r[1] = 0x193u;
            a.r[2] = 0x80375a00u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x802e41c0u, &a);
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
        }
        wr32(0x805713b8u, r31);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = r31;
        a.r[7] = r10;
        (void)tc_call(0x801e5f70u, &a);
        wr32(0x817fdfe0u, r30);
        a.r[0] = 0x804dcaf4u;
        a.r[1] = 0x817fdfe0u;
        f1 = tc_callf(0x802deab0u, &a);
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
    if (rd32(0x804dcb0cu) != 0u) {
        r30 = rd32(0x804dcb10u);
        if (r30 == 0u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x80375994u;
            a.r[1] = 0x23du;
            a.r[2] = 0x80375970u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x802e41c0u, &a);
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
        r29 = r30 - 0x18u;
        if (r29 == 0u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x803759c4u;
            a.r[1] = 0x193u;
            a.r[2] = 0x803759a0u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x802e41c0u, &a);
        }
        (void)tc_call(0x8022c2b0u, &a);
        wr32(0x805713c0u, 1u);
        wr32(0x817fdfdcu, r30);
        a.r[0] = 0x804dcb0cu;
        a.r[1] = 0x817fdfdcu;
        f1 = tc_callf(0x802deab0u, &a);
        r30 = rd32(0x805713bcu);
        c0eq = r30 == 0u;
        if (!c0eq) {
            if (c0eq) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80375964u;
                a.r[1] = 0x233u;
                a.r[2] = 0x80375940u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802e41c0u, &a);
            }
            wr32(0x817fdfd8u, 0x804dcb10u);
            a.r[0] = 0x804dcb0cu;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = r30 + 0x18u;
            (void)tc_call(0x802deba4u, &a);
            wr32(0x805713bcu, 0u);
        }
        wr32(0x805713c0u, 0u);
        (void)tc_call(0x8022c2c4u, &a);
        a.r[0] = r29;
        (void)tc_call(0x801e5fa4u, &a);
        if (r29 != 0u) {
            a.r[0] = r29;
            (void)tc_call(0x801e5f10u, &a);
        }
    }
    return;
}
