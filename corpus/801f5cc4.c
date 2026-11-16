#include "tc_rt.h"

void fn_801f5cc4(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r31 = 0;
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
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((s32)rd32(param_1) > 0) {
        while ((s32)r31 < (s32)rd32(param_1)) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0x8033c30au;
            a.r[2] = 0x8033c300u;
            a.r[3] = r31 + 0xau;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8025b994u, &a);
            a.r[0] = 0x80571250u;
            a.r[1] = rd32(param_1 + 0x2cu);
            a.r[2] = 0x817fdfd8u;
            r3 = tc_call(0x80103254u, &a);
            a.r[0] = param_1;
            a.r[1] = r31;
            a.r[2] = r3;
            f1 = tc_callf(0x801894c8u, &a);
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
            r31 = r31 + 1u;
        }
    }
    a.r[0] = param_1 + 0x30u;
    a.r[1] = rd32(param_1 + 0x2cu);
    (void)tc_call(0x801f0e3cu, &a);
    return;
}
