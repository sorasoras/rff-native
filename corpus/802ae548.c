#include "tc_rt.h"

void fn_802ae548(s32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
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
    if ((u32)rd8(0x8054161cu) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x90003u;
        a.r[1] = 0x80397424u;
        a.r[2] = param_2;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x8028cc6cu, &a);
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
    if ((u32)rd8(param_2 + 2u) != 0u) {
        wr16((u32)param_1 + 0x6au, (u16)((u32)rd16(param_2 + 4u) - 6u));
    } else {
        wr16((u32)param_1 + 0x6au, 0x29au);
    }
    wr8(param_2 + 2u, 0u);
    wr8(param_2 + 0x20u, 0u);
    wr8(param_2 + 6u, 0u);
    wr16(param_2, 0u);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    a.r[0] = (u32)rd16((u32)param_1 + 0x68u);
    a.r[1] = param_2;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    (void)tc_call(0x802a5c1cu, &a);
    r0 = (u32)rd8((u32)param_1 + 0x6cu);
    wr8((u32)param_1 + 0x6fu, 1u);
    if (r0 == 2u && (u32)rd8((u32)param_1 + 0x6eu) != 0u) {
        if ((u32)rd8((u32)param_1 + 0x6du) != 0u) {
            wr8((u32)param_1 + 0x6cu, 3u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            (void)tc_call(0x802afd04u, &a);
        } else {
            wr8((u32)param_1 + 0x6cu, 4u);
        }
    }
    return;
}
